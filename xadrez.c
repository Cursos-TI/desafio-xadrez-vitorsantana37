#include <stdio.h>

// Função recursiva para simular o movimento da Torre
int movimentoTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        movimentoTorre(casas - 1);
    }
    return 0;
}

// Função recursiva para simular o movimento do Bispo
int movimentoBispo(int casas) {
    if (casas > 0) {
        printf("Cima, Direita\n");
        movimentoBispo(casas - 1);
    }
    return 0;
}

// Função recursiva para simular o movimento da Rainha
int movimentoRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        movimentoRainha(casas - 1);
    }
    return 0;
}

// Função para simular o movimento do Cavalo
int movimentoCavalo() {
    printf("Movimento do Cavalo:\n");
    int casasCima = 2;
    int casasDireita = 1;

    for (int i = 0; i < casasCima; i++) {
        printf("Cima\n");
    }
    printf("Direita\n");

    return 0;
}

// Função para simular o movimento do Bispo com loops aninhados
int movimentoBispoAninhado(int casas) {
    printf("Movimento do Bispo com loops aninhados:\n");
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < casas; j++) {
            printf("Cima, Direita\n");
        }
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
    printf("\n");

    movimentoBispoAninhado(casasBispo);

    return 0;
}