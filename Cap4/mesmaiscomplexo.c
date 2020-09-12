/******************************************************************************

Escreva um programa utilizando o comando switch que imprima um mês de acordo 
com o número digitado pelo usuário.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int referencia;
    char mes [30];
    printf("Insira o valor referente ao mês do ano:\n");
    fflush(stdin);
    scanf("%d", &referencia);
    switch(referencia){
        case 1:
            mes = "Janeiro";
            printf("O mês relativo ao número inserido é: %s", mes);
            break;
        case 2:
            mes = "Fevereiro";
            printf("O mês relativo ao número inserido é: %s", mes);
            break;
        case 3:
            mes = "Marco";
            printf("O mês relativo ao número inserido é: %s", mes);
            break;
        case 4:
            mes = "Abril";
            printf("O mês relativo ao número inserido é: %s", mes);
            break;
        case 5:
            mes = "Maio";
            printf("O mês relativo ao número inserido é: %s", mes);
            break;
        case 6:
            mes = "Junho";
            printf("O mês relativo ao número inserido é: %s", mes);
            break;
        case 7:
            mes = "Julho";
            printf("O mês relativo ao número inserido é: %s", mes);
            break;
        case 8:
            mes = "Agosto";
            printf("O mês relativo ao número inserido é: %s", mes);
            break;
        case 9:
            mes = "Setembro";
            printf("O mês relativo ao número inserido é: %s", mes);
            break;
        case 10:
            mes = "Outubro";
            printf("O mês relativo ao número inserido é: %s", mes);
            break;
        case 11:
            mes = "Novembro";
            printf("O mês relativo ao número inserido é: %s", mes);
            break;
        case 12:
            mes = "Dezembro";
            printf("O mês relativo ao número inserido é: %s", mes);
            break;
        default:
            printf("Referência inválida");
    }    
    printf("O mês relativo ao valor inserido (%d) é: %s", referencia, mes);
    
    return 0;
}