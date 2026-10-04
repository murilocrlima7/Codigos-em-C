/*
Implemente a função:
void copiarString(const char *origem, char *destino);
A função deverá copiar todos os caracteres da string origem para a string destino, incluindo o caractere nulo '\0'.
Desenvolva um programa para ler uma string, copiá-la para outro arranjo e imprimir a string copiada.
*/
#include<stdio.h>

void copiarString(const char *origem, char *destino)
{
	for(int i=0; *(origem+i) != '\0'; i++)
		*(destino+i) = *(origem+i);
}

int main()
{
	char oring[20], dest[20];
	
	printf("Antes: String de origem: %s | ", oring);
	printf("String de destino: %s\n", dest);
	
	copiarString(oring, dest);
	printf("Depois: String de origem: %s | ", oring);
	printf("String de destino: %s\n", dest);
	
	return 0;
}