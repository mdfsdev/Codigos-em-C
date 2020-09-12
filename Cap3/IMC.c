/******************************************************************************

Faça um programa em linguagem C que receba do teclado o peso (KG) e a altura (m)
de um usuário, calcule e imprima no console, com duas casas decimais, o IMC des-
te usuário.


*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, altura;
    printf("Insira o seu peso em quilogramas: \n");
    fflush(stdin);
    scanf("%f", &peso);
    printf("Insira sua altura em metros: \n");
    scanf("%f", &altura);
    float IMC = peso / (altura * altura);
    printf("Seu IMC é: %.2f", IMC);

    return 0;
}
