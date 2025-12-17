#include <stdio.h>

int main(void)
{
    /* Déclaration des variables */
    char c = 0x12;
    short s = 0x1234;
    int i = 0xA47865FF;
    long li = 0x12345678;
    long long lli = 0x1122334455667788LL;
    float f = 2.0f;
    double d = 3.0;
    long double ld = 4.0L;

    /* Déclaration des pointeurs */
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long *pli = &li;
    long long *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("Avant la manipulation :\n");

    printf("Adresse de c  : %p, Valeur : %02x\n", (void*)pc, *(unsigned char*)pc);
    printf("Adresse de s  : %p, Valeur : %04x\n", (void*)ps, *(unsigned short*)ps);
    printf("Adresse de i  : %p, Valeur : %08x\n", (void*)pi, *(unsigned int*)pi);
    printf("Adresse de li : %p, Valeur : %lx\n", (void*)pli, *(unsigned long*)pli);
    printf("Adresse de lli: %p, Valeur : %llx\n", (void*)plli, *(unsigned long long*)plli);

    printf("Adresse de f  : %p, Valeur : %08x\n",
           (void*)pf, *(unsigned int*)pf);

    printf("Adresse de d  : %p, Valeur : %016llx\n",
           (void*)pd, *(unsigned long long*)pd);

    printf("Adresse de ld : %p\n", (void*)pld);

    /* Manipulation via pointeurs */
    *pc += 1;
    *ps += 1;
    *pi -= 1;
    *pli += 1;
    *plli += 1;
    *pf = 1.0f;
    *pd = 1.0;
    *pld = 2.0L;

    printf("\nApres la manipulation :\n");

    printf("Adresse de c  : %p, Valeur : %02x\n", (void*)pc, *(unsigned char*)pc);
    printf("Adresse de s  : %p, Valeur : %04x\n", (void*)ps, *(unsigned short*)ps);
    printf("Adresse de i  : %p, Valeur : %08x\n", (void*)pi, *(unsigned int*)pi);
    printf("Adresse de li : %p, Valeur : %lx\n", (void*)pli, *(unsigned long*)pli);
    printf("Adresse de lli: %p, Valeur : %llx\n", (void*)plli, *(unsigned long long*)plli);

    printf("Adresse de f  : %p, Valeur : %08x\n",
           (void*)pf, *(unsigned int*)pf);

    printf("Adresse de d  : %p, Valeur : %016llx\n",
           (void*)pd, *(unsigned long long*)pd);

    printf("Adresse de ld : %p\n", (void*)pld);

    return 0;
}
