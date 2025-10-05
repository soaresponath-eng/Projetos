#include <stdio.h>

int main() {
    char *nomes[3] = {"Alice", "Bob", "Carol"}; //Array com nomes de 3 pessoas

    int i;
    for (i = 0; i < 3; i++) {
        printf("%s\n", nomes[i]);
    }

    return 0;
}