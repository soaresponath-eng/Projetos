#include <stdio.h>

int main(){
    int matriz[3][3]; //Declaração da matriz 3x3

    //Inicializando os elementos da matriz
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;

    //Acessando os elementos da matriz
    printf("Elemento na posição [0][0]: %d\n", matriz[0][0]);
    printf("Elemento na posição [1][1]: %d\n", matriz[1][1]);
    printf("Elemento na posição [2][2]: %d\n", matriz[2][2]);








    return 0;
}