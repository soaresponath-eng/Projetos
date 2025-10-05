#include <stdio.h>

int main(){

    float notas[4] = { 85.5, 90.0, 78.0, 95.5}; //Array com a nota de 3 alunos

    //Acessando e imprimindo elementos especificos do array
    printf("Nota do primeiro aluno: %.1f\n", notas[0]);
    printf("Nota do segundo aluno: %.1f\n", notas[1]);
    printf("Nota do terceiro aluno: %.1f\n", notas[2]);
    printf("Nota do quarto aluno: %.1f\n", notas[3]);


    return 0;
}