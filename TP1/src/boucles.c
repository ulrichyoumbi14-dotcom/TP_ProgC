#include <stdio.h>

int main() {
    // La taille du triangle doit être strictement inférieure à 10
    int compteur = 5; 

    printf("Affichage d'un triangle rectangle de taille %d.\n", compteur);

    // ------------------------------------------------------------------
    // Version 1 : Utilisation de boucles for
    // ------------------------------------------------------------------
    printf("\n--- Version 1: Boucles for ---\n");
    for (int i = 1; i <= compteur; i++) {
        // Boucle interne pour afficher les étoiles
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Nouvelle ligne après chaque rangée
        printf("\n");
    }

    // ------------------------------------------------------------------
    // Version 2 : Utilisation de boucles while
    // ------------------------------------------------------------------
    printf("\n--- Version 2: Boucles while ---\n");
    int i = 1; // Compteur de rangées
    while (i <= compteur) {
        int j = 1; // Compteur de colonnes
        
        // Utilisation d'une boucle while imbriquée
        while (j <= i) {
            printf("*");
            j++;
        }
        
        printf("\n");
        i++;
    }

    return 0;
}
