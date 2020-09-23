#include <stdio.h>
#include <stdlib.h>

int main()
{
    float longueur;
    float largeur;
    float hauteur;
    int stop = 1;
    int réponse=0 ;
    while (stop == 1)
    {
        printf("Longueur de la valise : ");
        scanf_s("%f", &longueur);
        while (longueur < 1 || longueur >150)
        {
            printf("La valeur est incorrecte, veuillez rentrer une nouvelle valeur : ");
            scanf_s("%f", &longueur);
        }
        printf("Largueur de la valise : ");
        scanf_s("%f", &largeur);
        while (largeur < 1 || largeur>150)
        {
            printf("La valeur est incorrecte, veuillez rentrer une nouvelle valeur : ");
            scanf_s("%f", &largeur);
        }

        printf("Hauteur de la valise : ");
        scanf_s("%f", &hauteur);
        while (hauteur < 1 || hauteur>150)
        {
            printf("La valeur est incorrecte, veuillez rentrer une nouvelle valeur : ");
            scanf_s("%f", &hauteur);
        }
        // Ordonner 3 valeurs
       if (largeur < longueur)
        {
            float tmp = longueur; longueur = largeur; largeur = tmp;
        }
        if (hauteur < longueur)
        {
            float tmp = longueur; longueur = hauteur; hauteur = tmp;
        }
        if (hauteur < largeur)
        {
            float tmp = largeur; largeur = hauteur; hauteur = tmp;
        }

        if (hauteur <= 55 && longueur <= 35 && largeur <= 25)
        {
            printf("VALIDE\n");
        }
        else
        {
            printf("NON VALIDE\n");
        }

        printf("Voulez vous verifier une autre valise ? (1 = oui, 0 = non) : ");
        scanf_s("%d", &réponse);
        if (réponse == 0)
        {
            stop = 0;
        }
    }
     system("pause");
     return(EXIT_SUCCESS);
}