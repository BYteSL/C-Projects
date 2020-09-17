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
Actor3 *LoadFileActors(Actor3 *actor);


void *LoadFileCoActors(Actor3 *actor);
CoActor2 *InsereListaCoActor(CoActor2 *aux, char *id);


char *DevolveGender(char line[]);
int GetIdNumber(char *idString);
char *DevolveName(char line[]);
char *DevolveId(char line[]);

Actor3 *NewNode(char *id, char *nome, char *sexo);
Actor3 *InsertTreeNode(Actor3 *actor, char *id, char *nome, char *sexo);
Actor3 *FindActorManual1(Actor3 *actors, char *id);
void ListarTreeActors(Actor3 *actor);
void ListarTreeActors1(Actor3 *actor);
void ListarTreeActors_Coatores(Actor3 *actor);
Actor3 *FindActorManualIterativa(Actor3 *actors, char *id);

void ListarCoAtores2Recursivo(CoActor2 *CoActor);
void ImprimirActor(Actor3 *actor);
void FindCoactors(Actor3 *actor);
void FindActorsWho_act_only_whith_females(Actor3 *actor);
void WriteTree(Actor3 *actor);
void PercorrerTree(Actor3 *actor, FILE *dados);

void Actors_Name(Actor3 *actor);
void Actor_with_Same_Name(Actor3 *actor, char *nome);
void find(Actor3 *actor);
/* void MaisCenas(Actor3 * actor); */
Actor3 * More_Actings(Actor3 *actor, Actor3 *aux);
void Actor_Who_Act_More(Actor3 *actor);
char ShowMenu();
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
 *!  Exercicio 7
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
 *! Exercicio 2
*/


/**
 *! Fim Exercicios 2
 */

/**
 *! Exercicio 3
*/

/**
 *! Fim Exercicios 3
 */

/**
 *! Exercicio 4
*/

/**
 *! Fim Exercicios 4
 */

/**
 *! Exercicio 5
*/


/**
 *! Fim Exercicios 5
 */
/**
 *! Exercicio 6
*/

/**
 *! Fim Exercicios 6
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
 * ! Genericos
*/

/**
 *! Fim 
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
 *!                                                END OF SIGNATURES
*/

#endif