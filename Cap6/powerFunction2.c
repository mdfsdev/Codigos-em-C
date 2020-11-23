#include <stdio.h>
#include <stdlib.h>

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


int main() {
    float a, answer;
    int b;
    printf("Insert integers values for a and b: ");
    fflush(stdin);
    scanf("%f %d", &a, &b);
    answer = powerFunction(a, b);
    printf("a powered to b is %.2f\n", answer);

    return 0;
}
