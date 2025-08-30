#include <stdio.h>

int main() {
    // qtd passos cavalo
    int passosBaixo = 2; // cavalo desce 2 casas
    int passosEsquerda = 1; // cavalo vai 1 casa pra esquerda

    int i = 0;
    int j;

    printf("Movimento do cavalo (em L) para baixo e para a esquerda:\n");

    //primeiro mov: pra baixo
    for (i = 0; i < passosBaixo; i++) {
        printf("Baixo\n");
    }

    // segundo movi: esquerda
    j = 0;
    while (j < passosEsquerda) {
        printf("Esquerda\n");
        j++;
    }

    printf("\nMovimento em L usando loops aninhados:\n");

    // loop externo: baixo
    for (i = 0; i < passosBaixo; i++) {
        printf("Baixo\n");
        // loop interno: esquerda
        j = 0;
        while (j < passosEsquerda) {
            printf("Esquerda\n");
            j++;
        }
    }

    return 0;
}
