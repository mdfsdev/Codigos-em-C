/*
Crie uma fun��o que retorne o valor total de uma aplica��o na poupan�a baseado na sua idade de contribui��o trabalhista
daqui � 65 anos (na aposentadoria). O programa deve receber um valor inicial da aplica��o na poupan�a (ex.: R$5000,00),
o valor do juros mensal e a quantidade de meses. Baseado na f�rmula https://goo.gl/EFd26p retorne o valor total de quan-
to ter� na poupan�a at� o ano de aposentadoria.
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

float valorTotal(float valorInicial2, float taxaTotal2, int tempoRestanteAposentadoria) {
    float valorTotalAposentadoria2 = valorInicial2 * (powerFunction(taxaTotal2, tempoRestanteAposentadoria));
    return valorTotalAposentadoria2;
}


int main(void){
    setlocale(LC_ALL, "Portuguese");
    float valorInicial1, jurosMensal, taxaTotal1, valorTotalAposentadoria1;
    int tempoRestanteAposentadoria1;
    printf("Insira o valor inicial: ");
    fflush(stdin);
    scanf("%f", &valorInicial1);
    printf("Insira o valor do juros mensal no formato decimal: ");
    fflush(stdin);
    scanf("%f", &jurosMensal);
    taxaTotal1 = 1.0 + jurosMensal;
    printf("Insira, em meses, o tempo restante at� a sua aposentadoria por tempo de contribuicao: ");
    fflush(stdin);
    scanf("%d", &tempoRestanteAposentadoria1);
    valorTotalAposentadoria1 = valorTotal(valorInicial1, taxaTotal1, tempoRestanteAposentadoria1);
    printf("O valor acumulado na aplicacao quando de sua aposentadoria �: %.2f", valorTotalAposentadoria1);

    return 0;
}
