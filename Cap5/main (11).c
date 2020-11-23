/******************************************************************************

Os motoristas se preocupam com o consumo de combustível de seus automóveis. Um 
motorista manteve um registro do número de abastecimentos que fez, registrando 
também o número de quilômetros rodados e de litros obtidos a cada abastecimento. 
Desenvolva um programa que peça o número de quilômetros dirigidos e a quantidade 
de litros obtidos a cada abastecimento. O programa deverá calcular e exibir a 
quantidade de quilômetros rodados por litros usados. Depois de processar toda a 
informação, o programa deverá calcular e exibir o total combinado de quilômetros 
por litro para todos os abastecimentos. Veja um exemplo do diálogo de entrada/
saída:

*******************************************************************************/
#include <stdio.h>

int main()
{
    int opcao, abastecimentos = 0;
    float litrosAbastecidos = 0, litragemTotal = 0, quilometragem = 0, quilometragemTotal = 0;
    printf("Deseja registrar um abastecimento? (1) Sim (2) Nao\n");
    fflush(stdin);
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
            while(opcao == 1) {
                abastecimentos += 1;
                printf("Insira o número de quilometros rodados:\n");
                fflush(stdin);
                scanf("%f", &quilometragem);
                quilometragemTotal += quilometragem;
                printf("Insira a quantidade de litros abastecidos:\n");
                fflush(stdin);
                scanf("%f", &litrosAbastecidos);
                litragemTotal += litrosAbastecidos;
                printf("Deseja registrar outro abastecimento? (1) Sim (2) Nao\n");
                fflush(stdin);
                scanf("%d", &opcao);
            }
        break;  
    }
    printf("Até agora voce rodou um total de %.2f quilometros e abasteceu um total de %.2f litros de gasolina", quilometragemTotal, litragemTotal);

    return 0;
}
