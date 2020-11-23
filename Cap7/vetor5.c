#include <stdio.h>
#include <locale.h>
#define TAM 10
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>
#define TAM 5

int menorValor(int copia[2]) {
    int menor = copia[0];
    if(menor > copia[1]) {
        menor = copia[1];
    }

    return menor;
}

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    int numeros[TAM], opcao = 0, aux, copia[2];
    printf("---- Este programa ordernará em ordem crescente ou decrescente os %d números inteiros que você inserir ----\n", TAM);
    for(int i = 0; i < TAM; i++) {
        printf("Insira um número inteiro: ");
        scanf("%d", &numeros[i]);
    }
    while(opcao != 1 && opcao != 2) {
        printf("\nEscolha (1) para ordenamento crescente e (2) para ordenamento decrescente: ");
        fflush(stdin);
        scanf("%d", &opcao);
    }

    switch(opcao) {
        case 1: // crescente
            for(int j = 1; j < TAM; j++) {
                for(int i = 0; i < TAM - 1; i++) {
                    copia[0] = numeros[i];
                    copia[1] = numeros[i + 1];
                    if(copia[0] == menorValor(copia)) {
                        numeros[i] = copia[0];
                        numeros[i + 1] = copia[1];
                    } else {
                        numeros[i] = copia[1];
                        numeros[i + 1] = copia[0];
                    }
                }
            }
            printf("Ordem crescente dos números inseridos: ");
            for(int i = 0; i < TAM - 2; i++) {
                printf("%d, ", numeros[i]);
            }
            printf("%d", numeros[TAM - 1]);
            break;
        case 2: // decrescente
            for(int j = 1; j < TAM; j++) {
                for(int i = 0; i < TAM - 1; i++) {
                    copia[0] = numeros[i];
                    copia[1] = numeros[i + 1];
                    if(copia[0] == menorValor(copia)) {
                        numeros[i] = copia[1];
                        numeros[i + 1] = copia[0];
                    } else {
                        numeros[i] = copia[0];
                        numeros[i + 1] = copia[1];
                    }
                }
            }
            printf("Ordem decrescente dos números inseridos: ");
            for(int i = 0; i < TAM - 2; i++) {
                printf("%d, ", numeros[i]);
            }
            printf("%d", numeros[TAM - 1]);
            break;
    }

    return 0;
}
