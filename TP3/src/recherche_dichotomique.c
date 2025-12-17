#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define TAILLE_TABLEAU 100
#define VALEUR_MAX 500
#define VALEUR_MIN 1

// Fonction de comparaison pour qsort
int comparer_entiers(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// Fonction pour afficher le tableau
void afficher_tableau(int tableau[], int taille, const char *titre) {
    printf("\n%s :\n", titre);
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
}

// Fonction de recherche dichotomique (Binary Search)
bool recherche_dichotomique(int tableau[], int taille, int cible) {
    int debut = 0;
    int fin = taille - 1;
    int milieu;

    while (debut <= fin) {
        milieu = debut + (fin - debut) / 2;

        // Vérifier si la cible est présente au milieu
        if (tableau[milieu] == cible) {
            return true;
        }

        // Si la cible est plus grande, ignorer la moitié gauche
        if (tableau[milieu] < cible) {
            debut = milieu + 1;
        }
        // Si la cible est plus petite, ignorer la moitié droite
        else {
            fin = milieu - 1;
        }
    }

    // Si nous arrivons ici, l'élément n'était pas présent
    return false;
}

int main() {
    int tableau[TAILLE_TABLEAU];
    int i;
    int entier_a_chercher;
    bool est_present;

    // 1. Initialiser le générateur de nombres aléatoires
    srand(time(NULL));

    // 2. Remplir le tableau avec des valeurs aléatoires
    for (i = 0; i < TAILLE_TABLEAU; i++) {
        // Génère un nombre entre VALEUR_MIN et VALEUR_MAX
        tableau[i] = (rand() % (VALEUR_MAX - VALEUR_MIN + 1)) + VALEUR_MIN;
    }

    // 3. Trier le tableau
    qsort(tableau, TAILLE_TABLEAU, sizeof(int), comparer_entiers);

    // 4. Afficher le tableau trié
    afficher_tableau(tableau, TAILLE_TABLEAU, "Tableau trié");

    // 5. Demander à l'utilisateur l'entier à chercher
    printf("\nEntrez l'entier que vous souhaitez chercher (entre %d et %d) : ", VALEUR_MIN, VALEUR_MAX);
    
    if (scanf("%d", &entier_a_chercher) != 1) {
        fprintf(stderr, "Erreur de saisie.\n");
        return 1;
    }

    // 6. Effectuer la recherche dichotomique
    est_present = recherche_dichotomique(tableau, TAILLE_TABLEAU, entier_a_chercher);

    // 7. Afficher le résultat
    printf("\nRésultat : ");
    if (est_present) {
        printf("entier présent\n");
    } else {
        printf("entier absent\n");
    }

    return 0;
}
