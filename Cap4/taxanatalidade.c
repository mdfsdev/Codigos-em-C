/******************************************************************************

A taxa de natalidade e a taxa de mortalidade são indicadores estatísticos de 
fundamental importância por ajudar a compreender aquilo que os especialistas 
chamam de dinâmica populacional e a entender sua relação com variáveis que in-
fluenciam o desenvolvimento, como qualidade de vida, migrações, fatores socio-
econômicos e localização. Sabendo disso, crie um programa que calcule os dois 
indicadores utilizando o comando switch. Observação : A taxa de natalidade é 
calculada pela seguinte fórmula: taxa de natalidade = (número de crianças nas-
cidas x 1000) / número de habitantes;Enquanto que, a taxa de mortalidade = (nú-
meros de óbitos x 1000) /número de habitantes.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroHabitantes,numeroNascidos, numeroObitos;
    float taxaNatalidade = (numeroNascidos * 1000) / numeroHabitantes;
    float taxaMortalidade = (numeroObitos * 1000) / numeroHabitantes;
    printf("Insira o número de habitantes da cidade:\n");
    fflush(stdin);
    scanf("%d", &numeroHabitantes);
    printf("Insira o número de nascimentos da cidade:\n");
    fflush(stdin);
    scanf("%d", &numeroNascidos);
    printf("Insira o número de óbitos da cidade:\n");
    fflush(stdin);
    scanf("%d", &numeroObitos);
    switch(taxaNatalidade){
        case :
        
        break;
    }
    switch(taxaNatalidade){
        case :
        
        break;
    }
    printf("A taxa de natalidade é %.2f e a taxa de mortalidade é %.2f", taxaNatalidade, taxaMortalidade);

    return 0;
}
