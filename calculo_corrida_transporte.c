/*
  Cálculo de Valor de Corrida de Transporte
 
  Problema: ler o código do tipo de veículo (int) e a distância percorrida
  em km, e calcular o valor total da corrida usando switch-case, conforme:
 
    Tipo de veículo:
      1 -> carro (R$ 2,00/km)
      2 -> moto  (R$ 1,00/km)
      3 -> van   (R$ 3,00/km)
 
    Acréscimo por distância:
      até 10 km      -> sem acréscimo
      11 a 30 km     -> acréscimo de 10%
      acima de 30 km -> acréscimo de 20%
 
    Código de veículo inválido -> exibir mensagem de erro
 */
#include <stdio.h>

int main()
{
    float dis, T; // dis = distancia percorrida, T = total a pagar
    char tipo; // tipo = tipo de veiculo, C = Carro, M = Moto, V = Van

    printf("Digite a distancia percorrida: ");
    scanf("%f", &dis);
    printf("Digite o tipo de veiculo \n[C] - Carro \n[M] - Moto \n[V] - Van\n");
    scanf(" %c", &tipo);

    // Abaixo, o programa calcula o total a pagar de acordo com o tipo de veiculo e a distancia percorrida, aplicando os descontos conforme as regras estabelecidas.
    switch (tipo){
        case 'C':
            if(dis <= 10)
                printf("Total = %f", dis*2);
            else if(dis > 10 && dis <= 30)
                printf("Total = %f", dis*2*0.1 + dis*2);
            else
                printf("Total = %f", dis*2*0.2 + dis*2);
            break;
        case 'M':
            if(dis <= 10)
                printf("Total = %f", dis);
            else if(dis > 10 && dis <= 30)
                printf("Total = %f", dis*2*0.1 + dis);
            else
                printf("Total = %f", dis*2*0.2 + dis);
            break;
        case 'V':
            if(dis <= 10)
                printf("Total = %f", dis*3);
            else if(dis > 10 && dis <= 30)
                printf("Total = %f", dis*2*0.1 + dis*3);
            else
                printf("Total = %f", dis*2*0.2 + dis*3);
            break;
        default:
            printf("Digite um tipo de veiculo valido"); // Mensagem de erro caso o usuário digite um tipo de veículo inválido
    }
    return 0;
}
