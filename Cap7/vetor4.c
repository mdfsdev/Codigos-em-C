#include <stdio.h>
#include <locale.h>
#define TAM 10

int menorValor(int numeros[TAM]) {
    int i, menor = numeros[0];
    for(i = 1; i < TAM; i++){
        if(menor > numeros[i]) {
                menor = numeros[i];
        }
    }

    return menor;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int i, menor, numeros[TAM];
    for(i = 0; i < TAM; i++) {
        printf("Insira um número: ");
        scanf("%d", &numeros[i]);
    }
    menor = menorValor(numeros);
    printf("\nO menor valor inserido foi: %d", menor);

    return 0;
}
