#include <stdio.h>

int main(){

    //Declaração de variáveis
    
    //Variáveis que representam as peças de xadrez
    int torre = 5; //Torre vai se mover 5 casas para a direita
    int bispo = 5; //Bispo vai se mover 5 casas na diagonal
    int rainha = 8; //Rainha vai se mover 8 casas para esquerda

    //Movimento do cavalo em L
    int cavalobaixo = 2;       // Cavalo 2 casas abaixo
    int cavalodireita = 1;     // Cavalo 1 casa à direita

    int i, j; //Variável de controle dos loops

    //Movimento da Torre
    //A torre se move em linha reta horizontalmente ou verticalmente
    //Usar loop for porque se sabe exatamente quantas casas percorrer
    printf("Movimento da torre:\n");

    for(i = 1; i <= torre; i++){
        //A cada interação a torre vai se mover uma casa para a direita
        printf("Direita\n");
    }
    printf("\n"); //Separar as seções

     //Movimento do bispo
     //O bispo se move na diagonal: vertical e horizontal
     //Usar loop while para demosntrar a repetição
     printf("Movimento do bispo:\n");
     i = 1; // Inicializar contador
     while(i <= bispo){
    // Cada interação representa uma casa percorrida na diagonal
    printf("Cima, direita\n");
    i++; //Incrementar contador
     }
    printf("\n"); //Separar as seções

    //Movimento da rainha
    //A rainha se movo em todas as direçoes
    //Usar loop do-while para garantir que o movimento acontea pelo menos uma vez
    printf("Movimento da rainha:\n");
    i = 1; // Inicializar contador
    do {
        // Cada interação representa uma casa percorrida pela rainha
        printf("Esquerda\n");
        i++; //Incrementar contador
    } while(i <= rainha); //Condição de repetição

    printf("\n");

    //Movimento do cavalo 
    //O cavalo se move abaixo e a direita
    //Movimento do cavalo usando "for" e "while aninhados"
    printf("Movimento do cavalo:\n");

    //Mover duas casas abaixo
    for(i = 1; i <= cavalobaixo; i++){             //Loop externo
         j = 1;
         while(j <= 1){                           //Loop interno
            printf("Baixo\n");
            j++;
         }
        }
         //Mover uma casa à direita
         for(i = 1; i <= cavalodireita; i++){     //Loop externo
         j = 1;
         while(j <= 1){                           //Loop interno
            printf("Direita\n");
            j++;
         }
        }

    }



