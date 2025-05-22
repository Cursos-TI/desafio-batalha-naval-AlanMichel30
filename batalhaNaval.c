#include <stdio.h>

int main() {
    int tabuleiro[10][10]; // Declaração do tabuleiro
    char colunas[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int navio[3] = {3, 3, 3}; // Tamanho do navio

    // Inicializa o tabuleiro com água (0)
    for(int x = 0; x < 10; x++) {
        for(int y = 0; y < 10; y++) {
            tabuleiro[x][y] = 0;
        }
    }
    // Navio horizontal 
    for (int i = 0; i < 3; i++) {
        tabuleiro[2][3 + i] = navio[i];
    }

    // Navio vertical 
    for (int i = 0; i < 3; i++) {
        tabuleiro[5 + i][0] = navio[i];
    }

    // Navio diagonal principal 
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][i] = navio[i];
    }

    // Navio diagonal secundária 
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][9 - i] = navio[i];
    }

    // Exibir cabeçalho das colunas 
    printf("   ");
    for(int y = 0; y < 10; y++) {
        printf("%c ", colunas[y]);
    }
    printf("\n");

    // Exibir o tabuleiro com os números das linhas 
    for(int x = 0; x < 10; x++) {
        printf("%d  ", x);
        for(int y = 0; y < 10; y++) {
            printf("%d ", tabuleiro[x][y]);
        }
        printf("\n");
    }

    return 0;
}
