/*
  Cálculo de Valor Final de Compra
 
  Problema: ler o preço de um produto (int), a quantidade comprada (int)
  e o tipo de cliente ('C' para comum, 'V' para VIP), e calcular o valor
  final a pagar, aplicando:
    - Valor total = preço * quantidade
    - Cliente VIP -> desconto de 10% sobre o valor total
    - Quantidade > 10 unidades -> desconto adicional de 5% sobre o valor
      já com desconto (se houver)
    - Tipo de cliente inválido -> exibir "Tipo de cliente inválido"
 */
#include <stdio.h>

int main()
{
    // vP = valor do produto, qC = quantidade comprada, vT = valor total
    int vP, qC, vT;
    // tp = tipo do cliente, V = Vip, C = Comum
    char tp;
    printf("informe a quantidade comprada e o valor do produto: ");
    scanf("%d %d", &qC, &vP);

    printf("Informe o tipo de cliente \n[V] - Vip \n[C] - Comum");
    scanf(" %c", &tp);

    // Abaiixo estão as condições para o cálculo do valor total a ser pago, levando em consideração o tipo do cliente e a quantidade comprada.
    if(tp == 'C'){
        if(qC <= 10)
            printf("\nValor total = %d", qC*vP);
        else
            printf("\nValor total = %f", qC*vP-(qC*vP*0.05));
        }else if(tp == 'V'){
            float valDesconto = qC*vP-(qC*vP*0.1); // Variável para armazenar o valor total com desconto para clientes VIP
            if(qC <= 10)
                printf("\nValor Total = %f", valDesconto);
            else
                printf("\nValor Total = %f", valDesconto-(valDesconto*0.05));
        } else
            printf("\nTipo de Cliente Invalido"); // Mensagem de erro para tipo de cliente inválido
        return 0;
}
