/*
Implemente uma função que procure um determinado valor em um vetor estático
usando o cabeçalho int *buscar(int *vetor, int tamanho, int valor). Caso o
valor seja encontrado, a função deverá retornar um ponteiro para a primeira ocorrência encontrada. Caso contrário, deverá retornar NULL. No programa principal, caso o
valor seja encontrado, determine sua posição utilizando aritmética de ponteiros.
*/

#include<iostream>
using namespace std;
#define TAM 5

int buscar(int *vetor, int tamanho, int valor)
{
    for(int i=0; i<tamanho; i++)
    {
        if(*(vetor+i) == valor)
            return *(vetor+i);
    }
    return NULL;
}

int main()
{
    int v[TAM], n, valor, posicao;
    int i;

    cout << "Digite os valores do vetor: ";
    for(i=0; i<TAM; i++)
        cin >> *(i+v);
    cout << "Digite o valor que deseja buscar: ";
    cin >> n;

    valor = buscar(v, TAM, n);

    if(valor == NULL)
    {
        cout << "Valor nao encontrado!";
        return 1;
    }
    else 
        for(i=0; i<TAM; i++)
            if(*(v+i) == n)
                posicao = i;
    cout << "Posicao do valor encontrado: " << posicao+1;
    return 0;
}