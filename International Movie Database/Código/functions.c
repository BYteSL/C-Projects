/*
* Author: Yuri Lemos E João Figueiredo
* Description: Este Programa faz leitura de uma fichero ".txt" e com estes dados recolhidos efetua calculos estatisticos
* Data: 14 / 3 / 2020 
* Version: 1.0
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#include "structs.h"
#include "functions.h"
#define MAX 64
#define DEBUG 0
#define TXTACTOR "actorsBig.txt"
#define TXTCOACTOR "co-actorsBig.txt"
/* #define TXTACTOR "actors.txt"
#define TXTCOACTOR "co-actors.txt" */

/**
 *!                                                 FUNCTIONS
*/
/**
 *?----------------------------------------------Funçoes de Carregamento--------------------------------------------------------------
*/
/**
 *! Exercicio 1
*/
Actor3 *LoadFileActors(Actor3 *actor)
{
    FILE *ficheiro;
    Actor3 *aux = (Actor3 *)malloc(sizeof(Actor3));
    char *a, *b, *c, *line;
    int i = 0;
    aux = NULL;

    ficheiro = fopen(TXTACTOR, "r");

    line = (char *)malloc(MAX * sizeof(char));
    a = (char *)malloc(sizeof(char) * 11);
    b = (char *)malloc(sizeof(char) * 50);
    c = (char *)malloc(sizeof(char) * 2);

    if (ficheiro == NULL)
    {
        printf("Não foi possivel abrir o ficheiro para leitura!\n");
    }
    else
    {
        while (fgets(line, MAX, ficheiro) != NULL)
        {
            a = DevolveId(line);
            c = DevolveGender(line);
            b = DevolveName(line);

            aux = InsertTreeNode(aux, a, b, c);
            i++;
        }
    }
    system("cls");
    printf("Total de Registros: %d\n", i);
    fclose(ficheiro);
    free(a);
    free(b);
    free(c);
    free(line);
    return aux;
}

CoActor2 *sorted_insert(CoActor2 *lst, char *id, Actor3 *Ator, Actor3 *ProprioAtor)
{
    if (!lst || GetIdNumber(id) < GetIdNumber(lst->id))
    {
        CoActor2 *new = (CoActor2 *)malloc(sizeof(CoActor2));
        strcpy(new->id, id);
        new->seguinte = lst;
        new->contagem = 1;
        new->actorProprio = ProprioAtor;
        lst = new;
        Ator->numCoActoresDiferentes++;
    }
    else
    {
        if (lst && GetIdNumber(id) == GetIdNumber(lst->id))
            lst->contagem++;
        else
            lst->seguinte = sorted_insert(lst->seguinte, id, Ator, ProprioAtor);
    }

    return lst;
}

void *LoadFileCoActors(Actor3 *actor)
{
    FILE *ficheiro;
    Actor3 *aux = (Actor3 *)malloc(sizeof(Actor3));
    Actor3 *aux2 = (Actor3 *)malloc(sizeof(Actor3));
    Actor3 *aux3 = actor;
    int i = 0;
    char *a, *b;

    ficheiro = fopen(TXTCOACTOR, "r");

    a = (char *)malloc(sizeof(char) * 16);
    b = (char *)malloc(sizeof(char) * 16);

    if (ficheiro == NULL)
    {
        printf("Não foi possivel abrir o ficheiro para leitura!\n");
    }
    else
    {
        while (fscanf(ficheiro, "%s %s", a, b) != EOF)
        {
            i++;

            aux = FindActorManualIterativa(aux3, a);
            aux2 = FindActorManualIterativa(aux3, b);

            if (aux != NULL && aux2 != NULL)
            {
                /* //--------------------------------- primeira insercao--------------------------------------
                //CoActor2 *new = (CoActor2 *)malloc(sizeof(CoActor2));
                //strcpy(new->id, b);
                //new->seguinte = aux->incidencia;
                //aux->incidencia = new;
                //aux->numElementos++; */
                aux->incidencia = sorted_insert(aux->incidencia, b, aux, aux2);
                aux->numAtuacoes++;
                /*--------------------------------- Segunda insercao--------------------------------------*/
                i++;
                /*                 CoActor2 *new2 = (CoActor2 *)malloc(sizeof(CoActor2));
                strcpy(new2->id, a);
                new2->seguinte = aux2->incidencia;
                aux2->incidencia = new2;
                aux2->numElementos++; */

                aux2->incidencia = sorted_insert(aux2->incidencia, a, aux2, aux);
                aux2->numAtuacoes++;
                if (aux->genero[0] != 'F')
                {
                    aux2->soTemMulher = -1;
                }
                if (aux2->genero[0] != 'F')
                {
                    aux->soTemMulher = -1;
                }

                if (DEBUG == 1)
                {
                    if (i % 13000 == 0)
                    {
                        printf("%d - %d Percent done.....\n", i, (i / 13000));
                    }
                }
            }
            else
            {
                if (DEBUG == 1)
                    printf("Nao encontrei na arvore a linha %d %s %s\n", i, a, b);
            }
        }
    }

    printf("acabei coatores\n");
    printf("%d\n", i);
    fclose(ficheiro);
}

char *DevolveName(char line[])
{
    char *aux, *aux1;

    int i = 0, j = 0;
    int a, b;
    a = strlen(line);
    aux1 = (char *)malloc((a + 1) * sizeof(char));
    strcpy(aux1, line);

    a = a - 2;

    aux1[a] = '\0';

    while (line[i] != '\0' && line[i] != '\t')
    {
        i++;
    }
    i++;

    b = (a - i) + 1;

    aux = (char *)malloc(b * sizeof(char));
    for (i = i; i < a - 1; i++)
    {

        aux[j] = aux1[i];
        j++;
    }
    aux[j] = '\0';
    return aux;
}
char *DevolveGender(char line[])
{

    char *aux = (char *)malloc(2 * sizeof(char));
    int a;
    a = strlen(line);

    aux[0] = line[a - 2];
    aux[1] = '\0';

    return aux;
}

int GetIdNumber(char *idString)
{
    int i = 0;
    char aux[16];

    while (idString[i] != 0)
    {
        aux[i - 2] = idString[i];
        i++;
    }

    aux[i - 2] = 0;

    i = atoi(aux);

    /* //printf("********** %d *************\n", i); */

    return i;
}

char *DevolveId(char line[])
{
    char *aux;
    int i = 0, j = 0;

    while (line[i] != '\0' && line[i] != '\t')
    {
        i++;
    }
    aux = (char *)malloc((i + 1) * sizeof(char));

    for (j = 0; j < i; j++)
    {
        aux[j] = line[j];
    }
    aux[j] = '\0';

    return aux;
}

Actor3 *InsertTreeNode(Actor3 *actor, char *id, char *nome, char *sexo)
{

    if (actor == NULL)
    {
        return NewNode(id, nome, sexo);
    }
    else
    {
        if (GetIdNumber(id) < GetIdNumber(actor->id))
        {

            actor->anterior = InsertTreeNode(actor->anterior, id, nome, sexo);
        }
        else if (GetIdNumber(id) > GetIdNumber(actor->id))
        {

            actor->seguinte = InsertTreeNode(actor->seguinte, id, nome, sexo);
        }
    }
    return actor;
}

Actor3 *NewNode(char *id, char *nome, char *sexo)
{
    Actor3 *new = (Actor3 *)malloc(sizeof(Actor3));
    strcpy(new->id, id);
    strcpy(new->nome, nome);
    strcpy(new->genero, sexo);
    new->numAtuacoes = 0;
    new->numCoActoresDiferentes = 0;
    new->soTemMulher = 0;
    new->anterior = NULL;
    new->seguinte = NULL;
    new->incidencia = NULL;
    return new;
}

Actor3 *FindActorManualIterativa(Actor3 *actors, char *id)
{
    int key = GetIdNumber(id);
    int code_tree = -1;
    Actor3 *aux = actors;

    while (aux != NULL && code_tree != key)
    {
        code_tree = GetIdNumber(aux->id);
        /* //printf("%d %d \t", code_tree, key); */

        if (key < code_tree)
            aux = aux->anterior;
        else if (key > code_tree)
            aux = aux->seguinte;
    }
    /*    if (aux != NULL)
            printf("%s %d \n", aux->nome, aux->id);
        else
            printf("sai\n");  */

    return aux;
}

Actor3 *FindActorManual1(Actor3 *actors, char *id)
{

    int key, code_tree;
    if (actors)
    {

        key = GetIdNumber(id);
        code_tree = GetIdNumber(actors->id);
        if (key < code_tree)
        {

            return FindActorManual1(actors->anterior, id);
        }
        else if (key > code_tree)
        {
            return FindActorManual1(actors->seguinte, id);
        }
        else
        {
            printf("procura %s %s", actors->id, id);
            getchar();
            return actors;
        }
    }
    else
    {
        return NULL;
    }
}

void ListarTreeActors(Actor3 *actor)
{

    if (actor)
    {
        ListarTreeActors(actor->anterior);
        ImprimirActor(actor);

        if (actor->numCoActoresDiferentes != actor->numAtuacoes)
        {
            printf("Encontrei um ator com contracenacoes repetidas, prima uma tecla par aocntinuar");
            getchar();
        }

        ListarCoAtores2Recursivo(actor->incidencia);

        ListarTreeActors(actor->seguinte);
    }
}

void ImprimirActor(Actor3 *actor)
{
    printf("\nActor\n");
    printf("ID: %s  Name: %s Gender: %s N. Atuacoes: %d N. Atores diferentes:%d \n", actor->id, actor->nome, actor->genero, actor->numAtuacoes, actor->numCoActoresDiferentes);
}
void ListarCoAtores2Recursivo(CoActor2 *CoActor)
{
    if (CoActor != NULL)
    {
        printf("Coactor \t");
        printf("%s\t%s\t%d\t%s \n", CoActor->actorProprio->nome, CoActor->id, CoActor->contagem, CoActor->actorProprio->genero);
        ListarCoAtores2Recursivo(CoActor->seguinte);
    }
}

void ListarTreeActors_Coatores(Actor3 *actor)
{

    if (actor)
    {
        ListarTreeActors(actor->anterior);
        printf("ID: %s  Name: %s Gender: %s\n", actor->id, actor->nome, actor->genero);
        if (actor->incidencia != NULL)
        {
            CoActor2 *aux = actor->incidencia;
            while (aux)
            {
                printf("CoAtor ID: %s\n", aux->id);
                aux = aux->seguinte;
            }
        }
        ListarTreeActors(actor->seguinte);
    }
}

void FindCoactors(Actor3 *actor)
{
    Actor3 *aux = NULL;
    char procura[16];
    do
    {
        system("cls");
        printf("Indique o Id de um actor a procurar!\n");
        scanf("%s", procura);
        if (FindActorManualIterativa(actor, procura) == NULL)
        {
            printf("Actor nao existe! Tente novamente!\n");
        }
    } while (FindActorManualIterativa(actor, procura) == NULL);
    /* //------encontra o actor ---------- */
    aux = FindActorManualIterativa(actor, procura);

    printf("\n");
    ImprimirActor(aux);

    ListarCoAtores2Recursivo(aux->incidencia);
    printf("\n\nPrima qualquer tecla\n");
    fflush(stdin);
    getchar();
}

void find(Actor3 *actor)
{
    if (actor)
    {
        find(actor->anterior);
        if (actor)
            printf("%s, %d\n", actor->id, actor->soTemMulher);
        find(actor->seguinte);
    }
}

void FindActorsWho_act_only_whith_females(Actor3 *actor)
{
    if (actor)
    {
        FindActorsWho_act_only_whith_females(actor->anterior);

        if (actor->soTemMulher == 0)
        {
            ImprimirActor(actor);
            ListarCoAtores2Recursivo(actor->incidencia);
        }

        FindActorsWho_act_only_whith_females(actor->seguinte);
    }
}

void WriteTree(Actor3 *actor)
{

    FILE *dados;

    dados = fopen("dadosFinais.txt", "wb");
    if (dados == NULL)
    {
        printf("nao abriu arquivo txt\n");
    }
    else
    {
        PercorrerTree(actor, dados);
        fclose(dados);
        printf("Escrita completa\n");
    }
}

void PercorrerTree(Actor3 *actor, FILE *dados)
{
    if (actor)
    {
        PercorrerTree(actor->anterior, dados);
        fprintf(dados, "%s %s %s %d %d %d\n", actor->id, actor->nome, actor->genero, actor->numAtuacoes, actor->numCoActoresDiferentes, actor->soTemMulher);
        if (actor->incidencia != NULL)
        {
            CoActor2 *aux = actor->incidencia;
            while (aux)
            {
                fprintf(dados, "%s %s %s %d %d %d %s %s\n", actor->id, actor->nome, actor->genero, actor->numAtuacoes, actor->numCoActoresDiferentes, actor->soTemMulher,
                        aux->actorProprio->nome, aux->actorProprio->id);
                aux = aux->seguinte;
            }
        }
        PercorrerTree(actor->seguinte, dados);
    }
}

/* void MaisCenas(Actor3 *actor)
{
    if (actor)
    {
        MaisCenas(actor->anterior);

        if (GajoComMaisCenas->numAtuacoes < actor->numAtuacoes)
            GajoComMaisCenas = actor;

        MaisCenas(actor->seguinte);
    }
} */

/* void Actor_with_More_Opposite_acts(Actor3 *actor){

    if(actor){
        Actor_with_More_Opposite_acts(actor->anterior);
        int maior=actor->numAtuacoes;
        if(actor->numAtuacoes>maior){
            Actor3*aux=NULL;
            maior =actor->numAtuacoes;
            aux=actor;
        }
        Actor_with_More_Opposite_acts(actor->seguinte);
    }
    printf("O Ator que contracenou com mais pessoas foi:\n");
    printf(" %s com o Id: %s e com o total de %d contrenacoes\n", aux->nome,aux->id,aux->);

}  */

void Actor_with_Same_Name(Actor3 *actor, char *nome)
{

    if (actor)
    {
        Actor_with_Same_Name(actor->anterior, nome);

        if (strcmp(actor->nome, nome) == 0)
        {
            printf("%s %s\n", actor->nome, actor->id);
        }
        Actor_with_Same_Name(actor->seguinte, nome);
    }
}

void Actors_Name(Actor3 *actor)
{

    char nome[64];

    do
    {
        system("cls");
        printf("Indique um nome para procuar as referencias:\n");
        fflush(stdin);
        gets(nome);
    } while (nome[0] == '\0' || nome[0] == 10 || nome[0] == 13);

    Actor_with_Same_Name(actor, nome);

    getchar();
}

/**
 *! Fim Exercicio 1
*/

/**
 *! Exercicio 2
*/

/**
 *! Fim Exercicio 2
*/

/**
 *! Exercicio 3
*/

/**
 *! Fim Exercicio 3
*/

/**
 *! Exercicio 6
*/

/**
 *! Fim Exercicio 6
*/

/**
 *! Exercicio 7
*/

/**
 *! Fim Exercicio 7
*/
/**
 *?----------------------------------------------------Fim-----------------------------------------------------------------------------
*/

/**
 *?----------------------------------------------Manuseamento de Struct----------------------------------------------------------------
*/
/**
 *! Exercicio 1
*/

/**
 *! Fim Exercicio 1
*/

/**
 *! Exercicio 2
*/

/**
 *! Fim Exercicio 2
*/

/**
 *! Exercicio 3
*/

/**
 *! Fim Exercicio 3
*/

/**
 *! Exercicio 6
*/

/**
 *! Fim Exercicio 6
*/

/**
 *! Exercicio 7
*/

/**
 *! Fim Exercicio 7
*/
/**
 *?----------------------------------------------------Fim-----------------------------------------------------------------------------
*/

/**
 *?----------------------------------------------Verificacoes de dados----------------------------------------------------------------
*/

/**
 *?----------------------------------------------------Fim-----------------------------------------------------------------------------
*/

/**
 *?--------------------------------------------------Calculos--------------------------------------------------------------------------
*/
/**
 *! Genericas
*/

Actor3 *More_Actings(Actor3 *actor, Actor3 *aux)
{
    if (actor)
    {
        aux = More_Actings(actor->anterior, aux);

        if (aux->numAtuacoes < actor->numAtuacoes)
            aux = actor;

        aux = More_Actings(actor->seguinte, aux);
    }

    return aux;
}

void Actor_Who_Act_More(Actor3 *actor)
{

    Actor3 *auxMaisContracenacoes;
    auxMaisContracenacoes->numAtuacoes = -1;
    auxMaisContracenacoes = More_Actings(actor, auxMaisContracenacoes);
    printf("Quem contracenou com mais pessoas foi % com o Id: %s com um total de %d contracenacoes\n", auxMaisContracenacoes->nome, auxMaisContracenacoes->id, auxMaisContracenacoes->numAtuacoes);
    getchar();
    printf("Prima qualquer tecla\n");
}
/**
 *! Exercicio 2
*/

/**
 *! Fim Exercicio 2
*/

/**
 *! Exercicio 3
*/

/**
 *! Fim Exercicio 3
*/

/**
 *! Exercicio 4
*/

/**
 *! Fim Exercicio 4
*/

/**
 *! Exercicio 5
*/

/**
 *! Exercicio 6 Cpmprimento
*/

/**
 *! Fim Exercicio 6 Comprimento
*/

/**
 *! Exercicio 6 - ocorrencia de palavra
*/

/**
 *! Fim Exercicio 6 - ocorrencia de palavra
*/

/**
 *! Exercicio 7
*/

/**
 *! Fim Exercicio 7
*/
/**
 *?----------------------------------------------------Fim-----------------------------------------------------------------------------
*/

/**
 *?-------------------------------------------------Mostrar Dados----------------------------------------------------------------------
*/
/**
 *! Exercicio 1
*/
char ShowMenu() /*Menu principal*/
{
    char op;
    int i, comp = 80;
    system("cls");
    printf("\n%c", 201);
    for (i = 0; i < comp; i++)
    {
        printf("%c", 205);
    }
    printf("%c\n", 187);
    printf("%c  1) Mostrar Pessoas com o mesmo Nome", 186);
    for (i = 0; i < 43; i++)
    {
        printf("%c", 0);
    }
    printf("%c", 186);
    printf("\n%c", 186);
    for (i = 0; i < comp; i++)
    {
        printf("%c", 205);
    }
    printf("%c\n", 186);
    printf("%c", 186);
    printf("  2) Mostrar Individuos com que um(a) ator(atriz) contracenou");
    for (i = 0; i < 19; i++)
    {
        printf("%c", 0);
    }
    printf("%c", 186);
    printf("\n%c", 186);
    for (i = 0; i < comp; i++)
    {
        printf("%c", 205);
    }
    printf("%c\n", 186);
    printf("%c", 186);
    printf("  3) Apresentar Individuos que contracenaram apenas com Mulheres");
    for (i = 0; i < 16; i++)
    {
        printf("%c", 0);
    }
    printf("%c", 186);
    printf("\n%c", 186);
    for (i = 0; i < comp; i++)
    {
        printf("%c", 205);
    }
    printf("%c\n", 186);
    printf("%c", 186);
    printf("  4) Calcular quem contracenou com mais pessoas");
    for (i = 0; i < 33; i++)
    {
        printf("%c", 0);
    }
    printf("%c", 186);
    printf("\n%c", 186);
    for (i = 0; i < comp; i++)
    {
        printf("%c", 205);
    }
    printf("%c\n", 186);
    printf("%c", 186);
    printf("  5) Mostrar Caminho entre duas pessoas");
    for (i = 0; i < 41; i++)
    {
        printf("%c", 0);
    }
    printf("%c\n", 186);
    printf("%c", 186);
    for (i = 0; i < comp; i++)
    {
        printf("%c", 205);
    }
    printf("%c\n", 186);
    printf("%c", 186);
    printf("\t\t\t\ts)Sair");
    for (i = 0; i < 43; i++)
    {
        printf("%c", 0);
    }
    printf("%c", 186);
    printf("\n%c", 200);
    for (i = 0; i < comp; i++)
    {
        printf("%c", 205);
    }
    printf("%c\n", 188);
    op = getch();
    return op;
}
/**
 *! Fim Exercicio 1
*/

/**
 * ! Generico
*/

/**
 * ! FIM
*/

/**
 *! Exercicio 2
*/

/**
 *! Fim Exercicio 2
*/

/**
 *! Exercicio 3
*/

/**
 *! Fim Exercicio 3
*/

/**
 *! Exercicio 4
*/

/**
 *! Fim Exercicio 4
*/

/**
 *! Exercicio 5
*/

/**
 *! Fim Exercicio 5
*/

/**
 *! Exercicio 6
*/

/**
 *! Fim Exercicio 6
*/

/**
 *! Exercicio 7
*/

/**
 *! Fim Exercicio 7
*/
/**
 *?----------------------------------------------------Fim-----------------------------------------------------------------------------
*/
/**
 *!                                                END FUNCTION
*/