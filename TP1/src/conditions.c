#include <stdio.h>

int main() {
    // Utilisation de long int pour la somme pour être sûr, bien que int suffise pour 5000
    long int somme = 0;
    const int limite_somme = 5000;
    int i;

    printf("Début du calcul de la somme des nombres de 1 à 1000...\n");
    printf("Règles : Divisible par 5 ou 7 (sauf si divisible par 11). Arrêt si somme > %d.\n", limite_somme);
    printf("--------------------------------------------------------------------------\n");

    for (i = 1; i <= 1000; i++) {
        // 1. Si la somme dépasse 5000, arrêtez immédiatement la boucle (break).
        // Cette vérification est faite au début de la boucle pour s'assurer que la condition
        // est vérifiée avant d'ajouter le nombre courant.
        if (somme > limite_somme) {
            printf("\n--- Condition d'arrêt (break) atteinte ---\n");
            printf("Somme actuelle (%ld) a dépassé la limite de %d au nombre i = %d.\n", somme, limite_somme, i);
            break;
        }

        // 2. Si le nombre est divisible par 11, ne l'ajoutez pas et passez au nombre suivant (continue).
        if (i % 11 == 0) {
            continue;
        }

        // 3. Si le nombre est divisible par 5 ou par 7, ajoutez-le à la somme.
        if (i % 5 == 0 || i % 7 == 0) {
            somme += i;
        }
    }

    // Afficher la somme finale
    printf("--------------------------------------------------------------------------\n");
    printf("Somme finale : %ld\n", somme);

    return 0;
}
