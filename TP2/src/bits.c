#include <stdio.h>

int main(void)
{
    int d = 0x10001000;  // valeur d'exemple

    int bit4_gauche;
    int bit20_gauche;

    /* Extraction des bits */
    bit4_gauche  = (d >> 28) & 1;  // 4e bit de gauche
    bit20_gauche = (d >> 12) & 1;  // 20e bit de gauche

    /* Vérification */
    if (bit4_gauche == 1 && bit20_gauche == 1)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
