#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE_TABLEAU 100
#define VALEUR_MAX 1000
#define VALEUR_MIN -1000 // Utilisation d'une plage plus large pour des exemples variés

// Fonction pour afficher le tableau
void afficher_tableau(int tableau[], int taille, const char *titre) {
    printf("\n%s :\n", titre);
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
}

// Fonction de tri à bulles (Bubble Sort)
void tri_a_bulles(int tableau[], int taille) {
    int i, j, temp;
    for (i = 0; i < taille - 1; i++) {
        // Le dernier i éléments sont déjà en place
        for (j = 0; j < taille - i - 1; j++) {
            // Comparer les éléments adjacents
            if (tableau[j] > tableau[j + 1]) {
                // Échanger tableau[j] et tableau[j+1]
                temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }
}

int main() {
    int tableau[TAILLE_TABLEAU];
    int i;

    // 1. Initialiser le générateur de nombres aléatoires
    srand(time(NULL));

    // 2. Remplir le tableau avec des valeurs aléatoires
    for (i = 0; i < TAILLE_TABLEAU; i++) {
        // Génère un nombre entre VALEUR_MIN et VALEUR_MAX
        tableau[i] = (rand() % (VALEUR_MAX - VALEUR_MIN + 1)) + VALEUR_MIN;
    }

    // 3. Afficher le tableau non trié
    afficher_tableau(tableau, TAILLE_TABLEAU, "Tableau non trié");

    // 4. Trier le tableau
    tri_a_bulles(tableau, TAILLE_TABLEAU);

    // 5. Afficher le tableau trié
    afficher_tableau(tableau, TAILLE_TABLEAU, "Tableau trié par ordre croissant");

    return 0;
}
