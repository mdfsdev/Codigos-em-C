/******************************************************************************

A média para que o aluno seja aprovado no IFPE sem precisar fazer prova final é
7,0. Ou seja, se um determinado estudante obtiver nota 7,0 ou superior estará 
aprovado, inferior a 7,0 mais superior ou igual a 2,0, poderá fazer prova final. 
Caso o estudante tire menos do que 2,0 estará sumariamente reprovado naquele 
componente. FAça um programa que receba UMA nota de zero (0) a dez (10) e im-
prima uma mensagem informando a situação do estudante quanto a sua aprovação.


*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota;
    printf("Insira a sua nota:\n");
    fflush(stdin);
    scanf("%f", &nota);
    if (nota >= 7) {
        printf("Você está aprovado.\n");
    } else if (nota < 7 && nota >= 2) {
        printf("Você está na final.\n");
    } else if (nota < 2) {
        printf("Você está reprovado.\n");
    } else {
        printf("Nota inválida! Verifique sua situação.");
    }
    
    return 0;
}
