/*
	Leia 15 números inteiros e reorganize o vetor de forma que todos os valores iguais a
zero sejam deslocados para o final, mantendo a ordem relativa dos demais elementos.
Exemplo: 3 0 7 0 2 5 0 → 3 7 2 5 0 0 0
*/

#include<stdio.h>
#define TAM 15
void main()
{
	int vOriginal[TAM], vControle[TAM]={};
	int i, j=0;
	for(i=0; i<TAM; i++)
		scanf("%d", &vOriginal[i]);
	for(i=0; i<TAM; i++)
		if(vOriginal[i]!= 0)
		{
			vControle[j] = vOriginal[i];
			j++;
		}	
	for(i=0; i<TAM; i++)
			printf("%d ", vControle[i]);	
}
