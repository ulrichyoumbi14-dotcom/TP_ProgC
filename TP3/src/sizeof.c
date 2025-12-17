#include <stdio.h>

int main(void)
{
    int i;
    int *pi;
    int **ppi;

    char c;
    char *pc;
    char **ppc;
    char ***pppc;

    float f;
    float *pf;
    float **ppf;
    float ***pppf;

    printf("La taille de int est : %zu octets\n", sizeof(i));
    printf("La taille de int* est : %zu octets\n", sizeof(pi));
    printf("La taille de int** est : %zu octets\n", sizeof(ppi));

    printf("La taille de char est : %zu octets\n", sizeof(c));
    printf("La taille de char* est : %zu octets\n", sizeof(pc));
    printf("La taille de char** est : %zu octets\n", sizeof(ppc));
    printf("La taille de char*** est : %zu octets\n", sizeof(pppc));

    printf("La taille de float est : %zu octets\n", sizeof(f));
    printf("La taille de float* est : %zu octets\n", sizeof(pf));
    printf("La taille de float** est : %zu octets\n", sizeof(ppf));
    printf("La taille de float*** est : %zu octets\n", sizeof(pppf));

    return 0;
}
