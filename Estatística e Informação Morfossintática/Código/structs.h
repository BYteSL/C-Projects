/**
** Author: Yuri Lemos E João Figueiredo
** Description: Este Programa faz leitura de uma fichero ".txt" e com estes dados recolhidos efetua calculos estatisticos
** Data: 14 / 3 / 2020 
* Version: 1.0
*/
#ifndef STRUCTS_H_
#define STRUCTS_H_
#define MAX 100

/**
 *!                                                 STRUCTS
*/
typedef struct LineMorph
{
    char originWord[MAX];
    char wordRoot[MAX];
    char morphAnalise[MAX];
    float rightProb;
    int quantidade;
    int total;
    float minimo;
    float maximo;
    struct LineMorph *right;
    struct LineMorph *left;
}Morph;


typedef struct _Geral  /* Struct Foi Alterada*/
{
    char nome[MAX];
    float medidaDeCerteza;
    float media;
    float desvioPadrao;
    int qtdAbs;
    int lenght;
    float *valores;
    int total;
    float qtdRelativa;
    struct _Geral *right;
    struct _Geral *left;

} Geral;

typedef struct _Ex6
{
    char nome[MAX];
    int qtdAbs;
    int total;
    struct _Ex6 *left;
    struct _Ex6 *right; 
}Ex6;

typedef struct _Ex7
{
    float rigthProb;
    int qtdAbs;
    struct _Ex7 *left;
    struct _Ex7 *right; 
}Ex7;

/**
 *!                                              END OF STRUCTS
*/

#endif