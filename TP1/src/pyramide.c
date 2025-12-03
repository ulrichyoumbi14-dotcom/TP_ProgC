#include <stdio.h>

int main() {
    // Déclaration et initialisation de la hauteur de la pyramide
    int n = 5;
    int i, j;

    printf("Génération d'une pyramide de nombres de hauteur %d :\n\n", n);

    // Boucle principale pour les niveaux (lignes) de la pyramide
    for (i = 1; i <= n; i++) {
        // 1. Boucle pour afficher les espaces (centrage)
        // Affiche n - i espaces. Pour n=5 et i=1, 4 espaces. Pour n=5 et i=5, 0 espace.
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // 2. Boucle pour afficher les nombres croissants (de 1 à i)
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // 3. Boucle pour afficher les nombres décroissants (de i-1 à 1)
        // Commence à i-1 pour éviter de répéter le nombre central (i)
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // 4. Nouvelle ligne
        printf("\n");
    }

    printf("\nGénération de la pyramide terminée.\n");

    return 0;
}
