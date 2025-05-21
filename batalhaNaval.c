#include <stdio.h>

int main() {
    
    int tabuleiro[10][10]; // Declaração do tabuleiro
    char colunas[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int navio[3] = {3,3,3}; // Inicializa os vetores dos navios

    // Inicializa o tabuleiro com água (0)
    for(int x = 0; x < 10; x++) {
        for(int y = 0; y < 10; y++) {
            tabuleiro[x][y] = 0;
        }
    }

    // Posiciona um navio no tabuleiro
    for (int i = 0; i < sizeof(navio)/sizeof(navio[0]); i++) {
        tabuleiro[2][3 + i] = navio[i];
    }

    // Exibir as letras das colunas no topo
    printf("   ");
    for(int y = 0; y < 10; y++) {
        printf("%c ", colunas[y]);
    }
    printf("\n");

    // Exibir o tabuleiro com números das linhas
    for(int x = 0; x < 10; x++) {
        printf("%d  ", x);
        for(int y = 0; y < 10; y++) {
            printf("%d ", tabuleiro[x][y]);
        }
        printf("\n");
    }

    return 0;


    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

   
}
