#include<stdio.h>

/*
Autor:      Yuri Lemos
Drescrição: Programa que le 2 numeros e indica o maior,
            caso sejam iguais, escreve que sao iguais.
Data:       06/10/2019
*/

void main(){
    int numero1,numero2,resto;
    printf("Insira o primeiro numero: ");
    scanf("%d",&numero1);    //INPUT DO NUMERO 1 PELO UTILIZADOR
    printf("Insira o segundo numero: ");
    scanf("%d",&numero2);    //INPUT DO NUMERO 2 PELO UTILIZADOR

    if(numero1==numero2){         //VERIFICA SE SAO IGUAIS
        printf("Os numeros sao iguais!");
        fflush(stdin);
        getchar();
    }else if(numero1>numero2){  //VERIFICA SE O NUMERO 1 E MAIOR
        printf("O numero %d e o maior",numero1);
        fflush(stdin);
        getchar();
    }else{                      //CASO O NUMERO 1 NAO SEJA MAIOR
        printf("O numero %d e o maior",numero2);
        fflush(stdin);
        getchar();
    }
}