#include <stdio.h>

int main() {

    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro[10][10]; 
    int i, j;

    // Inicialização do tabuleiro com 0 = água
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Definição dos navios (tamanho 3)
    int navio_horizontal[3] = {3, 3, 3};
    int navio_vertical[3] = {3, 3, 3};
    int navio_diagonal1[3] = {3, 3, 3};
    int navio_diagonal2[3] = {3, 3, 3};

    // Coordenadas iniciais ajustadas para não ultrapassar limites
    int linha_h = 2, coluna_h = 4; //navio horizontal
    int linha_v = 5, coluna_v = 7; //navio vertical
    int linha_d1 = 0, coluna_d1 = 0; //navio diagonal principal
    int linha_d2 = 0, coluna_d2 = 9; //navio diagonal secundário
    
    //Posicionamento dos navios
   
   // Navio horizontal 
    for(i = 0; i < 3; i++) {
        if(coluna_h + i < 10 && tabuleiro[linha_h][coluna_h + i] == 0)
        tabuleiro[linha_h][coluna_h + i] = navio_horizontal[i];
    }

    // Navio vertical
    for(i = 0; i < 3; i++) {
        if(linha_v + i < 10 && tabuleiro[linha_v + i][coluna_v] == 0)
            tabuleiro[linha_v + i][coluna_v] = navio_vertical[i];
    }

    //Navio diagonal principal
    for(i = 0; i < 3; i++) {
        if(linha_d1 + i < 10 && coluna_d1 + i < 10 && tabuleiro[linha_d1 + i][coluna_d1 + i] == 0) 
        tabuleiro[linha_d1 + i][coluna_d1 + i] = navio_diagonal1[i];
    }
 
   //Navio diagonal secundário
    for(i = 0; i < 3; i++) {
        if(linha_d2 + i < 10 && coluna_d2 - i >= 0 && tabuleiro[linha_d2 + i][coluna_d2 - i] == 0) 
        tabuleiro[linha_d2 + i][coluna_d2 - i] = navio_diagonal2[i];
    }

    // Imprimir tabuleiro

    printf("  ");
    for(j = 0; j < 10; j++) {
        printf("%2d ", j+1);
    }
    printf("\n");

        for(i = 0; i < 10; i++) {
            printf("%c ", linha[i]);
            for(j = 0; j < 10; j++){
                printf("%2d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
      
    return 0;
}
