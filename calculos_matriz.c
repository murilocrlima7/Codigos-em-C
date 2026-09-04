/*
	Leia uma matriz 6 × 6 de números inteiros e calcule separadamente:
a) a soma dos elementos localizados na borda da matriz;
b) a soma dos elementos localizados no interior da matriz.
*/

#include<stdio.h>
#define TAM 6

void main()
{
	int matrix[TAM][TAM];
	int somaBorda=0, somaInterior=0;
	int i, j;
	
	for(i=0; i<TAM; i++)
		for(j=0; j<TAM; j++)
			scanf("%d", &matrix[i][j]);
		
	// Somar as bordas	
	for(j=0; j<TAM; j++)
		somaBorda += matrix[0][j];
	for(i=1; i<TAM; i++)
		somaBorda += matrix[i][TAM-1];
	for(j=0; j<TAM-1; j++)
		somaBorda += matrix[TAM-1][j];
	for(i=1; i<TAM-1; i++)
		somaBorda += matrix[i][0];
	
	// Somar o interior
	for(i=1; i<TAM-1; i++)
		for(j=1; j<TAM-1; j++)
			somaInterior += matrix[i][j];
		
	printf("Soma das bordas: %d\n", somaBorda);
	printf("Soma do Interior: %d\n", somaInterior);
}