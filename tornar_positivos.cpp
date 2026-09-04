/*
    mplemente uma função que receba um vetor estático de números inteiros e substi-
tua cada elemento negativo pelo seu valor absoluto. O cabeçalho deverá ser void
tornarPositivos(int *vetor, int tamanho). A função deverá percorrer o vetor
utilizando aritmética de ponteiros, sem utilizar a notação vetor[i].
*/

#include<iostream>
using namespace std;
#define TAM 5

void tornarPositivos(int *vetor, int tamanho)
{
    for(int i=0; i<tamanho; i++)
        if(*(i+vetor)<0)
            *(i+vetor) = *(i+vetor)*(-1);
}

int main()
{
    int v[TAM], i=0;
    
    for(i=0; i<TAM; i++)
        cin >> *(i+v);

    tornarPositivos(v, TAM);

    cout << "Valores do vetor: ";
    for(i=0; i<TAM; i++)
        cout << *(i+v) << " ";
        
    return 0;
}