#include<stdio.h>

/*Inserir um numero e o programa verifica se este numero e divisivel por 3*/

void main(){
    int numero,resto;
    printf("insira um numero: ");
    scanf("%d",&numero);    //INPUT DO NUMERO PELO UTILIZADOR
    resto = numero % 3;
    if(resto == 0){         //VERIFICA SE O RESTO DA DIVISAO É ZERO
        printf("O numero %d e divisivel por 3!",numero);
        fflush(stdin);
        getchar();
    }else{
        printf("O numero %d nao e divisivel por 3!",numero);
        fflush(stdin);
        getchar();
    }
}