/*
Implemente a função:
int localizarSubstring(const char *texto, const char *termo);
A função deverá procurar a primeira ocorrência da string termo dentro da string texto e retornar a posição em
que essa ocorrência começa. Caso o termo não seja encontrado, a função deverá retornar -1. As posições
deverão ser numeradas a partir de zero, e a comparação deverá diferenciar letras maiúsculas de minúsculas. Por
exemplo, considerando texto = "estrutura de dados" e termo = "dados", a função deverá retornar 13.
Desenvolva um programa para ler o texto e o termo procurado, chamar a função e imprimir a posição retornada.
*/
#include<stdio.h>

int localizarSubstring(const char *texto, const char *termo);

int main(){
	char texto[100], termo[100];
	scanf(" %99[^\n]", texto);
	scanf(" %99[^\n]", termo);
	

	int cop = localizarSubstring(texto,termo);
	
	printf("Posicao do termo: %d\n", cop);
	
	return 0;
	
}

int localizarSubstring(const char *texto, const char *termo){
	
	int i=0, j, k, cont, tam=0;
	
	for(; *(termo+i)!='\0'; i++)
		tam++;
	
	/* O bloco abaixo percorre a string buscando pela primeiro caractere da string
	que queremos localizar. Quando encontrado, ele começa a fazer sucessivas comparações 
	de caracteres - a partir desse ponto -  para verificar se aquele trecho se refere à 
	string de nosso interesse. Se verdadeiro, retorna a posição inicial do trecho, se falso,
	ele retorna para o for mais externo para buscar novos pretendentes e se for o caso, re-fazer
	as comparações. */
	for(i=0, j=0, cont=0; *(texto+i)!='\0'; i++){
		if(*(texto+i)==*(termo+j)){
			for(k=i; j<tam; j++, k++)
				if(*(texto+k)==*(termo+j))
					cont++;
			if(cont == tam)
				return i;
		}		
	}
	
	return -1;
}