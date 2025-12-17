#include <stdio.h>
#include <string.h>

#define N 5

/* Définition de la structure */
struct Etudiant
{
    char nom[30];
    char prenom[30];
    char adresse[100];
    float note_c;
    float note_se;
};

int main(void)
{
    struct Etudiant etudiants[N];
    int i;

    /* Initialisation des données */
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20, Boulevard Niels Bohr, Lyon");
    etudiants[0].note_c = 16.5;
    etudiants[0].note_se = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22, Boulevard Niels Bohr, Lyon");
    etudiants[1].note_c = 14.0;
    etudiants[1].note_se = 14.1;

    strcpy(etudiants[2].nom, "Bernard");
    strcpy(etudiants[2].prenom, "Alice");
    strcpy(etudiants[2].adresse, "5 rue Victor Hugo, Paris");
    etudiants[2].note_c = 15.5;
    etudiants[2].note_se = 13.0;

    strcpy(etudiants[3].nom, "Durand");
    strcpy(etudiants[3].prenom, "Lucas");
    strcpy(etudiants[3].adresse, "10 avenue Jean Jaures, Marseille");
    etudiants[3].note_c = 11.0;
    etudiants[3].note_se = 12.5;

    strcpy(etudiants[4].nom, "Moreau");
    strcpy(etudiants[4].prenom, "Sarah");
    strcpy(etudiants[4].adresse, "18 rue Nationale, Lille");
    etudiants[4].note_c = 17.0;
    etudiants[4].note_se = 16.2;

    /* Affichage des données */
    for (i = 0; i < N; i++)
    {
        printf("Etudiant.e %d :\n", i + 1);
        printf("Nom     : %s\n", etudiants[i].nom);
        printf("Prenom  : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note C  : %.2f\n", etudiants[i].note_c);
        printf("Note SE : %.2f\n", etudiants[i].note_se);
        printf("-----------------------------\n");
    }

    return 0;
}
