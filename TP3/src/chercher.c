#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define TAILLE_TABLEAU 100
#define VALEUR_MAX 100
#define VALEUR_MIN 1

// Fonction pour afficher le tableau
void afficher_tableau(int tableau[], int taille) {
    printf("Tableau :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
}

// Fonction de recherche linéaire
bool rechercher_entier(int tableau[], int taille, int cible) {
    for (int i = 0; i < taille; i++) {
        if (tableau[i] == cible) {
            return true; // Entier trouvé
        }
    }
    return false; // Entier non trouvé
}

int main() {
    int tableau[TAILLE_TABLEAU];
    int i;
    int entier_a_chercher;
    bool est_present;

    // 1. Initialiser le générateur de nombres aléatoires
    srand(time(NULL));

    // 2. Remplir le tableau avec des valeurs aléatoires entre VALEUR_MIN et VALEUR_MAX
    for (i = 0; i < TAILLE_TABLEAU; i++) {
        // Génère un nombre entre VALEUR_MIN et VALEUR_MAX
        tableau[i] = (rand() % (VALEUR_MAX - VALEUR_MIN + 1)) + VALEUR_MIN;
    }

    // 3. Afficher le tableau
    afficher_tableau(tableau, TAILLE_TABLEAU);

    // 4. Demander à l'utilisateur l'entier à chercher
    printf("\nEntrez l'entier que vous souhaitez chercher (entre %d et %d) : ", VALEUR_MIN, VALEUR_MAX);
    if (scanf("%d", &entier_a_chercher) != 1) {
        fprintf(stderr, "Erreur de saisie.\n");
        return 1;
    }

    // 5. Effectuer la recherche
    est_present = rechercher_entier(tableau, TAILLE_TABLEAU, entier_a_chercher);

    // 6. Afficher le résultat
    printf("\nRésultat : ");
    if (est_present) {
        printf("entier présent\n");
    } else {
        printf("entier absent\n");
    }

    return 0;
}
