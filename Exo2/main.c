#include <stdio.h>
#include <stdlib.h>

int main()
{
    float longueur;
    float largueur;
    float hauteur;
    int stop = 1;
     réponse;
    while (stop == 1)
    {
        do {
            printf("Longueur de la valise : ");
            scanf_s("%f", &longueur);

            printf("Largueur de la valise : ");
            scanf_s("%f", &largueur);

            printf("Hauteur de la valise : ");
            scanf_s("%f", &hauteur);

            if (longueur > 150 || largueur > 150 || hauteur > 150)
            {
                printf("L'une des valeurs est trop grande wola\n");
            }

        } while (longueur > 150 && largueur > 150 && hauteur > 150);

        if (longueur > 55 || largueur > 35 || hauteur > 25)
        {
            printf("NON VALIDE\n");
        }
        else
        {
            printf("VALIDE\n");
        }

        printf("Voulez vous verifier une autre valise ? (1 = oui, 0 = non) : ");
        scanf_s("%d", &question);
        if (question == 0)
        {
            stop = 0;
        }

    }

    system("pause");
    return(EXIT_SUCCESS);

}