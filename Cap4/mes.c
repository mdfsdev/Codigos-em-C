/******************************************************************************

Escreva um programa utilizando o comando switch que imprima um mês de acordo 
com o número digitado pelo usuário.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mes;
    printf("Insira o valor referente ao mês do ano:\n");
    fflush(stdin);
    scanf("%d", &mes);
    switch(mes){
        case 1:
            printf("O mês relativo ao número inserido é Janeiro");
            break;
        case 2:
            printf("O mês relativo ao número inserido é Fevereiro");
            break;
        case 3:
            printf("O mês relativo ao número inserido é Marco");
            break;
        case 4:
            printf("O mês relativo ao número inserido é Abril");
            break;
        case 5:
            printf("O mês relativo ao número inserido é Maio");
            break;
        case 6:
            printf("O mês relativo ao número inserido é Junho");
            break;
        case 7:
            printf("O mês relativo ao número inserido é Julho");
            break;
        case 8:
            printf("O mês relativo ao número inserido é Agosto");
            break;
        case 9:
            printf("O mês relativo ao número inserido é Setembro");
            break;
        case 10:
            printf("O mês relativo ao número inserido é Outubro");
            break;
        case 11:
            printf("O mês relativo ao número inserido é Novembro");
            break;
        case 12:
            printf("O mês relativo ao número inserido é Dezembro");
            break;
        default:
            printf("Referência inválida");
    }    
    
    return 0;
}