/*
 Implemente a função:
void removerCaractere(char *str, char caractere);
A função deverá remover da própria string todas as ocorrências do caractere informado. Os caracteres restantes
deverão ser deslocados para que não existam posições vazias entre eles. Por exemplo, ao remover o caractere 'a'
da string “abacate”, o resultado deverá ser “bcte”. Não deverá ser utilizado outro arranjo para construir o
resultado. Desenvolva um programa para ler uma string e o caractere que deverá ser removido, chamar a função
e imprimir a string resultante.
*/
#include<stdio.h>

void removerCaractere(char *str, char caractere);

int main(){
    char string[100], caractere;

    scanf("%99[^\n]", string);
	scanf(" %c", caractere);

    removerCaractere(string, carac);

    printf("%s", string);

    return 0;
}

void removerCaractere(char *str, char caractere){
    int j=0, i=0;
    for(; *(str+i)!='\0'; i++){
        if(*(str+i) != caractere){
           *(str+j) = *(str+i);
           j++;
        }
    }
    *(str+j) = '\0';
}
