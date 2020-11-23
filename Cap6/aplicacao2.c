/*
Tendo como base na aplica��o acima, crie um programa que calcule o valor total da poupan�a que al�m do valor inicial
e valor do juros, tamb�m receba valores de aplica��es mensais (ex.: R$50,00/m�s) durante todo o per�odo da sua idade
at� os 65 anos.
*/

#include <stdio.h>
#include <locale.h>



float powerFunction(float base, int exponent) {
    float resultPF = 1;
    if(exponent == 0) {
        resultPF = 1;
    }
    if(exponent > 0) {
        while(exponent >= 1) {
           resultPF = base * resultPF;
           exponent = exponent - 1;
        }
    }

    return resultPF;
}


// VT = {C(1+i)^t} + {A[(1+i)^(t-1) + 1]}
float valorTotal(float valorInicial, float taxaTotal, float aporteMensal, int tempoRestanteAposentadoria) {
    float valorTotalAposentadoria = (valorInicial * powerFunction(taxaTotal, tempoRestanteAposentadoria)) + (aporteMensal * (powerFunction(taxaTotal, (tempoRestanteAposentadoria - 1)) + 1));
    return valorTotalAposentadoria;
}


int main(){
    float valorInicial, jurosMensal, taxaTotal, aporteMensal, valorTotalAposentadoria;
    int tempoRestanteAposentadoria;
    printf("Insira o valor inicial: ");
    fflush(stdin);
    scanf("%f", &valorInicial);
    printf("Insira o valor dos aportes mensais ap�s o decorrido o primeiro m�s: ");
    fflush(stdin);
    scanf("%f", &aporteMensal);
    printf("Insira o valor do juros mensal no formato decimal: ");
    fflush(stdin);
    scanf("%f", &jurosMensal);
    taxaTotal = 1.0 + jurosMensal;
    printf("Insira, em meses, o tempo restante at� a sua aposentadoria por tempo de contribuicao: ");
    fflush(stdin);
    scanf("%d", &tempoRestanteAposentadoria);
    valorTotalAposentadoria = valorTotal(valorInicial, taxaTotal, aporteMensal, tempoRestanteAposentadoria);
    printf("O valor acumulado na aplicacao quando de sua aposentadoria �: %.2f", valorTotalAposentadoria);

    return 0;
}
