#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int opcao, regras;
    int numeroSecreto, palpite;

    printf("Menu principal:\n");
    printf("1.Iniciar jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            srand(time(0));
            numeroSecreto = rand() % 10;
            printf("Digite um numero de 0 a 9\n");
            scanf("%d", &palpite);
            if (numeroSecreto == palpite)
            {
                printf("Você acertou!!!\n");
                printf("Número secreto %d\n", numeroSecreto);
            } else {
                printf("Você errou!!!");
                printf("Número secreto %d\n", numeroSecreto);
            }
            break;

        case 2:
            printf("A explicação das regras.\n");
             printf("Digite a opcao relacionada as regras do jogo.\n");
             scanf("%d", &regras);
             switch (regras)
             {
             case 1:
                printf("Primeira regra: ...\n");
                break;
             case 2:
                printf("Segunda regra: ...\n");
             default:
                break;
             }
            break;
        case 3:
            printf("Saindo do jogo!\n");
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}
