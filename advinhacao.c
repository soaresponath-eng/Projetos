#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int opcao;
    int numeroSecreto, palpite;

    printf("Menu principal:\n");
    printf("1.Iniciar jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Iniciando jogo...\n");
            srand(time(0));
            numeroSecreto = rand() % 100 + 1;
            do {
                printf("Adivinhe o numero (1 a 100): ");
                scanf("%d", &palpite);
                if (palpite < numeroSecreto) {
                    printf("Muito baixo! Tente novamente.\n");
                } else if (palpite > numeroSecreto) {
                    printf("Muito alto! Tente novamente.\n");
                }
            } while (palpite != numeroSecreto);
            printf("Parabens! Você adivinhou o numero.\n");
            break;
        case 2:
            printf("As regras são.....\n");
            break;
        case 3:
            printf("Saindo do jogo...\n");
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;


}