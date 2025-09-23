#include <stdio.h>

int main() {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    // Criança: idade < 12
    // Adolescente: 12 <= idade < 18
    // Adulto: 18 <= idade < 60
    // Idoso: idade >= 60

    if (idade < 12) {
        printf("Você é uma criança!\n");
    } else if (idade >= 12 && idade < 18) {
        printf("Você é um adolescente!\n");
    } else if (idade >= 18 && idade < 60) {
        printf("Você é um adulto!\n");
    } else {
        printf("Você é um idoso!\n");
    }

    return 0;
}