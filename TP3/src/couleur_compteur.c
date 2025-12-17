#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define TAILLE_TABLEAU 100
#define MAX_COULEURS_DISTINCTES TAILLE_TABLEAU

// Structure pour représenter une couleur (R, G, B, A)
typedef struct {
    unsigned char r; // Rouge
    unsigned char g; // Vert
    unsigned char b; // Bleu
    unsigned char a; // Alpha
} Couleur;

// Structure pour stocker une couleur distincte et son compteur
typedef struct {
    Couleur couleur;
    int count;
} CompteurCouleur;

// Fonction pour comparer deux couleurs
bool comparer_couleurs(Couleur c1, Couleur c2) {
    return (c1.r == c2.r && c1.g == c2.g && c1.b == c2.b && c1.a == c2.a);
}

// Fonction pour générer une couleur aléatoire
Couleur generer_couleur_aleatoire() {
    Couleur c;
    // Génère des valeurs aléatoires entre 0 et 255 pour chaque composante
    c.r = rand() % 256;
    c.g = rand() % 256;
    c.b = rand() % 256;
    c.a = rand() % 256;
    return c;
}

// Fonction pour afficher une couleur au format hexadécimal
void afficher_couleur(Couleur c) {
    // Utilisation de %02x pour afficher l'octet en hexadécimal avec deux chiffres
    printf("%02x %02x %02x %02x", c.a, c.r, c.g, c.b);
}

int main() {
    Couleur tableau_couleurs[TAILLE_TABLEAU];
    CompteurCouleur couleurs_distinctes[MAX_COULEURS_DISTINCTES];
    int nb_couleurs_distinctes = 0;
    int i, j;

    // 1. Initialiser le générateur de nombres aléatoires
    srand(time(NULL));

    // 2. Remplir le tableau avec des couleurs aléatoires
    for (i = 0; i < TAILLE_TABLEAU; i++) {
        tableau_couleurs[i] = generer_couleur_aleatoire();
    }

    // 3. Compter les couleurs distinctes
    for (i = 0; i < TAILLE_TABLEAU; i++) {
        Couleur couleur_courante = tableau_couleurs[i];
        bool trouve = false;

        // Parcourir le tableau des couleurs distinctes déjà trouvées
        for (j = 0; j < nb_couleurs_distinctes; j++) {
            if (comparer_couleurs(couleur_courante, couleurs_distinctes[j].couleur)) {
                // La couleur existe déjà, incrémenter le compteur
                couleurs_distinctes[j].count++;
                trouve = true;
                break;
            }
        }

        // Si la couleur n'a pas été trouvée, l'ajouter comme nouvelle couleur distincte
        if (!trouve) {
            if (nb_couleurs_distinctes < MAX_COULEURS_DISTINCTES) {
                couleurs_distinctes[nb_couleurs_distinctes].couleur = couleur_courante;
                couleurs_distinctes[nb_couleurs_distinctes].count = 1;
                nb_couleurs_distinctes++;
            } else {
                // Ce cas ne devrait pas arriver si MAX_COULEURS_DISTINCTES est TAILLE_TABLEAU
                fprintf(stderr, "Erreur: Dépassement de la capacité des couleurs distinctes.\n");
            }
        }
    }

    // 4. Afficher les résultats
    printf("Analyse des %d couleurs :\n", TAILLE_TABLEAU);
    printf("Nombre de couleurs distinctes trouvées : %d\n\n", nb_couleurs_distinctes);

    for (i = 0; i < nb_couleurs_distinctes; i++) {
        afficher_couleur(couleurs_distinctes[i].couleur);
        printf(" : %d\n", couleurs_distinctes[i].count);
    }

    return 0;
}
