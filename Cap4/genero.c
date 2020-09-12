/******************************************************************************

Crie um algoritmo que imprima o gênero de uma pessoa utilizando um dos caracte-
res(M ou F) como entrada.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char genero;
    printf("Selecione seu genero: (M) (F)\n");
    fflush(stdin);
    scanf("%c", &genero);
    switch(genero){
        case 'M':
        printf("Seu genero é masculino");
        break;
        
        case 'F':
        printf("Seu genero é feminino");
        break;
        
        default:
        printf("Opcao inválida!");
    }

    return 0;
}
