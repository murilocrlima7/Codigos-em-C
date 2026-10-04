/*
(Análise da frequência de uma palavra) Um sistema de análise textual precisa determinar quantas vezes uma
palavra aparece em um texto. Desenvolva um programa em C que leia um texto e, em seguida, uma palavra que
deverá ser procurada. A contagem deverá seguir as seguintes regras:
 diferenças entre letras maiúsculas e minúsculas deverão ser desconsideradas;
 somente palavras completas deverão ser contabilizadas;
 espaços e sinais de pontuação deverão ser considerados separadores;
 uma palavra será formada por uma sequência de letras.
Por exemplo, considerando o texto:
“Dados sao importantes. Analisar dados permite transformar dados em informacao.”
e a palavra “dados”, o programa deverá apresentar:
“Frequencia: 3”
A ocorrência de uma sequência dentro de outra palavra não deverá ser contabilizada. Portanto, a palavra “dado”
não deverá ser encontrada dentro da palavra “dados”. Considere que o texto possui no máximo 500 caracteres e
que a palavra procurada possui no máximo 30 caracteres.
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define TAM_TEXTO 500
#define TAM_PALAVRA 30

int contarPalavras(char *texto, char *palavra);

// Definição dos delimitadores que podem aparecer no texto
const char delimitadores[] = " ,.;:"; 

int main(){
	char texto[TAM_TEXTO], palavra[TAM_PALAVRA];
	scanf("%99[^\n]", texto);
	scanf(" %20[^\n]", palavra);
	
	printf("Texto: %s\n", texto);
	printf("Palavra: %s\n", palavra);
	int contador = contarPalavras(texto, palavra);
	printf("Frequencia da palavras: %d", contador);
	
	return 0;
}

int contarPalavras(char *texto, char *palavra){
	int cont=0, i=0;
	
	strlwr(texto); // Para facilitar a comparação, transforma-se todas as letras da string para minúscula 
	
	char *div = strtok(texto, delimitadores); // Quebra a string a partir dos delimitadores definidos
	
	while(div != NULL){
		if(strcmp(div, palavra) == 0) // Realiza a comparação da quebra com a palavra de interesse
			cont++;
		div = strtok(NULL, delimitadores); // Realiza uma nova quebra na string
	}
	return cont;
}
