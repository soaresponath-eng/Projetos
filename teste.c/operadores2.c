#include <stdio.h>

int main() {

    int a = 5;
    int b = -10;
    int c = 1;

    // a > 0 => verdadeiro
    // b < 0 => verdadeiro
    // Verdadeiro && verdadeiro => Verdadeiro
    // Verdadeiro || c == 0
    // Verdadeiro || Falso => Verdadeiro 

    if (a > 0 && b < 0 || c == 0){
        printf("Condição verdadeira\n");
    } else {
        printf("Condição falsa\n");
        

    }





}