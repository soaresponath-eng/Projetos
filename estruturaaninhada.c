#include <stdio.h>

int main() {
    int idade;
    float renda;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua renda mensal: ");
    scanf("%f", &renda);

    if (idade <= 18 || idade >= 60) 
    {
        if (renda < 2000)
        {
          printf("Voce tem direito ao desconto\n");
    } else {
          printf("Voce nao tem direito ao desconto devido a renda!\n");
    }
} else {
        printf("Voce não atende aos criterios devido a idade!\n");
    }

   
}





