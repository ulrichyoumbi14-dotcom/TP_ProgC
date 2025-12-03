#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    printf("Variables utilisées : a = %d, b = %d\n", a, b);
    printf("----------------------------------------\n");

    // Opérations Arithmétiques
    printf("Opérations Arithmétiques :\n");
    
    // Addition
    printf("a + b (Addition) = %d\n", a + b);

    // Soustraction
    printf("a - b (Soustraction) = %d\n", a - b);

    // Multiplication
    printf("a * b (Multiplication) = %d\n", a * b);

    // Division (Division entière)
    printf("a / b (Division entière) = %d\n", a / b);

    // Modulo
    printf("a %% b (Modulo) = %d\n", a % b);

    printf("\nOpérations de Comparaison (Résultat : 1 pour Vrai, 0 pour Faux) :\n");

    // Égalité
    printf("a == b (a est égal à b) = %d\n", a == b);

    // Supériorité
    printf("a > b (a est supérieur à b) = %d\n", a > b);

    return 0;
}
