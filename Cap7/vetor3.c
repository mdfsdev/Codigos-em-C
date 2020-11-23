#include <stdio.h>
#include <locale.h>
#define TAM 10


int maiorValor(int numeros[TAM]) {
    int i, maior = numeros[0];
    for(i = 1; i < TAM; i++){
        if(maior < numeros[i]) {
            maior = numeros[i];
        }
    }

    return maior;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int i, maior, numeros[TAM];
    for(i = 0; i < TAM; i++) {
        printf("Insira um número: ");
        scanf("%d", &numeros[i]);
    }
    maior = maiorValor(numeros);
    printf("\nO maior valor inserido foi: %d", maior);

    return 0;
}
