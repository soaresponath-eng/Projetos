# include <stdio.h>

int main() {
    int idade = 20;
    float altura = 1.75;

    //idade >= 18 => Verdadeira 
    //idade <= 3 => Verdadeira
    //Verdadeira && Verdadeira 
    //Verdadeiro && altura > 1.70
    //Verdadeiro && Verdadeiro => Verdadeiro

    if(idade >= 18 && idade <= 30 && altura > 1.70) {
        printf("Voce esta na faixa etaria e tem a altura adequada.\n");
    } else {
        printf("Voce nao atende aos criterios");



    }






    
}