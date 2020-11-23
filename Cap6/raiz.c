/*
Faça uma função que receba por parâmetro um inteiro positivo e retorne a raiz
quadrada desse número.(sem utilizar funções ou operadores de potência prontos).
Pense numa estratégia de aproximação.
*/

#include <stdio.h>
#import <locale.h>

double raiz(int num) {
    setlocale(LC_ALL, "Portuguese");
    double raiz_aproximada, aproximacao = 1, parte_inteira = 1, parte_fracionaria = 0.01;
    // calculo da parte inteira
    if(num == 1) {
        raiz_aproximada = 1;
        aproximacao = 1;
    }
    while(aproximacao < num) {
        aproximacao = parte_inteira * parte_inteira;
        ++parte_inteira;
    }
    parte_inteira -= 2;
    raiz_aproximada = parte_inteira;
    aproximacao = parte_inteira * parte_inteira;
    // calculo da parte fracionaria
    while(aproximacao < num) {
        aproximacao = (parte_inteira + parte_fracionaria) * (parte_inteira + parte_fracionaria);
        parte_fracionaria += 0.01;
    }
    parte_fracionaria -= 0.02;
    raiz_aproximada += parte_fracionaria;
    aproximacao = parte_inteira + parte_fracionaria;

    return raiz_aproximada;
}

int main() {
    int num;
    double resultado;
    printf("Insira um número inteiro positivo para calcular sua raiz quadrada aproximada: ");
    fflush(stdin);
    scanf("%d", &num);
    resultado = raiz(num);
    printf("A raiz aproximada de %d é %.2lf", num, resultado);

    return 0;
}
