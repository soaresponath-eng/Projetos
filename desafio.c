#include <stdio.h>
#include <stdlib.h>

int main() {

    //Declaração de variáveis carta 1
    char estado1;                   // letra referente ao estado de A a H
    char codigo1[10];               // codigo da carta 3 caracteres
    char cidade1[50];               //nome da cidade com ate 20 caracteres
    unsigned long int populacao1;   // população da cidade
    float area1;                    // total da área da cidade em km²
    float pib1;                     // pib total da cidade
    int pontosturisticos1;          // número dos pontos turisticos da cidade
    float densidadepopulacional1;   // quantas pessoas vivem por quilômetro quadrado
    float pibPerCapita1;            //valor médio agregado por pessoa 
                
                                    
    //Especificadores da carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Informe o Codigo da Carta (ex: A01): ");
    scanf(" %s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", cidade1);

    printf("Informe a Populacao: ");
    scanf(" %lu", &populacao1);

    printf("Informe a Area (em km²): ");
    scanf(" %f", &area1);

    printf("Informe o PIB (em bilhoes de reais): ");
    scanf(" %f", &pib1);

     printf("Informe o Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosturisticos1);

    //calculo da densidade demografica e PIB per capita
    densidadepopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
    

    //Declaração de variáveis carta 2
    char estado2;                      // letra referente ao estado de A a H
    char codigo2[10];                  // codigo da carta 3 caracteres
    char cidade2[50];                  //nome da cidade com ate 20 caracteres
    unsigned long int populacao2;      // população da cidade
    float area2;                       // total da área da cidade em km²
    float pib2;                        // pib total da cidade
    int pontosturisticos2;             // número dos pontos turisticos da cidade
    float densidadepopulacional2;      // quantas pessoas vivem por quilômetro quadrado
    float pibpercapita2;               //valor médio agregado por pessoa 
    

    //Especificadores da carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Informe o Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", cidade2);
    
    printf("Informe a Populacao: ");
    scanf(" %lu", &populacao2);

    printf("Informe a Area (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos2);

    //calculo da densidade demografica e PIB per capita
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000.0) / populacao2;
   
    printf("\n===== Comparacao das Cartas =====\n");
   
    //Menu interativo de comparação
    int opcao;
    printf("***Escolha uma opcao de comparacao:\n***");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");  
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Opçao: ");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            if (populacao1 > populacao2) 
                printf("Carta 1 venceu com maior população!\n");
            else if (populacao2 > populacao1)
                printf("Carta 2 venceu com maior população!\n");
            else
                printf("Empate na população!\n");
            break;
        case 2:
            if (area1 > area2) 
                printf("Carta 1 venceu com maior area!\n");
            else if (area2 > area1)
                printf("Carta 2 venceu com maior area!\n");
            else
                printf("Empate na area!\n");
            break;
        case 3:
            if (pib1 > pib2) 
                printf("Carta 1 venceu com maior PIB!\n");
            else if (pib2 > pib1)
                printf("Carta 2 venceu com maior PIB!\n");
            else
                printf("Empate no PIB!\n");
            break;
        case 4:
            if (pontosturisticos1 > pontosturisticos2) 
                printf("Carta 1 venceu com maior número de pontos turísticos!\n");
            else if (pontosturisticos2 > pontosturisticos1)
                printf("Carta 2 venceu com maior número de pontos turísticos!\n");
            else
                printf("Empate no número de pontos turísticos!\n");
            break;
        case 5:
            if (densidadepopulacional1 < densidadepopulacional2) {
                if (densidadepopulacional1 < 100) {
                    printf("Carta 1 venceu com menor densidade populacional e é considerada de baixa densidade!\n");
                } else {
                    printf("Carta 1 venceu com menor densidade populacional!\n");
                }
            } else if (densidadepopulacional2 < densidadepopulacional1) {
                if (densidadepopulacional2 < 100) {
                    printf("Carta 2 venceu com menor densidade populacional e é considerada de baixa densidade!\n");
                } else {
                    printf("Carta 2 venceu com menor densidade populacional!\n");
                }
            } else {
                printf("Empate na densidade populacional!\n");
            }
            break;
        case 6:
            if (pibPerCapita1 > pibpercapita2 && pibPerCapita1 > 30000) {
                printf("Carta 1 venceu com maior PIB per capita!\n");
            } else if (pibpercapita2 > pibPerCapita1 || pibpercapita2 > 30000) {
                printf("Carta 2 venceu com maior PIB per capita!\n");
            } else {
                printf("Empate no PIB per capita!\n");
            }
            break;

        default:            printf("Opção inválida!\n");
            break;  
    }

    return 0; 
    
   
}
