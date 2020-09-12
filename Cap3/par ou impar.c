/******************************************************************************

Receba um número do usuário e imprima uma mensagem informando se ele é par 
ou impar. (Dica: use o operador resto)



*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero;
    float divisor = 2;
    float resto = numero % divisor;
    printf("Insira um numero:\n");
    fflush(stdin);
    scanf("%f", &numero);
    if (resto == 0) {
        printf("O número é par.\n");
    } else { 
        printf("O número é ímpar.\n");
    }
    
    return 0;
}
