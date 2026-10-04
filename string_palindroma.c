/*
 Uma string é considerada palíndroma quando pode ser lida da mesma forma da esquerda para a direita e da
direita para a esquerda. Implemente a função:
int isPalindromo(const char *str);
A função deverá retornar 1 quando a string for palíndroma e 0 caso contrário. Diferenças entre letras maiúsculas
e minúsculas deverão ser desconsideradas, mas os espaços e os demais caracteres deverão participar da
comparação. Por exemplo, “Arara” deverá ser considerada palíndroma. Desenvolva um programa para ler uma
string, chamar a função e informar o resultado.
*/
#include<stdio.h>

int isPalindromo(char *str);
void swap(char *x, char *y);

int main(){
    char string[100];

    scanf("%99[^\n]", string);

    int x = isPalindromo(string);

    printf("%d", x);

    return 0;
}

int isPalindromo(char *str){

    int i=0, j=0, tam=0, cont=0;
    
    for(;*(str+i)!='\0'; i++)
        tam++;


    char str2[tam]; //String para auxiliar na comparação

    // Copiando, de trás para frente, a string original para a string2
    for(i=0, j=tam-1; *(str+i)!='\0'; i++, j--) 
        *(str2+j) = *(str+i);
   

    // cont serve para comparar os caracteres de ambas as strings (ida e volta)
    for(i=0; i<tam; i++){
        if(*(str+i) == *(str2+i))
            cont++;
    }

    if(cont == tam) // Se o cont = tam, ou seja, comparação da ida e da volta são iguais, então é um palindromo
        return 1;
    else
        return 0;
}

void swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}