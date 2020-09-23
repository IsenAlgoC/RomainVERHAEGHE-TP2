#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main()
{
    unsigned int annee=0;
    printf("Saisir une annee : ");
    scanf_s("%u", &annee);
    // Première façon
    /*if (annee % 100 != 0 && (annee % 4 == 0 || annee % 400 == 0))
    {
        printf("%u est bissextille\n", annee);
    }
    else {
        printf("%u n'est pas bissextille", annee);
    }*/

    // Seconde façon

    if (annee % 100 == 0)
    {
        printf("%u n'est pas bissextile\n", annee);
    }
    else if (annee % 4 == 0 || annee % 400 == 0)
    {
        printf("%u est bissextile\n", annee);
    }
    else {
        printf("%u n'est pas bissextile", annee);
    }
}