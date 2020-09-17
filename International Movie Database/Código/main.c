/*
* Author: Yuri Lemos e João Figueiredo
* Description: Este Programa faz leitura de uma fichero ".txt" e com estes dados recolhidos efetua calculos estatisticos
* Data: 14 / 3 / 2020 
* Version: 1.0
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <locale.h>
#include "functions.h"
#include "structs.h"

/**
 *!                                                     Main
 * */

int main()
{
    Actor3 *actor = NULL;
    char op;
    /* //system("C:\\Users\\Lenovo\\AppData\\Local\\Programs\\Opera\\launcher.exe c:\\export\\a.html");
    //system("C:\\Users\\Lenovo\\AppData\\Local\\Programs\\Opera\\launcher.exe c:\\export\\actors.txt"); */

    actor = LoadFileActors(actor);
    printf("Ficheiro carregado!\n");
    LoadFileCoActors(actor);
    printf("\nVou listar, prima uma tecla para continuar: \n");
    WriteTree(actor);

    printf("Ficheiro carregado e listado e com coatores\n");
    
    do
    {
        op =ShowMenu();
        

        switch (op)
        {
        case '1': 
            Actors_Name(actor);
            break;
        case '2': 
            FindCoactors(actor);
            break;
        case '3': 
            FindActorsWho_act_only_whith_females(actor);
            getchar();
            break;
        case '4': 
            Actor_Who_Act_More(actor);
            break;
        case '5': 
            
            break;
        case '6': 
            
            break;
        case '7':
            
            break;
        default:
            break;
        }

    } while (op != 's');
    return 0;
}