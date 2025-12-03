#include <stdio.h>

int main() {
    printf("Taille des types de données de base en octets (sur cette architecture) :\n");
    printf("----------------------------------------------------------------------\n");

    // i. char
    printf("char: %zu octets\n", sizeof(char));
    printf("signed char: %zu octets\n", sizeof(signed char));
    printf("unsigned char: %zu octets\n", sizeof(unsigned char));

    // ii. short
    printf("short: %zu octets\n", sizeof(short));
    printf("signed short: %zu octets\n", sizeof(signed short));
    printf("unsigned short: %zu octets\n", sizeof(unsigned short));

    // iii. int
    printf("int: %zu octets\n", sizeof(int));
    printf("signed int: %zu octets\n", sizeof(signed int));
    printf("unsigned int: %zu octets\n", sizeof(unsigned int));

    // iv. long int
    printf("long int: %zu octets\n", sizeof(long int));
    printf("signed long int: %zu octets\n", sizeof(signed long int));
    printf("unsigned long int: %zu octets\n", sizeof(unsigned long int));

    // v. long long int
    printf("long long int: %zu octets\n", sizeof(long long int));
    printf("signed long long int: %zu octets\n", sizeof(signed long long int));
    printf("unsigned long long int: %zu octets\n", sizeof(unsigned long long int));

    // vi. float
    printf("float: %zu octets\n", sizeof(float));

    // vii. double
    printf("double: %zu octets\n", sizeof(double));

    // viii. long double
    printf("long double: %zu octets\n", sizeof(long double));

    return 0;
}
