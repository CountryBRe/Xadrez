#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o movimento do Bispo
void moverBispo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispo(casas - 1);
}

// Movimento com loops aninhados complexos para o Bispo (além da recursiva)
void bispoComLoopsAninhados(int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Diagonal (%d, %d): Cima Direita\n", i + 1, j + 1);
        }
    }
}

void moverCavaloComplexo() {
    printf("\nMovimento do Cavalo (duas casas para cima, uma para a direita):\n");

    for (int i = 0; i < 2; i++) { // Duas casas para cima
        if (i == 1) continue; // Apenas para exemplo de uso de continue
        printf("Cima\n");
    }

    int j = 0;
    while (j < 1) { // Uma casa para a direita
        printf("Direita\n");
        j++;
        if (j == 1) break; // Exemplo de uso de break
    }
}

// Programa principal
int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre (5 casas para Direita):\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo (5 casas na Diagonal Cima Direita):\n");
    moverBispo(casasBispo);

    printf("\nMovimento da Rainha (8 casas para Esquerda):\n");
    moverRainha(casasRainha);

    // Nível Aventureiro – Cavalo com loops aninhados
    printf("\nMovimento do Cavalo (duas casas para Baixo, uma para Esquerda):\n");
    for (int i = 0; i < 2; i++) {  // Duas casas para baixo
        printf("Baixo\n");
        int j = 0;
        while (j < 1) { // Uma casa para a esquerda
            printf("Esquerda\n");
            j++;
        }
    }

    moverCavaloComplexo();

    printf("\nMovimento adicional do Bispo com loops aninhados:\n");
    bispoComLoopsAninhados(2, 2); // Simula movimento em 2x2 diagonais

    return 0;
}