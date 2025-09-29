#include <stdio.h>

int main() {
    int opcao;
    float gasto, limite, total, preco;
    int tarefa;

    printf("==== MENU DA DONA DE CASA ====\n");
    printf("1. Calcular gasto mensal\n");
    printf("2. Verificar se esta dentro do orcamento\n");
    printf("3. Escolher tarefa do dia\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Digite o valor do supermercado: ");
            scanf("%f", &gasto);
            printf("Digite o valor da conta de luz: ");
            scanf("%f", &preco);
            total = gasto + preco;
            printf("O gasto parcial e: R$ %.2f\n", total);
            break;

        case 2:
            printf("Digite o total de gastos: ");
            scanf("%f", &total);
            printf("Digite o limite de orcamento: ");
            scanf("%f", &limite);

            // IF-ELSE para comparar
            if (total <= limite) {
                printf("Parabens! Voce esta dentro do orcamento!\n");
            } else {
                printf("Atencao! Voce ultrapassou o orcamento!\n");
            }
            break;

        case 3:
            printf("Escolha a tarefa:\n");
            printf("1. Lavar roupa\n");
            printf("2. Fazer almoco\n");
            printf("3. Limpar a casa\n");
            printf("4. Ir ao mercado\n");
            scanf("%d", &tarefa);

            // SWITCH para selecionar tarefa
            switch(tarefa) {
                case 1: printf("Tarefa escolhida: Lavar roupa\n"); break;
                case 2: printf("Tarefa escolhida: Fazer almoco\n"); break;
                case 3: printf("Tarefa escolhida: Limpar a casa\n"); break;
                case 4: printf("Tarefa escolhida: Ir ao mercado\n"); break;
                default: printf("Opcao invalida!\n"); break;
            }

            // IF simples para lembrar da água 💧
            if (tarefa == 1) {
                printf("Nao esqueca de economizar agua!\n");
            }
            break;

        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}
