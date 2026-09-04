/*
  Cálculo de Valor de Ingresso de Cinema
 
  Problema: ler a idade de uma pessoa (int) e o tipo de ingresso desejado
  ('I' para inteiro, 'M' para meia), e calcular o valor a pagar, sabendo que:
    - Ingresso inteiro = R$ 40,00 / Ingresso meia = R$ 20,00
    - Idade < 12 ou idade > 60 -> direito automático à meia entrada,
      independentemente do tipo informado
    - Tipo de ingresso inválido -> exibir "Tipo de ingresso inválido"
    - O sistema deve permitir a compra de 1, 2 ou 3 ingressos na mesma
      transação, podendo cada um ter idade/tipo diferentes
 */
#include <stdio.h>
#define MEIA 20
#define INTEIRA 40

int main()
{
    int idd, qtd;
    char ing1, ing2, ing3;

    printf("Informe a idade: ");
    scanf("%d", &idd);

    printf("Informe a quantidade de ingressos (max 3): ");
    scanf("%d", &qtd);

   /*
   Verificação sobre as condições propostas para o cálculo do valor final do ingresso, considerando a
   idade e o tipo de ingresso informado.
   */
    if(qtd == 1){
        printf("Informe o tipo de ingresso: ");
        printf("Digite I para 'inteira' e M para 'meia': ");
        scanf(" %c", &ing1);
        fflush(stdin);
        if(idd > 12 && idd < 60){
            if(ing1 == 'I')
                printf("Valor Final = %d", INTEIRA);
            else if(ing1 == 'M')
                printf("Valor Final = %d", MEIA);
            else
                printf("Tipo de ingresso invalido");

        }else
             printf("Valor Final (condicao especial) = %d", MEIA);
    }else if(qtd == 2){
        printf("Informe os tipos de ingresso: ");
        printf("Digite I para 'inteira' e M para 'meia': ");
        scanf(" %c", &ing1);
        scanf(" %c", &ing2);
        fflush(stdin);
        if(idd > 12 && idd < 60){
            if(ing1 == 'M' && ing2 == 'M')
                printf("Valor Final = %d", MEIA+MEIA);
            else if(ing1 == 'M' && ing2 == 'I')
                printf("Valor Final = %d", MEIA+INTEIRA);
            else if(ing1 == 'I' && ing2 == 'M')
                printf("Valor Final = %d", MEIA+INTEIRA);
            else if(ing1 == 'I' && ing2 == 'I')
                printf("Valor Final = %d", INTEIRA+INTEIRA);
            else
                printf("Tipo de ingresso invalido");
        }else
            printf("Valor Final (condicao especial) = %d", MEIA+MEIA);
    }else if(qtd == 3){
        printf("Informe os tipos de ingresso: ");
        printf("Digite I para 'inteira' e M para 'meia': ");
        scanf(" %c", &ing1);
        scanf(" %c", &ing2);
        scanf(" %c", &ing3);
        //fflush(stdin);
        if(idd > 12 && idd < 60){
            if(ing1 == 'M' && ing2 == 'M' && ing3 == 'M')
                printf("Valor Final = %d", MEIA+MEIA+MEIA);
            else if(ing1 == 'I' && ing2 == 'I' && ing3 == 'I')
                printf("Valor Final = %d", INTEIRA+INTEIRA+INTEIRA);
            else if(ing1 == 'I' && ing2 == 'I' && ing3 == 'M')
                printf("Valor Final = %d", INTEIRA+INTEIRA+MEIA);
            else if(ing1 == 'I' && ing2 == 'M' && ing3 == 'M')
                printf("Valor Final = %d", INTEIRA+MEIA+MEIA);
            else if(ing1 == 'M' && ing2 == 'I' && ing3 == 'M')
                printf("Valor Final = %d", MEIA+INTEIRA+MEIA);
            else if(ing1 == 'M' && ing2 == 'I' && ing3 == 'I')
                printf("Valor Final = %d", MEIA+INTEIRA+INTEIRA);
            else if(ing1 == 'M' && ing2 == 'M' && ing3 == 'I')
                printf("Valor Final = %d", MEIA+MEIA+INTEIRA);
            else if(ing1 == 'I' && ing2 == 'M' && ing3 == 'I')
                printf("Valor Final = %d", MEIA+MEIA+INTEIRA);
            else
                printf("Tipo de ingresso invalido");
        }else
            printf("Valor Final (condicao especial) = %d", MEIA+MEIA+MEIA);
    }

    return 0;
}
