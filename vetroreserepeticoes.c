#include <stdio.h>

int main() {

char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
int tabuleiro[10][10];
int i, j;

// Inicialização do tabuleiro com 0
for(i = 0; i < 10; i++) {
   for(j = 0; j < 10; j++) {
   tabuleiro[i][j] = 0;
    }
   }

// Definição dos navios (tamanho 3)
int navio_horizontal[3] = {3, 3, 3};
int navio_vertical[3] = {3, 3, 3};

// Coordenadas iniciais dos navios
int linha_h = 2; // linha do navio horizontal
int coluna_h = 4; // coluna inicial do navio horizontal

int linha_v = 5; // linha inicial do navio vertical
int coluna_v = 7; // coluna do navio vertical
// Posicição do navio horizontal no tabuleiro
 for(i = 0; i < 3; i++) {
   tabuleiro[linha_h][coluna_h + i] = navio_horizontal[i];
}

// Posicição do navio vertical no tabuleiro
 for(i = 0; i < 3; i++) {
 tabuleiro[linha_v + i][coluna_v] = navio_vertical[i];
}

// Imprimir números das colunas no topo
  printf("  "); // Espaço para alinhar com as letras das linhas
for(j = 0; j < 10; j++) {
   printf("%2d ", j+1);
}
printf("\n");

// Exibe o tabuleiro com letras e números
 for(i = 0; i < 10; i++) {
 printf("%c ", linha[i]);
  for(j = 0; j < 10; j++) {
   printf("%2d ", tabuleiro[i][j]);
}
printf("\n");
}
   return 0;
}