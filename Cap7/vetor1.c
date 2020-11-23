/*
Criar uma função que receba um vetor de caracteres (palavra, vetor de char) e retorne a quantidade de caracteres (int)
*/

#include <stdio.h>
#include <locale.h>


int qtdCaracteres(char palavra[]) {
    int tamanho = 0, i = 0;
    while(palavra[i] != '\0') {
        tamanho += 1;
        ++i;
    }
    return tamanho;
}

int main (void) {
    setlocale(LC_ALL, "Portuguese");
    int numeroCaracteres;
    char palavra[1000];
    printf("Insira a palavra que deseja contabilizar os caracteres: ");
    fflush(stdin);
    scanf("%s", palavra);
    numeroCaracteres = qtdCaracteres(palavra);
    printf("A palavra inserida possui %d caracteres.", numeroCaracteres);

    return 0;
}
