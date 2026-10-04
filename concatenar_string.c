/*
Implemente a função:
void concatenarStrings(const char *origem, char *destino);
A função deverá acrescentar os caracteres da string origem ao final da string destino. Desenvolva um programa
para ler duas strings, concatenar a segunda ao final da primeira e imprimir o resultado.
*/

#include<stdio.h>
#include<stdlib.h>

void concatenarStrings(const char *origem, char *destino)
{
	int i=0, j=0;
	/* O bloco abaixo anda até o final da string de destino,
		quando o encontra, começa a copiar a partir desse ponto
		a string de origem para a string de destino.
		Após copiar, o break quebra o loop*/
	for(;; i++)
		if(*(destino+i) == '\0'){
			for(; *(origem+j) != '\0'; j++, i++)
				*(destino+i) = *(origem+j); 
			break;
		}

	*(destino+i) = '\0'; //Define onde termina a string de destino
}

int main()
{
	char dest[20], oring[20];
	scanf(" %[^\n]", dest);
	scanf(" %[^\n]", oring); 
	
	concatenarStrings(oring, dest);
	printf("String concatenada: %s", dest);
	
	return 0;
}