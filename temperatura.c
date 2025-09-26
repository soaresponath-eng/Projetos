#include <stdio.h>

int main(){

    int temperatura = 31;
    int resultado;

    printf("Digite a temperatura em Celsius: ");
    scanf("%d", &temperatura);

    resultado = (temperatura > 30) ? 1 : 0;

    if (resultado) {
        printf("A temperatura está acima de 30 graus Celsius.\n");
    } else {
        printf("A temperatura está abaixo ou igual a 30 graus Celsius.\n");
    }

    return 0;
}