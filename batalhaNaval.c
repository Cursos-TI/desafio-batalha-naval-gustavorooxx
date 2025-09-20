#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    int tabuleiro[10][10];
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    // Navios
    int navio_vertical1[3] = {3, 3, 3};
    int navio_horizontal2[3] = {3, 3, 3};
    int navio_diagonal1[3] = {3, 3, 3};
    int navio_diagonal2[3] = {3, 3, 3};
    // Posições Iniciais
    // Vertical
    int navio_vertical_linha_inicial = 2;
    int navio_vertical_coluna_inicial = 1;
    // Horizontal
    int navio_horizontal_coluna_inicial = 2;
    int navio_horizontal_linha_inicial = 1;
    // Diagonal1
    int navio_diagonal1_linha_inicial = 4;
    int navio_diagonal1_coluna_inicial = 4;
    // Diagonal2
    int navio_diagonal2_linha_inicial = 6;
    int navio_diagonal2_coluna_inicial = 3;

    // Inicializando o tabuleiro com 0s (água)
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    // Posição Navio Vertical
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[navio_vertical_linha_inicial + i][navio_vertical_coluna_inicial] = navio_vertical1[i];
    };
    // Posição Navio Horizontal
    for (int j = 0; j < 3; j++)
    {
        tabuleiro[navio_horizontal_linha_inicial][navio_horizontal_coluna_inicial + j] = navio_horizontal2[j];
    };
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
    // Posição Navio Diagonal 1
    for (int i = 0; i < 3; i++)
    {
        if (navio_diagonal1_linha_inicial == navio_diagonal1_coluna_inicial)
        {
            tabuleiro[navio_diagonal1_linha_inicial + i][navio_diagonal1_coluna_inicial + i] = navio_diagonal1[i];
            ;
        }
    }
    // Posição Navio Diagonal 2
    for (int i = 0; i < 3; i++)
    {
        if (navio_diagonal2_linha_inicial + navio_diagonal2_coluna_inicial == 9)
        {
            tabuleiro[navio_diagonal2_linha_inicial + i][navio_diagonal2_coluna_inicial - i] = navio_diagonal2[i];
        }
    }

    // Exibindo tabuleiro
    printf(" TABULEIRO BATALHA NAVAL \n");
    printf("  ");

    // Imprimindo colunas
    for (int h = 0; h < 10; h++)
    {
        printf(" %c", colunas[h]);
    }
    printf("\n");

    // Exibindo linhas e conteúdo do tabuleiro
    for (int i = 0; i < 10; i++)
    {
        printf("%2d ", i + 1); // Imprime o número das linhas (1 a 10)

        // Imprime conteúdo do tabuleiro
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

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

    return 0;
}
