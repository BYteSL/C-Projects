
/**
** Author: Yuri Lemos E João Figueiredo
** Description: Este Programa faz leitura de uma fichero ".txt" e com estes dados recolhidos efetua calculos estatisticos
** Data: 14 / 3 / 2020 
* Version: 1.0
*/
#ifndef STRUCTS_H_
#define STRUCTS_H_


/**
 *!                                                 STRUCTS
*/
typedef struct _CoActor2
{
    char id[16];
    int contagem;
    struct _CoActor2 *seguinte;
    struct _Actor3 *actorProprio;
} CoActor2;


typedef struct _Actor3
{
    char id[16];
    char nome[128];
    char genero[2];
    int numAtuacoes;
    int numCoActoresDiferentes;
    int soTemMulher;
    struct _Actor3 *seguinte, *anterior;
    struct _CoActor2 *incidencia;
} Actor3;



/**
 *!                                              END OF STRUCTS
*/

#endif