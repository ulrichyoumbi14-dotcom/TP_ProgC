#include <stdio.h>

int main(void)
{
    int n;
    int u0 = 0, u1 = 1, un;
    int i;

    /* Lecture de n */
    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    /* Cas où n >= 0 */
    if (n >= 0)
        printf("%d", u0);

    if (n >= 1)
        printf(", %d", u1);

    /* Calcul des termes suivants */
    for (i = 2; i <= n; i++)
    {
        un = u0 + u1;
        printf(", %d", un);
        u0 = u1;
        u1 = un;
    }

    printf("\n");
    return 0;
}
