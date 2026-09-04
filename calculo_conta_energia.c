/*
  Cálculo de Conta de Energia Elétrica
 
  Problema: ler o mês do ano (int, 1 a 12) e o consumo em kWh (int), e
  calcular o valor final da conta usando switch-case, conforme:
 
    Tarifa base por mês:
      dez/jan/fev (verão) -> R$ 1,20/kWh
      jun/jul/ago (inverno) -> R$ 0,90/kWh
      demais meses -> R$ 1,00/kWh
 
    Acréscimo por faixa de consumo:
      até 100 kWh -> sem acréscimo
      101 a 300 kWh -> + R$ 0,10/kWh
      acima de 300 kWh -> + R$ 0,20/kWh
 
    Valor final por kWh = tarifa base + acréscimo da faixa
    Mês inválido -> exibir mensagem de erro
 */
#include <stdio.h>
#define ACRESCIMO1 0.1
#define ACRESCIMO2 0.2

int main()
{
    int mes, consumo;

    printf("Qual o mes?");
    scanf("%d", &mes);
    printf("Qual o consumo em KWh?");
    scanf("%d", &consumo);

    /*
    O bloco de código abaixo é estruturado para, primeiramente, verificar o mês do ano
    e, em seguida, calcular o valor da conta de energia elétrica com base no 
    consumo em KWh.
    */
    if(mes == 12 || mes == 1 || mes == 2)
    {
        if(consumo >= 101 && consumo < 300)
          printf("Valor da conta: %.2f", consumo*(1.2 + ACRESCIMO1));
        else if(consumo > 300)
            printf("Valor da conta: %.2f", consumo*(1.2 + ACRESCIMO2));
        else
            printf("Valor da conta: %.2f", consumo*1.2);
    }
    else if(mes == 6 || mes == 7 || mes == 8)
    {
        if(consumo >= 101 && consumo < 300)
            printf("Valor da conta: %.2f", consumo*(0.9 + ACRESCIMO1));
        else if(consumo > 300)
            printf("Valor da conta: %.2f", consumo*(0.9 + ACRESCIMO2));
        else
            printf("Valor da conta: %.2f", consumo*0.9);
    } 
    else
    {
        if(consumo >= 101 && consumo < 300)
            printf("Valor da conta: %.2f", consumo*(1.0 + ACRESCIMO1));
        else if(consumo > 300)
            printf("Valor da conta: %.2f", consumo*(1.0 + ACRESCIMO2));
        else
            printf("Valor da conta: %.2f", consumo*1.0);
    }
    return 0;
}
