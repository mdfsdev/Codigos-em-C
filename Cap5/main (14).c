/******************************************************************************

Escreva um programa que leia o lado de um quadrado e então imprima o quadrado 
com asteriscos. Seu programa deve funcionar com quadrados de todos os tamanhos
entre 1 e 20. Por exemplo, se seu programa lesse um tamanho 4, deveria imprimir

*******************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define LADOMIN 1
#define LADOMAX 20

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int lado, i, j, flag = 0;
    char unidade = '*';
    while (flag != -1) {
        printf("Entre com o tamanho do lado do quadrado (1-20) ou com -1 para sair: ");
        fflush(stdin);
        scanf("%d", &lado);
        if (lado < LADOMIN || lado > LADOMAX) {
            printf("Tamanho inválido!\n\n");            
        } else {
            for(i = 1; i <= lado; ++i) {
                for(j = 1; j <= lado; ++j) {
                    printf("%c", unidade);
                }
                printf("\n");
            }
        }
        printf("\n\n");
    }

    return 0;
}
