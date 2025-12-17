#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE_TABLEAU 100
#define VALEUR_MAX 1000
#define VALEUR_MIN 1

int main() {
    int tableau[TAILLE_TABLEAU];
    int i;
    int plus_grand;
    int plus_petit;

    // 1. Initialiser le générateur de nombres aléatoires
    srand(time(NULL));

    // 2. Remplir le tableau avec des valeurs aléatoires entre 1 et 1000
    printf("Remplissage du tableau avec %d nombres aléatoires entre %d et %d...\n", TAILLE_TABLEAU, VALEUR_MIN, VALEUR_MAX);
    for (i = 0; i < TAILLE_TABLEAU; i++) {
        // Génère un nombre entre 1 et 1000
        tableau[i] = (rand() % VALEUR_MAX) + VALEUR_MIN;
    }

    // 3. Initialiser plus_grand et plus_petit avec le premier élément du tableau
    plus_grand = tableau[0];
    plus_petit = tableau[0];

    // 4. Parcourir le tableau pour trouver le plus grand et le plus petit
    for (i = 1; i < TAILLE_TABLEAU; i++) {
        if (tableau[i] > plus_grand) {
            plus_grand = tableau[i];
        }
        if (tableau[i] < plus_petit) {
            plus_petit = tableau[i];
        }
    }

    // (Optionnel) Afficher quelques éléments du tableau pour vérification
    printf("Premiers éléments du tableau généré : [");
    for (i = 0; i < 10; i++) {
        printf("%d%s", tableau[i], (i < 9) ? ", " : "");
    }
    printf(", ...]\n");

    // 5. Afficher les résultats
    printf("\nLe numéro le plus grand est : %d\n", plus_grand);
    printf("Le numéro le plus petit est : %d\n", plus_petit);

    return 0;
}
