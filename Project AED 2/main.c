/*
* Author: Yuri Lemos
* Description: Este Programa faz leitura de uma fichero ".txt" e com estes dados recolhidos efetua calculos estatisticos
* Data: 14 / 3 / 2020 
* Version: 1.0
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#define MAX 100

#pragma region Struts//<struct>                     Estruturas
typedef struct LineMorph
{
    char *originWord;
    char *wordRoot;
    char *morphAnalise;
    double rightProb;
    struct LineMorph *next;
    struct LineMorph *preview;
}Morph;
//<struct>                                       Fim das estruturas
#pragma endregion

#pragma region signatures//<function>               Assinaturas

/** Morph LoadFile(FILE* file)
 ** Funçao:LoadFile
 *  Funcao de carregamento de um ficheiro ".txt"
 *! Os campos no ficheiro tem que cumprir este formato %s %s %s %lf
 *  @param FILE ficheiro
 *  @return Morph
*/
Morph *LoadFile(FILE *f);

/** int contWord(char *string)
 ** Funçao:ContWord
 *  Conta o numero de caracteres que contem numa string
 *  @param char* string
 *  @return int
*/
int contWord(char *string);

/**  Morph *NewNode(char *oriWord, char *wordRoot, char *morphAnalise, double rightProb)
 *  Funçao:NewNode
 *  Cria um novo node numa determinada lista ligada
 *  @param char string1, @param char string2, @param char string3, @param double num 
 *  @return Morph
*/
Morph *NewNode(char *oriWord, char *wordRoot, char *morphAnalise, double rightProb);

/** Morph *InsertNode(Morph *m,char *oriWord, char *wordRoot, char *morphAnalise, double rightProb)
 ** Funçao:Insert Node
 *  Esta funçao insere um node numa lista ligada, caso não exista nada na lista, é criado então a cabeça de lista
 *  @param Morph morph, @param char string1, @param char string2, @param char string3, @param double num
 *  @return Morph
*/
Morph *InsertNode(Morph *m,char *oriWord, char *wordRoot, char *morphAnalise, double rightProb);

/** void ShowList(Morph *morph)
 ** Funçao:ShowList
 *  Apresenta a lista ligada
 *  @param Morph morph
 *  @return void
*/
void ShowList(Morph *morph);

#pragma endregion//<function>                                    Fim de Assinaturas

#pragma region Main//<main>                           Main
int main(int argc, char const *argv[])
{
    FILE *f = NULL;
    int i;
    f=fopen("frase.txt","r");
    
    Morph *morph=NULL;
    morph=LoadFile(f);
    system("cls");
    
    ShowList(morph);
    fflush(stdin);getchar();
    fclose(f);
    return 0;
}
#pragma endregion//<main>                             End Main

#pragma region Functions//<function>                  Funções
Morph *LoadFile(FILE *f){
    int i=0,tamA;
    char *a,*b,*c;
    double d;
    Morph *temp;

    a =(char*) malloc(MAX*sizeof(char));
    b =(char*) malloc(MAX*sizeof(char));
    c =(char*) malloc(MAX*sizeof(char));
    
    if(f==NULL){
        printf("Ficheiro nao encontrado");
    }else
    { 
        fscanf (f , "%s %s %s %lf",a,b,c,&d);
        temp=NewNode(a,b,c,d);
        i++;
        while (fscanf (f , "%s %s %s %lf",a,b,c,&d) != EOF)
        {
            InsertNode(temp,a,b,c,d);
            i++;                       
        }
                
    }
    
    return temp;
}
int contWord(char *string){
    int i=0;
    while(string[i] != '\0'){
        i++;
    }
    return i;
}

Morph *NewNode(char *oriWord, char *wordRoot, char *morphAnalise, double rightProb){
    Morph *temp = (Morph*)malloc(sizeof(Morph));
    temp->originWord = (char *)malloc((contWord(oriWord)+1)*sizeof(char));
    temp->wordRoot = (char *)malloc((contWord(wordRoot)+1)*sizeof(char));
    temp->morphAnalise = (char *)malloc((contWord(morphAnalise)+1)*sizeof(char));
    strcpy(temp->originWord,oriWord);
    strcpy(temp->wordRoot,wordRoot);
    strcpy(temp->morphAnalise,morphAnalise);
    temp->rightProb = rightProb;
    temp->next = NULL;
    temp->preview=NULL;
}

Morph *InsertNode(Morph *m,char *oriWord, char *wordRoot, char *morphAnalise, double rightProb){
    if(m==NULL)return NewNode(oriWord, wordRoot, morphAnalise, rightProb);
    if(m->preview==NULL){
        m->next = InsertNode(m->next,oriWord, wordRoot, morphAnalise, rightProb);
    }
}

void ShowList(Morph *morph){
    while(morph != NULL)
	{
		printf("%s %s %s %lf\n",morph->originWord, morph->wordRoot, morph->morphAnalise, morph->rightProb);
		morph = (morph->next ? morph->next : NULL) ;
	}
}
#pragma endregion//<function>                                             Fim de Funções