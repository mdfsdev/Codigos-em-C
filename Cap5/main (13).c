/******************************************************************************

Os juros simples em um empréstimo são calculados pela fórmula juros = capital * 
taxa * dias / 365. A fórmula anterior admite que taxa seja a taxa anual de juros
e, portanto, inclui a divisão por 365(dias). Desenvolva um programa em C que re-
ceba os valores de capital, taxa e dias de vários empréstimos, calcule os juros
simples de cada empréstimo e os exiba, usando a fórmula anterior.

*******************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float valorRecebido, juros, valorPago;
    int dias, flag = 0;
    while (flag != -1) {
        printf("Entre com o valor do empréstimo (-1 para terminar): ");
        fflush(stdin);
        scanf("%f", &valorRecebido);
        printf("Entre com a taxa de juros: ");
        fflush(stdin);
        scanf("%f", &juros);
        printf("Entre com o período de empréstimo em dias: ");
        fflush(stdin);
        scanf("%d", &dias);
        valorPago = valorRecebido * (1 + juros);
        printf("O valor dos juros é: %.2f\n", valorPago - valorRecebido);
    }

    return 0;
}
