/*
 * Criar uma função que receba um vetor de caracteres (frase, vetor de char) e retorne a quantidade de palavras(int)?
 */

 #include <stdio.h>

 int contaPalavras(char frase[]) {
    int numeroPalavras = 1, i = 0;
    while(frase[i] != '\0') {
        if(frase[i] == ' ') {
            ++numeroPalavras;
        }
        ++i;
    }

    return numeroPalavras;
 }


int main (void) {
    int numeroPalavras2;
    char frase[200];
    printf("Insira a frase que deseja contabilizar as palavras: ");
    fflush(stdin);
    fgets(frase, 200, stdin);
    numeroPalavras2 = contaPalavras(frase);
    printf("A frase inserida possui %d palavras.", numeroPalavras2);

    return 0;
}
