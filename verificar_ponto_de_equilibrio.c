/*
	Leia um vetor com 15 números inteiros e determine se existe uma posição na qual a
soma dos elementos localizados à esquerda seja igual à soma dos elementos localizados à direita. Caso exista, apresente a posição encontrada. Exemplo: No vetor 1
2 3 4 6, o índice 3 (o qual armazena o valor 4) é o ponto de equilíbrio porque a soma
dos valores à esquerda (1 + 2 + 3 = 6) é igual à soma dos elementos à direita. Nesse
caso, o próprio valor 6, armazenado no índice 4.
*/

#include<stdio.h>
#define TAM 15

int main()
{
	int vetor[TAM];
	int i, j, k; 
	int pontoEquilibrio=-1; 
	int soma1=0, soma2=0;
	
	for(i=0; i<TAM; i++)
		scanf("%d", &vetor[i]);
	
	for(i=0; i<TAM; i++)
	{
		soma1 = 0; soma2 = 0;
		for(j=0; j<i; j++)
			soma1 += vetor[j];
		for(k=i+1; k<TAM; k++)
			soma2 += vetor[k];
		if(soma1 == soma2)
			pontoEquilibrio = i;
	}
	if(pontoEquilibrio != -1)
		printf("Posição: %d", pontoEquilibrio+1);
	else
		printf("Não existe ponto de equilíbrio");

	return 0;
		
}