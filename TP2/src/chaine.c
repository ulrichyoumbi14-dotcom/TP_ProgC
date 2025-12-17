#include <stdio.h>

int main(void)
{
    char chaine1[100];
    char chaine2[100];
    char copie[100];
    char concat[200];

    int i, j;
    int longueur = 0;

    /* Lecture des chaînes */
    printf("Entrez la premiere chaine : ");
    fgets(chaine1, 100, stdin);

    printf("Entrez la deuxieme chaine : ");
    fgets(chaine2, 100, stdin);

    /* Suppression du '\n' de fgets pour chaine1 */
    i = 0;
    while (chaine1[i] != '\0')
    {
        if (chaine1[i] == '\n')
        {
            chaine1[i] = '\0';
            break;
        }
        i++;
    }

    /* Suppression du '\n' de fgets pour chaine2 */
    i = 0;
    while (chaine2[i] != '\0')
    {
        if (chaine2[i] == '\n')
        {
            chaine2[i] = '\0';
            break;
        }
        i++;
    }

    /* 1️⃣ Calcul de la longueur de chaine1 */
    i = 0;
    while (chaine1[i] != '\0')
    {
        longueur++;
        i++;
    }

    printf("Longueur de la premiere chaine : %d\n", longueur);

    /* 2️⃣ Copie de chaine1 dans copie */
    i = 0;
    while (chaine1[i] != '\0')
    {
        copie[i] = chaine1[i];
        i++;
    }
    copie[i] = '\0';

    printf("Copie de la premiere chaine : %s\n", copie);

    /* 3️⃣ Concaténation */
    i = 0;
    while (chaine1[i] != '\0')
    {
        concat[i] = chaine1[i];
        i++;
    }

    j = 0;
    while (chaine2[j] != '\0')
    {
        concat[i] = chaine2[j];
        i++;
        j++;
    }
    concat[i] = '\0';

    printf("Chaine concatenee : %s\n", concat);

    return 0;
}
