#include <stdio.h>

int main() {
    // Déclaration et initialisation des variables
    int a = 2; // Base
    int b = 3; // Exposant
    
    // Utilisation de long long pour le résultat afin de prévenir un débordement (overflow)
    // pour des puissances potentiellement grandes.
    long long resultat = 1; 
    
    printf("Calcul de la puissance : %d élevé à la puissance %d\n", a, b);
    printf("------------------------------------------------------\n");

    // Cas spécial : b = 0. Toute base à la puissance 0 est 1.
    if (b == 0) {
        resultat = 1;
    } 
    // Cas spécial : b < 0. Le programme ne gère pas les exposants négatifs pour des entiers.
    else if (b < 0) {
        printf("Erreur : Le programme ne gère pas les exposants négatifs pour les entiers.\n");
        return 1; // Retourne un code d'erreur
    }
    // Cas général : b > 0
    else {
        // Boucle for pour multiplier 'a' par lui-même 'b' fois
        for (int i = 0; i < b; i++) {
            resultat *= a; // Équivalent à resultat = resultat * a;
        }
    }

    // Affichage du résultat
    printf("Le résultat de %d^%d est : %lld\n", a, b, resultat);

    // Test avec d'autres valeurs (par exemple, 5^4 = 625)
    a = 5;
    b = 4;
    resultat = 1;
    for (int i = 0; i < b; i++) {
        resultat *= a;
    }
    printf("\nTest : Le résultat de %d^%d est : %lld\n", a, b, resultat);

    return 0;
}
