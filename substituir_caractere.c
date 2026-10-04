/*
 Implemente a função:
int substituirCaractere(char *str, const char original, const char substituto);
A função deverá substituir, na própria string, todas as ocorrências do caractere original pelo caractere substituto.
A função deverá retornar a quantidade de substituições realizadas. Por exemplo, ao substituir 'a' por 'o' na string
“banana”, o resultado será “bonono”, e a função retornará 3. Desenvolva um programa para ler uma string e os
dois caracteres, chamar a função e imprimir a string modificada e a quantidade de substituições.
*/
#include<stdio.h>

int substituirCaractere(char *str, const char original, const char substituto);

int main(){
    char string[100], caractereOriginal, caractereSubstituto;

    scanf("%99[^\n]", string);
    
    scanf(" %c %c", &caractereOriginal, &caractereSubstituto);

    int qntdeSubstituicoes = substituirCaractere(string, x, y);

    printf("%d", qntdeSubstituicoes);

    return 0;
}

int substituirCaractere(char *str, const char original, const char substituto){
    int i=0, cont=0;
    for(; *(str+i)!='\0'; i++){
        if(*(str+i)==original){
            *(str+i) = substituto;
            cont++;
        }
    }
    return cont;
}