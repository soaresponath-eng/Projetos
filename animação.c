/* anim.c
   Animação de terminal portátil: spinner, barra de progresso e "cartão" deslizando.
   Compilar:
     gcc anim.c -o anim      (Linux/macOS)
     gcc anim.c -o anim.exe  (MinGW no Windows)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#ifdef _WIN32
  #include <windows.h>
#endif

/* pausa em milissegundos (portátil) */
void msleep(int ms) {
#ifdef _WIN32
    Sleep(ms);
#else
    struct timespec ts;
    ts.tv_sec = ms / 1000;
    ts.tv_nsec = (ms % 1000) * 1000000L;
    nanosleep(&ts, NULL);
#endif
}

/* Função que retorna (imprime) uma animação simples:
   - spinner (loading)
   - barra de progresso
   - uma "linha de cartão" que desliza da esquerda para a direita
*/
int main(void) {
    const char spinner[] = "|/-\\";
    int i;

    /* 1) Spinner */
    printf("Carregando cartas...");
    fflush(stdout);
    for (i = 0; i < 40; ++i) {
        printf("\rCarregando cartas... %c", spinner[i % 4]);
        fflush(stdout);
        msleep(80);
    }
    printf("\rCarregando cartas...   \n"); /* limpa o spinner */
    msleep(150);

    /* 2) Barra de progresso */
    const int barWidth = 40;
    for (i = 0; i <= barWidth; ++i) {
        int j;
        printf("\r[");
        for (j = 0; j < i; ++j) putchar('=');
        for (j = i; j < barWidth; ++j) putchar(' ');
        printf("] %3d%%", (i * 100) / barWidth);
        fflush(stdout);
        msleep(35);
    }
    printf("\n\n");
    msleep(200);

    /* 3) "Cartão" - linha única que desliza para a direita (fácil de integrar ao seu código) */
    char cardline[200];
    /* Exemplo: você pode montar essa string com os dados reais das suas cartas */
    snprintf(cardline, sizeof(cardline),
             "[CARTA: %s | Estado: %c | Pop: %lu | PIB: %.2fG | Pontos: %d]",
             "A01", 'A', (unsigned long)1234567, 12.34f, 5);

    const int maxPos = 60; /* quanto "ande" na tela */
    for (i = 0; i <= maxPos; ++i) {
        int s;
        printf("\r");                 /* voltar ao começo da linha */
        for (s = 0; s < i; ++s) putchar(' '); /* imprime espaços (deslocamento) */
        printf("%s", cardline);
        fflush(stdout);
        msleep(30);
    }

    printf("\n\nAnimação finalizada!\n");
    return 0;
}
