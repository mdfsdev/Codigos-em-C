/*
Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S.
S = 1 + 1/1! + ½! + 1/3! + 1 /N!
*/

#include <stdio.h>
#import <locale.h>

int fatorial(int x) {
    int resultado;
    if (x == 0) {
        resultado = 1;
    } else {
        resultado = x * fatorial(x - 1);
    }
    return resultado;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numero;
    float resultado1, S;
    printf("Sabendo que S = 1 + 1/1! + ½! + 1/3! + 1 /N!, insira um valor inteiro positivo para N para receber o valor correspondente de S: ");
    fflush(stdin);
    scanf("%d", &numero);
    resultado1 = (float)fatorial(numero);
    S = 2.66 + (1 / resultado1);
    printf("O valor de S é: %.3f", S);

    return 0;
}

