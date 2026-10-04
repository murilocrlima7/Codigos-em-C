/*
Implemente a função:
int contarCaractere(const char *str, const char caractere);
A função deverá retornar a quantidade de vezes que o caractere informado aparece na string. A comparação
deverá diferenciar letras maiúsculas de minúsculas. Portanto, por exemplo, os caracteres 'A' e 'a' deverão ser
considerados diferentes. Desenvolva um programa para ler uma string e um caractere, chamar a função e
imprimir a quantidade encontrada.
*/
#include<stdio.h>

int contarCaractere(const char *str, const char caractere)
{
	int cont = 0, i = 0;
	for(; *(str+i) != '\0'; i++)
		if(*(str+i) == caractere)
			cont++;
	return cont;
}

int main()
{
	char str[20], caractere;
	scanf("%19[^\n]", str);
	
	scanf(" %c", &caractere);
	
	int x = contarCaractere(str, caractere);
	printf("Palavra: %s | Caractere: %c\n", str, caractere);
	printf("Qntde: %d", x);
	return 0;
}