#include<stdlib.h>
#include<stdio.h>

int main()
{
	int imagem[25], histograma[5];
	int i, j, maior, index_maior;
	//Inicializa os valores do histograma
	for(i = 0; i < 5; i++)
	{
	    histograma[i] = 0;
	}
	//Le as entradas e soma 1 ao indice do histograma que armazena os dados da cor do pixel
	for (i = 0; i < 25; i++)
	{
		scanf("%d", &imagem[i]);
		histograma[imagem[i]]++;
	}
	maior = 0;
	//Imprime o histograma
	for(i = 0; i < 5; i++)
	{
		printf("%d: |", i);
		//Imprime o caractere '#' o tanto de vezes correspondente ao valor do histograma naquele indice
		for(j = 0; j < histograma[i]; j++)
		{
			printf("#");
		}
		printf("\n");
		//Se o valor atual do histograma é maior que o atual, salvar este valor e seu indice
		if(histograma[i] > maior)
		{
			maior = histograma[i];
			index_maior = i;
		}
	}
	//Imprimir os pixels que são da cor que mais aparece na imagem
	for(i = 0; i < 25; i++)
	{
		if(imagem[i] == index_maior)
			printf("%d\n", i);
	}
	return 0;
}
