#include <stdio.h>

// Função para simular o movimento da Torre
int movimentoTorre(int casas) {
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casas; i++) {
        printf("Direita\n");
    }
    return 0;
}

// Função para simular o movimento do Bispo
int movimentoBispo(int casas) {
    printf("Movimento do Bispo:\n");
    int i = 0;
    while (i < casas) {
        printf("Cima, Direita\n");
        i++;
    }
    return 0;
}

// Função para simular o movimento da Rainha
int movimentoRainha(int casas) {
    printf("Movimento da Rainha:\n");
    int i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < casas);
    return 0;
}

// Função para simular o movimento do Cavalo
int movimentoCavalo() {
    printf("Movimento do Cavalo:\n");
    int casasBaixo = 2;
    int casasEsquerda = 1;

    // Movimento para baixo
    for (int i = 0; i < casasBaixo; i++) {
        printf("Baixo\n");
    }

    // Movimento para a esquerda
    int j = 0;
    while (j < casasEsquerda) {
        printf("Esquerda\n");
        j++;
    }
    return 0;
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    movimentoTorre(casasTorre);
    printf("\n");
    movimentoBispo(casasBispo);
    printf("\n");
    movimentoRainha(casasRainha);
    printf("\n\n"); // Linha em branco para separar o movimento do Cavalo

    movimentoCavalo();

    return 0;
}