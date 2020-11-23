/******************************************************************************

Desenvolva um programa em C que determine se um cliente de uma loja de departa-
mentos excedeu o limite de crédito de sua conta. Os seguintes dados de cada cli-
ente estão disponíveis: a) Número da conta b) Saldo no início do mês c) Total de
todos os encargos desse cliente nesse mês d) Total de todos os créditos aplica-
dos à conta desse cliente nesse mês e) Limite de crédito autorizado. O programa
deverá ler cada um desses fatos, calcular o novo saldo (= saldo inicial + encar-
gos — créditos) e determinar se o novo saldo é superior ao limite de crédito do
cliente. Para os clientes cujo limite de crédito foi ultrapassado, o programa 
deve exibir o número da conta do cliente, o limite de crédito, o novo saldo e a 
mensagem "Limite de Crédito Ultrapassado". Veja um exemplo do diálogo de entra-
da/saída:

*******************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float saldoInicial, encargosTotais, totalCreditos, limiteAutorizado, novoSaldo;
    int conta, flag = 0;
    while (flag != -1) {
        printf("Informe o número da conta (-1 para terminar): ");
        fflush(stdin);
        scanf("%d", &conta);
        printf("Informe o saldo inicial: ");
        fflush(stdin);
        scanf("%f", &saldoInicial);
        printf("Informe o total de encargos: ");
        fflush(stdin);
        scanf("%f", &encargosTotais);
        printf("Informe o total de créditos: ");
        fflush(stdin);
        scanf("%f", &totalCreditos);
        printf("Informe o limite de crédito: ");
        fflush(stdin);
        scanf("%f", &limiteAutorizado);
        novoSaldo = saldoInicial + encargosTotais - totalCreditos; // fórmula dada no enunciado da questao
        if (novoSaldo < limiteAutorizado) {
            printf("Conta: %d\nLimite de crédito: %.2f\nSaldo: %.2f\nLimite de crédito ultrapassado.\n", conta, limiteAutorizado, novoSaldo);
        }    
    }

    return 0;
}
