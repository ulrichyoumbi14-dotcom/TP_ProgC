#include <stdio.h>

int main() {
    printf("Affichage des valeurs des types de données de base :\n");
    printf("--------------------------------------------------\n");

    // i. char
    char c_val = 'A';
    signed char sc_val = -10;
    unsigned char uc_val = 250;
    printf("char: %c (valeur ASCII: %d)\n", c_val, c_val);
    printf("signed char: %d\n", sc_val);
    printf("unsigned char: %u\n", uc_val);

    // ii. short
    short s_val = -30000;
    signed short ss_val = 15000;
    unsigned short us_val = 60000;
    printf("short: %hd\n", s_val);
    printf("signed short: %hd\n", ss_val);
    printf("unsigned short: %hu\n", us_val);

    // iii. int
    int i_val = -2000000000;
    signed int si_val = 1000000000;
    unsigned int ui_val = 4000000000U; // Le suffixe U est important
    printf("int: %d\n", i_val);
    printf("signed int: %d\n", si_val);
    printf("unsigned int: %u\n", ui_val);

    // iv. long int
    long int li_val = -9000000000L; // Le suffixe L est important
    signed long int sli_val = 5000000000L;
    unsigned long int uli_val = 18000000000UL; // Le suffixe UL est important
    printf("long int: %ld\n", li_val);
    printf("signed long int: %ld\n", sli_val);
    printf("unsigned long int: %lu\n", uli_val);

    // v. long long int
    long long int lli_val = -9000000000000000000LL; // Le suffixe LL est important
    signed long long int slli_val = 5000000000000000000LL;
    unsigned long long int ulli_val = 18000000000000000000ULL; // Le suffixe ULL est important
    printf("long long int: %lld\n", lli_val);
    printf("signed long long int: %lld\n", slli_val);
    printf("unsigned long long int: %llu\n", ulli_val);

    // vi. float
    float f_val = 3.1415926535f; // Le suffixe f est important
    printf("float: %f\n", f_val);

    // vii. double
    double d_val = 3.14159265358979323846;
    printf("double: %lf\n", d_val);

    // viii. long double
    long double ld_val = 3.141592653589793238462643383279L; // Le suffixe L est important
    printf("long double: %Lf\n", ld_val);

    return 0;
}
