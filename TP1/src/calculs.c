#include <stdio.h>

// Fonction pour effectuer et afficher une opération
void effectuer_operation(int num1, int num2, char op) {
    int resultat;

    printf("Opération : %d %c %d\n", num1, op, num2);
    
    switch (op) {
        case '+':
            resultat = num1 + num2;
            printf("Résultat (Addition) : %d\n", resultat);
            break;
        case '-':
            resultat = num1 - num2;
            printf("Résultat (Soustraction) : %d\n", resultat);
            break;
        case '*':
            resultat = num1 * num2;
            printf("Résultat (Multiplication) : %d\n", resultat);
            break;
        case '/':
            if (num2 != 0) {
                resultat = num1 / num2;
                printf("Résultat (Division entière) : %d\n", resultat);
            } else {
                printf("Erreur : Division par zéro !\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                resultat = num1 % num2;
                printf("Résultat (Modulo) : %d\n", resultat);
            } else {
                printf("Erreur : Modulo par zéro !\n");
            }
            break;
        case '&':
            resultat = num1 & num2;
            printf("Résultat (ET binaire) : %d\n", resultat);
            break;
        case '|':
            resultat = num1 | num2;
            printf("Résultat (OU binaire) : %d\n", resultat);
            break;
        case '~':
            // L'opérateur ~ est unaire, il n'a besoin que de num1
            resultat = ~num1;
            printf("Résultat (NON binaire de %d) : %d\n", num1, resultat);
            break;
        default:
            printf("Erreur : Opérateur '%c' non reconnu.\n", op);
            break;
    }
    printf("----------------------------------------\n");
}

int main() {
    printf("Démonstration de l'opérateur switch pour les opérations mathématiques et binaires.\n");
    printf("----------------------------------------\n");

    // Test des opérations arithmétiques
    effectuer_operation(10, 5, '+');
    effectuer_operation(10, 5, '-');
    effectuer_operation(10, 5, '*');
    effectuer_operation(10, 5, '/');
    effectuer_operation(10, 3, '%'); // Test du modulo

    // Test des opérations binaires
    // 5 en binaire = 0101
    // 3 en binaire = 0011
    effectuer_operation(5, 3, '&'); // 0101 & 0011 = 0001 (1)
    effectuer_operation(5, 3, '|'); // 0101 | 0011 = 0111 (7)
    effectuer_operation(10, 0, '~'); // Test du NON binaire (opérateur unaire)

    // Test de la division par zéro
    effectuer_operation(10, 0, '/');
    effectuer_operation(10, 0, '%');

    // Test d'un opérateur non reconnu
    effectuer_operation(10, 5, '$');

    return 0;
}
