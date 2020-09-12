/******************************************************************************

Uma loja fornece 10% de desconto para funcionários e 5% de desconto para cli-
entes vips. Faça um programa que calcule o valor total a ser pago por uma pes-
soa. O programa deverá ler o valor total da compra efetuada e um código que i-
dentifique se o comprador é um cliente comum (1), funcionário (2) ou vip (3).

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorTotal, desconto, valorFinal;
    int codigo;
    printf("Insira o valor total da compra:\n");
    fflush(stdin);
    scanf("%f", &valorTotal);
    printf("Insira seu código:\n");
    fflush(stdin);
    scanf("%d", &codigo);
    if (codigo == 2) {
        desconto = 0.1;
    } else if (codigo == 3) {
        desconto = 0.05;
    } else {
        desconto = 0;
    }
    valorFinal = valorTotal * (1 - desconto);
    printf("O valor final de sua compra é: %.2f", valorFinal);
    
    return 0;
}
