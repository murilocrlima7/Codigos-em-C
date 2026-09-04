/*
	Leia uma matriz quadrada 3 × 3 e determine se ela representa um quadrado mágico.
Uma matriz é considerada um quadrado mágico quando a soma dos elementos de
todas as linhas, todas as colunas; da diagonal principal e da diagonal secundária é a
mesma. Apresente também o valor dessa soma.

*/

#include<stdio.h>
#define TAM 3

int main()
{
	int matrix[TAM][TAM];
	int somaDiagonalPrincipal=0, somaDiagonalSecundaria=0;
	int somaLinhas[TAM]={}, somaColunas[TAM]={};
	
	int i, j, cont=0;
	
	for(i=0; i<TAM; i++)
		for(j=0; j<TAM; j++)
			scanf("%d", &matrix[i][j]);
		
	for(i=0; i<TAM; i++)
		for(j=0; j<TAM; j++)
			somaLinhas[i] += matrix[i][j];
	
	for(j=0; j<TAM; j++)
		for(i=0; i<TAM; i++)
			somaColunas[j] += matrix[i][j];
	
	for(i=0; i<TAM; i++)
		for(j=0; j<TAM; j++)
		{
			if(i==j)
				somaDiagonalPrincipal += matrix[i][j];
			if((i+j) == (TAM-1))
				somaDiagonalSecundaria += matrix[i][j];
		}
	
	for(i=0; i<TAM; i++)
	{
		if(somaColunas[i] == somaLinhas[i])
			cont++;
		if(somaColunas[i] == somaDiagonalPrincipal)
			cont++;
		if(somaColunas[i] == somaDiagonalSecundaria)
			cont++;
		if(somaLinhas[i] == somaDiagonalPrincipal)
			cont++;
		if(somaLinhas[i] == somaDiagonalSecundaria)
			cont++;
	}
	
	if(cont == 15)
		printf("A matriz informada eh um quadrado magico\n");
	else
		printf("A matriz informada nao eh um quadrado magico\n");
	
	return 0;
}