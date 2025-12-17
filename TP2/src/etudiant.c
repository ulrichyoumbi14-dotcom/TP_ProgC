#include <stdio.h>

#define N 5   // Nombre d'étudiant.e.s

int main(void)
{
    /* Tableaux pour les informations */
    char noms[N][30] = {
        "Dupont", "Martin", "Bernard", "Durand", "Moreau"
    };

    char prenoms[N][30] = {
        "Alice", "Lucas", "Emma", "Nicolas", "Sarah"
    };

    char adresses[N][100] = {
        "12 rue de Paris",
        "45 avenue Victor Hugo",
        "8 boulevard Saint-Michel",
        "23 rue des Lilas",
        "90 avenue de la Republique"
    };

    float note_c[N] = {14.5, 12.0, 16.0, 10.5, 15.0};
    float note_se[N] = {13.0, 11.5, 17.0, 9.0, 14.5};

    int i;

    /* Affichage des informations */
    for (i = 0; i < N; i++)
    {
        printf("Etudiant(e) %d\n", i + 1);
        printf("Nom     : %s\n", noms[i]);
        printf("Prenom  : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note C  : %.2f\n", note_c[i]);
        printf("Note SE : %.2f\n", note_se[i]);
        printf("-----------------------------\n");
    }

    return 0;
}
