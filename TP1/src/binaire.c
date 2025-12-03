#include <stdio.h>
#include <limits.h> // Pour CHAR_BIT

// Fonction pour afficher la représentation binaire d'un entier
void print_binary(int n) {
    // Détermine le nombre de bits dans un int (généralement 32)
    const int num_bits = sizeof(int) * CHAR_BIT;
    int i;

    printf("Valeur décimale : %d\n", n);
    printf("Représentation binaire : ");

    // Boucle for pour parcourir tous les bits, du plus significatif au moins significatif
    for (i = num_bits - 1; i >= 0; i--) {
        // Utilise l'opérateur de décalage à droite (>>) et l'opérateur ET binaire (&)
        // pour vérifier si le bit à la position i est un 1 ou un 0.
        // (n >> i) décale le bit à la position i vers la position 0 (bit de poids faible).
        // & 1 isole ce bit.
        int bit = (n >> i) & 1;
        printf("%d", bit);

        // Ajoute un espace pour la lisibilité (tous les 8 bits)
        if (i % 8 == 0 && i != 0) {
            printf(" ");
        }
    }
    printf("\n\n");
}

int main() {
    // Les nombres à tester
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    printf("Affichage des nombres entiers en format binaire (taille int = %zu bits) :\n", sizeof(int) * CHAR_BIT);
    printf("----------------------------------------------------------------------\n");

    // Boucle pour tester chaque nombre
    for (int i = 0; i < taille; i++) {
        print_binary(nombres[i]);
    }

    return 0;
}
