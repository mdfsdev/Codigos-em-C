/******************************************************************************

Dado o valor do produto e a forma de pagamento.1= à vista;2= à prazo.Se o produ-
to for pago à vista aplique um desconto de 10% antes de mostrar o valor final, 
senão informe o mesmo valor do produto.


*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorOriginal, valorComDesconto;
    int formaPagamento;
    printf("Insira o valor original do produto:\n");
    fflush(stdin);
    scanf("%f", &valorOriginal);
    printf("Selecione a forma de pagamento: (1) à vista (2) à prazo\n");
    fflush(stdin);
    scanf("%d", &formaPagamento);
    switch(formaPagamento){
        case 1:
        valorComDesconto = valorOriginal * 0.9;
        printf("O valor final da compra é %.2f", valorComDesconto);
        break;
        
        case 2:
        printf("O valor final da compra é %.2f", valorOriginal);
        break;
        
        default:
        printf("Opcao inválida!");
    }

    return 0;
}
