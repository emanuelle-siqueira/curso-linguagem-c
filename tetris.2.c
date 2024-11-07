#include <stdio.h>
#include <string.h>

#define LINHAS 20
#define COLUNAS 10

int main() {
    char tabuleiro[LINHAS][COLUNAS + 2];  // +2 para as bordas
    int i, j, x;

    // Inicializa o tabuleiro com espaços e bordas
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS + 2; j++) {
            if (j == 0 || j == COLUNAS + 1) {
                tabuleiro[i][j] = '|';
            } else {
                tabuleiro[i][j] = '.';
            }
        }
        tabuleiro[i][COLUNAS + 1] = '\0'; // Adiciona o caractere nulo no final da string
    }
    tabuleiro[0][0] = tabuleiro[LINHAS - 1][0] = '+';
    for (i = 1; i < COLUNAS + 1; i++) {
        tabuleiro[0][i] = tabuleiro[LINHAS - 1][i] = '-';
    }

    // Lê as posições iniciais das peças
    while (scanf("%d", &x) && x != 0) {
        // Encontra a linha onde a peça deve parar
        for (i = LINHAS - 1; i >= 0 && tabuleiro[i][x] == '.'; i--) {
            // Marcar a posição da peça
            tabuleiro[i][x] = '#';
            tabuleiro[i + 1][x] = '#';
            tabuleiro[i][x + 1] = '#';
            tabuleiro[i + 1][x + 1] = '#';
        }
    }

    // Imprime o tabuleiro
    for (i = 0; i < LINHAS; i++) {
        printf("%s\n", tabuleiro[i]);
    }

    return 0;
}