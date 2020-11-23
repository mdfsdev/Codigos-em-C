/*
Fa�a uma fun��o que receba por par�metro um inteiro positivo e retorne a raiz
quadrada desse n�mero.(sem utilizar fun��es ou operadores de pot�ncia prontos).
Pense numa estrat�gia de aproxima��o.
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
    printf("Insira um n�mero inteiro positivo para calcular sua raiz quadrada aproximada: ");
    fflush(stdin);
    scanf("%d", &num);
    resultado = raiz(num);
    printf("A raiz aproximada de %d � %.2lf", num, resultado);

    return 0;
}
