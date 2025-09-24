#include <stdio.h>

int main() {

    int dia;

    printf("Entre o valor do dia\n");
    scanf("%d", &dia);
    
    switch (dia) {
        case 1:
            printf("Domingo: Voce tem reuniao no clube Desbravadores\n");
            break;
        case 2:
            printf("Segunda-feira: Voce trabalha hoje, muitoooo\n");
            break;
        case 3:
            printf("Terça-feira: Voce trabalha hoje, muitoooo\n");
            break;
        case 4:
            printf("Quarta-feira: Voce trabalha hoje, muitoooo\n");
            break;
        case 5:
            printf("Quinta-feira: Voce trabalha hoje, muitoooo\n");
            break;
        case 6:
            printf("Sexta-feira: Voce trabalha hoje, muitoooo\n");
            break;
        case 7:
            printf("Sábado: Voce e Adventista dia de descanso\n");
            break;
        default:
            printf("Dia inválido\n");
            break;
    }
    return 0;
}