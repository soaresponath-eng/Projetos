#include <stdio.h>

//Função recursiva para imprimir números de n até 1
void recursiveLoop(int n) {
    if (n > 0) {
        printf("%d\n ", n); //Imprime o valor atual de n
        recursiveLoop (n - 1); //Imprime a si mesma com n - 1
        }
}

int main(){
    int numero = 10;
    printf("Contagem regressiva...\n ");
    recursiveLoop (numero);
    return 0;
}