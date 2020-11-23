/******************************************************************************

Um palíndromo é um número ou texto que é lido da mesma forma tanto da direita 
para a esquerda como da esquerda para a direita. Por exemplo, cada um dos intei-
ros seguintes, de cinco dígitos, é palíndromo: 12321,55555,45554 e 11611.Escreva
um programa que leia um inteiro de cinco dígitos e determine se ele é palíndromo
ou não. (Sugestão: Use os operadores divisão e resto, para separar o número em 
seus algarismos isolados.)

*******************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define MIN 10000
#define MAX 99999

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero, unidade, dezena, centena, milhar, dezenaDeMilhar, flag = 0;
    while (flag != -1) {
        printf("Entre com um inteiro positivo de 5 dígitos ou insira -1 para sair: ");
        fflush(stdin);
        scanf("%d", &numero);
        dezenaDeMilhar = numero / 10000;
        milhar = (numero % 10000) / 1000;
        centena = ((numero % 10000) % 1000) / 100;
        dezena = (((numero % 10000) % 1000) % 100) / 10;
        unidade = (((numero % 10000) % 1000) % 100) % 10;
        if (numero >= MIN && numero <= MAX) {
            if (dezenaDeMilhar == unidade && milhar == dezena) {
                printf("O inteiro inserido é um palídromo!\n\n");            
            } else {
                printf("O inteiro positivo inserido é um palídromo!\n\n");
            }
        } else {
            printf("ERRO: número fora dos padrões solicitados!\n\n");
        }
    }

    return 0;
}
