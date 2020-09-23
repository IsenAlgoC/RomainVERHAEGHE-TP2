#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int stop = 0;
    int guess = 0;
    int try = 0;
    int nombre = 0;
    srand(time(NULL)); 
    int random = 0;
    random = (rand() % 100) + 1;

    while (stop == 0)
    {
        printf("Choisir un nombre : ");
        scanf_s("%d", &guess);
        if (guess > random)
        {
            printf("Nombre trop grand\n");
            try = try + 1;
        }
        else if (guess < random)
        {
            printf("Nombre trop petit\n");
            try = try + 1;
        }
        else
        {
            try = try + 1;
            printf("Bravo, t'as trouve en %d coup(s)\n", try);
            stop = 1;
        }
    }

}