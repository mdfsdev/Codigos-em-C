/*
Faça uma função que leia 50 valores inteiros e retorna o maior deles.
*/

#include <stdio.h>
#include <locale.h>

int maior(void) {
    int i, maior1, valores[50];
    printf("Informe o primeiro valor: ");
    fflush(stdin);
    scanf("%d", &valores[0]);
    maior1 = valores[0];
    for(i = 1; i <= 48; i++) {
        printf("Informe o próximo valor: ");
        fflush(stdin);
        scanf("%d", &valores[i]);
        if (valores[i] > maior1) {
            maior1 = valores[i];
        }
    }
    printf("Informe o último valor: ");
    fflush(stdin);
    scanf("%d", &valores[49]);
    if(valores[49] > maior1) {
        maior1 = valores[49];
    }

    return maior1;
}
int main(void) {
    setlocale(LC_ALL, "Portuguese");
    int maior2;
    printf("Este programa calcula o maior dos 50 valores inseridos: \n");
    maior2 = maior();
    printf("O maior valor é %d\n", maior2);

    return 0;
}
