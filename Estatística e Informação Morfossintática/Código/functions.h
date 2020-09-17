/*
* Author: Yuri Lemos E João Figueiredo
* Description: Este Programa faz leitura de uma fichero ".txt" e com estes dados recolhidos efetua calculos estatisticos
* Data: 14 / 3 / 2020 
* Version: 1.0
*/

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#include "structs.h"

/**
 *!                                                 SIGNATURES FUNCTION
*/
/**
 *?----------------------------------------------Funçoes de Carregamento--------------------------------------------------------------
*/
/**
 *! Exercicio 1
*/
Morph *CarregarDados();
/**
 *! Fim Exercicio 1
*/

/**
 *! Exercicio 2
*/
Geral *Ex2Load(Morph *morph);
Geral *Ex2LoadTree(Geral *dados, Geral *dadosOrganizados);
Geral *Ex2LoadToList(Geral *dados, Geral *destino);
/**
 *! Fim Exercicio 2
*/

/**
 *! Exercicio 3
*/
Geral *Ex3Load(Morph *morphs);

/**
 *! Fim Exercicio 3
*/

/**
 *! Exercicio 6
*/
Ex6 *Ex6Load(Morph *morph);
Ex6 *Ex6Load_Ordenada(Ex6 *ex6);

/**
 *! Fim Exercicio 6
*/

/**
 *! Exercicio 7
*/
Ex7 *Ex7Load(Morph *morph);
Ex7 *Ex7InsertOrdenada(Ex7 *dadosEx7Org, Ex7 *dadosEx7);
void list(Ex7* ex);
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
Morph *HeadInsert(Morph *lista, char a[], char b[], char c[], float d);
/**
 *! Fim Exercicio 1
*/

/**
 *! Exercicio 2
*/
Geral *Ex2NewNode(Morph *morph);
Geral *Ex2InsertNode(Geral *dadosEx2, Morph *dados);
Geral *Ex2InsertOrdenada(Geral *lista, Geral *dados);

/**
 *! Fim Exercicio 2
*/

/**
 *! Exercicio 3
*/
Geral *Ex3NewNode(Morph *morph);
Geral *Ex3InsertNode(Geral *dadosEx3, Morph *dados);
Geral *Ex3InsertOrdenada(Geral *dadosEx3Org, Geral *dadosEx3);

/**
 *! Fim Exercicio 3
*/

/**
 *! Exercicio 6
*/
Ex6 *Ex6NewNode(char *ori);
Ex6 *Ex6InsertNode(Ex6 *bTree, char *ori);
Ex6 *Ex6ListNewNode(Ex6 *dadosTree);
Ex6 *Ex6ListInsertNode(Ex6 *dadoslist, Ex6 *dadosTree);
Ex6 *Ex6ContarAbs(Ex6 *lista, Ex6 *dadosTree);
Ex6* insertNewPorAbs(Ex6* dados);
Ex6* insertPorAbs(Ex6* lista, Ex6*dados);
Ex6 *Ex6InsertOrdenada(Ex6 *dadosEx6Org, Ex6 *dadosEx6);


Ex6* Ex6HeadInsert(Ex6* lista,Ex6* tree);
Ex6* Ex6TreeToList(Ex6* lista, Ex6*tree);
/**
 *! Fim Exercicio 6
*/

/**
 *!  Exercicio 7
*/
Ex7 *Ex7NewNode(float prob);
Ex7 *Ex7InsertNode(Ex7 *lista, float prob);
Ex7 *Ex7InsertOrdenada(Ex7 *dadosEx7Org, Ex7 *dadosEx7);


Ex7 *Ex7HeadInsert(Ex7 *lista, Ex7 *tree);
Ex7 *Ex7TreeToList(Ex7 *dadoslist, Ex7 *dadosTree);

/**
 *! Fim Exercicio 7
*/
/**
 *?----------------------------------------------------Fim-----------------------------------------------------------------------------
*/

/**
 *?----------------------------------------------Verificacoes de dados----------------------------------------------------------------
*/

int checkWord(char palavra[]);
char *checkLetra(char *palavra);

/**
 *?----------------------------------------------------Fim-----------------------------------------------------------------------------
*/

/**
 *?--------------------------------------------------Calculos--------------------------------------------------------------------------
*/
int contWord(char *string);

/**
 *! Exercicio 2
*/
Geral *Ex2CalcularFreqRel(Geral *dados, int totalDados);

/**
 *! Fim Exercicios 2
 */

/**
 *! Exercicio 3
*/
Geral *Ex3CalcularFreqRel(Geral *dadosEx3, int totalDados);
/**
 *! Fim Exercicios 3
 */

/**
 *! Exercicio 4
*/
Geral *Ex4CalcularMedia(Geral *dados);
Geral *Ex4CalcularDp(Geral *dados);
/**
 *! Fim Exercicios 4
 */
Geral *Ex4CalcularMedia(Geral *dados);
Geral *Ex4CalcularDp(Geral *dados);
/**
 *! Exercicio 5
*/
float Media_comprimento(Geral *ex3, int total);
float Media_comprimento(Geral *ex3, int total);
int Moda_comprimento(Geral *ex3);
float Desvio_padrao_comprimento(Geral *ex3, int total, float media);

/**
 *! Fim Exercicios 5
 */
/**
 *! Exercicio 6
*/
float Ex6_Quartil_1(Geral *ex3, int total);
float Ex6_Quartil_2(Geral *ex3, int total);
float Ex6_Quartil_3(Geral *ex3, int total);
float Ex6_Quartil_1_2(Ex6 *ex6, int total);
float Ex6_Quartil_2_2(Ex6 *ex6, int total);
float Ex6_Quartil_3_2(Ex6 *ex6, int total);
int Existe_Palavra(Ex6 *ex6, char *palavra);
int pegaTotal(Ex6 *ex6);
int Ex6_Total_Ocorrencias(Ex6 *ex6, int numero);
void Ex6_Palavra_Inserida(Ex6 *ex6, Ex6 *ordenada);
int Ex6_Numero_Ocorrencias(Ex6 *ex6, char *palavra);


int ExistePalavra(Ex6 *ex6, char* palavra, FILE * f);
/**
 *! Fim Exercicios 6
 */

/**
 *! Exercicio 7
*/
float Max_IntervaloDaCerteza(Ex7 *ex7);
float Min_IntervaloDaCerteza(Ex7 *ex7);
float NumeroClasses(int total);
float Amplitude(float max, float min, int numclasses);
int Total(Ex7 *ex7);
int Conta_valoresE(Ex7 *dados);
float *ArrayValores(Ex7 *ex7, int total, float amplitude, int numclasses, float min, float max);
float ValorMaximoArray(float *valoresArray, int classes);

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
 * ! Genericos
*/
void Cabecalho(char *nome);
/**
 *! Fim 
*/

/**
 *! Exercicio 1
*/
char ShowMenu();
void ListarMorph(Morph *tree);
/**
 *! Fim Exercicio 1
*/

/**
 *! Exercicio 2
*/
void ListarE2(Geral *ex2);
void ListarEx2Tree(Geral *ex2, int absAcomulada, float relAcomulada);
void RodapeEx2(int abs, float rel);
/**
 *! Fim Exercicio 2
*/

/**
 *! Exercicio 3
*/
void ListarE3(Geral *ex3);
void ListarEx3Tree(Geral *ex3, int absAcomulada, float relAcomulada);
void RodapeEx3(int abs, float rel);
/**
 *! Fim Exercicio 3
*/

/**
 *! Exercicio 4
*/
void Ex4Cabecalho(char *nome);

void ListarE4(Geral *dados);

/**
 *! Fim Exercicio 4
*/

/**
 *! Exercicio 5
*/
void ListarE5(Geral *ex3, int total);
/**
 *! Fim Exercicio 5
*/

/**
 *! Exercicio 6
*/
void ListarE6_1(Geral *ex3, int total);
void ListarE6(Geral *dados);
void ListarE6List(Ex6 *dados);

/**
 *! Fim Exercicio 6
*/

/**
 *! Exercicio 7
*/
void ListarE7List(Ex7 *dados);
void ListarE7tree(Ex7 *dados);
void Histograma(Ex7 *ex7);
void Histograma2(Ex7 *ex7);
/**
 *! Fim Exercicio 7
*/
/**
 *?----------------------------------------------------Fim-----------------------------------------------------------------------------
*/

/**
 *!                                                END OF SIGNATURES
*/

#endif