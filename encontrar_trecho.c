/*
	Leia um vetor com 20 números inteiros, que podem ser positivos ou negativos, e
determine qual trecho de elementos consecutivos possui a maior soma. Apresente:
a) a maior soma encontrada;
b) a posição inicial do trecho;
c) a posição final do trecho.
No exemplo, -2 3 5 -1 4 -10 7, o trecho de maior soma é 3 5 -1 4.
*/

#include<stdio.h>
#define TAM 20

void main()
{
	int vetor[TAM];
	int i, k, j;
	int somaControle=0; // Variável de controle
	int somaFinal=0, posInicial, posFinal;
	
	for(i=0; i<TAM; i++)
		scanf("%d", &vetor[i]);
	
	// Definição dos valores iniciais
	somaFinal = vetor[0];
    posInicial = 0;
    posFinal = 0;
	
	/*
		Este bloco soma cada trecho presente no vetor e realiza comparações entre as somas para encontrar a maior. 
		- O 'i' representa a posição inicial de um trecho
		- O 'j' representa a posição final de um trecho
		- O 'k' é utilizado para somar os valores que estão presentes dentro do intervalo dos trechos
	*/
	for(i=0; i<TAM; i++)
		for(j=i; j<TAM; j++) //como 'j' representa a pos final, então ele deve ser maior ou igual a 'i'
		{
			for(k=i; k<=j; k++) // Soma dos valores presentes dentro do intervalo
				somaControle+=vetor[k];
				
			if(somaControle>somaFinal)//
			{
				somaFinal = somaControle;
				posInicial = i; //Armazena a posição inicial do trecho
				posFinal = j; //Armazena a posição final do trecho
			}
			somaControle=0; //Reseta  para realizar uma nova verificação
		}
		
	printf("Maior soma encontrada: %d\n", somaFinal);
	printf("Posição inicial: %d\n", posInicial);
	printf("Posição final: %d\n", posFinal);
}