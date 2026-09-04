/*
  Análise de Desempenho de Vendedor
 
  Problema: ler total de vendas, valor total vendido e indicador de meta
  atingida ('S'/'N'), e classificar o desempenho conforme as regras abaixo:
    - Meta não atingida -> "Desempenho insuficiente"
    - Meta atingida:
        +50 vendas e +10000 de valor total vendido -> "Excelente desempenho"
        +30 vendas ou +5000 de valor total vendido -> "Bom desempenho"
        caso contrário -> "Desempenho regular"
 */
#include <stdio.h>

int main()
{
    int totalV, valorT; // variaveis para total de vendas e valor total das vendas
    char meta; // variavel para armazenar se bateu a meta ou nao, S para sim e N para nao

    printf("Digite o total de vendas e valor total das vendas: ");
    scanf("%d %d", &totalV, &valorT);

    printf("Digite se bateu a meta: \n[S] - Sim \n[N] - nao \n");
    scanf(" %c", &meta);

    // Condicional para verificar o desempenho do vendedor com base nas vendas e se bateu a meta
    if(meta == 'N')
        printf("\nDesempenho insuficiente");
    else if(meta == 'S'){
        if(totalV > 50 && valorT > 10000)
            printf("\nExcelente Desempenho");
        else if(totalV > 30 || valorT > 5000)
            printf("\nBom desempenho");
        else
            printf("\nDesempenho Regular");
    } else
        printf("\nCaractere invalido"); // caso o usuario digite um caractere diferente de 'S' ou 'N'
    return 0;
}
