/*
Implemente a função:
int comprimentoString(char *str);
A função deverá receber uma string e retornar a quantidade de caracteres nela armazenados, sem considerar o
caractere nulo '\0'. Desenvolva um programa para ler uma string, chamar a função e imprimir o comprimento
calculado.
*/
#include<stdio.h>

int comprimentoString(char *str)
{
	int cont = 0, i=0;
	for(; *(str+i) != '\0'; i++)
		if(*(str+i)!='\n') //Serve para o '\n' do fgets ñ entrar na contagem
			cont++;
	return cont;
}

int main()
{
	char texto[20];
	fgets(texto, 20, stdin);
	int tam = comprimentoString(texto);
	printf("Tamanho da string: %d", tam);
	return 0;
}