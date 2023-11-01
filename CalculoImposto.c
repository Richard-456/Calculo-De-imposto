#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    setlocale(LC_ALL, "");

    float valorInvestido = 0;
    int periodo = 0;
    float percentualRendimento = 0;

    printf("Digite o valor investido \n");
    scanf("%f", &valorInvestido);
    printf("Digite a quantidade de meses do investimento: \n");
    scanf("%d", &periodo);
    printf("Digite o percentual de rendimento ao mês: \n");
    scanf("%f", &percentualRendimento);

    int i;
    float montante = valorInvestido;
    float lucro = 0;
    percentualRendimento = percentualRendimento / 100;

    for(i = 1; i <= periodo; i++){
       montante = montante * (1 + percentualRendimento);

       if(i == periodo){
       printf("Depois do mês %d terá = R$%.3f\n", i,montante);
       }else {
           printf("Depois do mês %d terá = R$%.2f\n", i,montante);

       }
    }

    printf("\n\nValor Saldo Final = R$%.3f",montante);

    lucro = montante - valorInvestido;

    montante = montante - (lucro * 0.15);

    printf("\n\nValor Saldo Final - Imposto Redito na Fonte = R$%.2f\n\n", montante);
    }

