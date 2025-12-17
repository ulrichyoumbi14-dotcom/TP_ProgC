#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 11

int main(void)
{
    int tab_int[TAILLE];
    float tab_float[TAILLE];

    int *p_int;
    float *p_float;
    int i;

    /* Initialisation du générateur aléatoire */
    srand(time(NULL));

    /* Remplissage des tableaux */
    p_int = tab_int;
    p_float = tab_float;

    for (i = 0; i < TAILLE; i++)
    {
        *(p_int + i) = rand() % 100;
        *(p_float + i) = (float)(rand() % 1000) / 100;
    }

    /* Affichage avant modification */
    printf("Tableau d'entiers (avant la multiplication par 3) :\n");
    for (i = 0; i < TAILLE; i++)
        printf("%d ", *(p_int + i));

    printf("\n\nTableau de flottants (avant la multiplication par 3) :\n");
    for (i = 0; i < TAILLE; i++)
        printf("%.2f ", *(p_float + i));

    /* Multiplication par 3 des indices divisibles par 2 */
    for (i = 0; i < TAILLE; i++)
    {
        if (i % 2 == 0)
        {
            *(p_int + i) *= 3;
            *(p_float + i) *= 3;
        }
    }

    /* Affichage après modification */
    printf("\n\nTableau d'entiers (apres la multiplication par 3) :\n");
    for (i = 0; i < TAILLE; i++)
        printf("%d ", *(p_int + i));

    printf("\n\nTableau de flottants (apres la multiplication par 3) :\n");
    for (i = 0; i < TAILLE; i++)
        printf("%.2f ", *(p_float + i));

    printf("\n");

    return 0;
}
