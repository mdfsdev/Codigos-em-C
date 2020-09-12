/******************************************************************************

Escreva um programa que leia cinco números inteiros e então determine e imprima 
o maior e o menor inteiro do grupo.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, n4, n5;
    printf("Insira o primeiro número:\n");
    fflush(stdin);
    scanf("%d", &n1);
    printf("Insira o segundo número:\n");
    fflush(stdin);
    scanf("%d", &n2);
    printf("Insira o terceiro número:\n");
    fflush(stdin);
    scanf("%d", &n3);
    printf("Insira o quarto número:\n");
    fflush(stdin);
    scanf("%d", &n4);
    printf("Insira o quinto número:\n");
    fflush(stdin);
    scanf("%d", &n5);
    if (n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5) {
        printf("O maior número é %d", n1);
    } else if (n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5) {
        printf("O maior número é %d", n2);
    } else if (n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5) {
        printf("O maior número é %d", n3);
    } else if (n4 > n1 && n4 > n2 && n4 > n3 && n4 > n5) {
        printf("O maior número é %d", n4);
    } else {
        printf("O maior número é %d", n5);
    }
    if (n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5) {
        printf(" e o menor número é %d", n1);
    } else if (n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5) {
        printf(" e o menor número é %d", n2);
    } else if (n3 < n1 && n3 < n2 && n3 < n4 && n3 < n5) {
        printf(" e o menor número é %d", n3);
    } else if (n4 < n1 && n4 < n2 && n4 < n3 && n4 < n5) {
        printf(" e o menor número é %d", n4);
    } else {
        printf(" e o menor número é %d", n5);
    }
    
    return 0;
}
