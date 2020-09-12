/******************************************************************************

Escreva um programa que leia dois inteiros e então determine e imprima se o 
primeiro é múltiplo do segundo. (Dica: Use o operador resto.)

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    printf("Insira o primeiro número:\n");
    fflush(stdin);
    scanf("%d", &n1);
    printf("Insira o segundo número:\n");
    fflush(stdin);
    scanf("%d", &n2);
    if (n1 % n2 == 0) {
        printf("O primeiro número é múltiplo do segundo");
    } else {
        printf("O primeiro número não é múltiplo do segundo");
    }
    
    return 0;
}
