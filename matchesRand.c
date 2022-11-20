#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int matchesRand()
{
    // jeu des allumettes avec 30 allumettes
    // initialisation des variables
    int matches = 30;
    int player = 0;
    int turn = 0;
    int matchesTaken = 0;
    int matchesTakenComputer = 0;
    int matchesTakenPlayer = 0;
    time_t t;
    // srand permet de générer des nombres aléatoires différents à chaque fois quand on lance le programme
    srand((unsigned)time(&t));

    // tant que le nombre d'allumettes est supérieur à 0
    while (matches > 0)
    {
        // afficher les alummettes avec la forme |
        for (int i = 0; i < matches; i++)
        {
            printf("|");
        }

        // si le joueur est 0
        if (turn == 0)
        {
            // afficher le nombre d'allumettes restantes
            printf("\nIl y a: %d allumettes sur la table. Combien voulez vous en prendre? ", matches);
            // demander au joueur combien d'allumettes il veut prendre
            scanf("%d", &matchesTaken);
            // si le nombre d'allumettes est supérieur à 3 ou inférieur à 1
            if (matchesTaken > 3 || matchesTaken < 1)
            {
                // afficher un message d'erreur
                printf("Vous ne pouvez en prendre que 1, 2, ou 3 Allumettes. Veuillez réessayer. \n");
                continue;
            }
            // si les allumettes prises sont supérieures au nombre d'allumettes restantes
            if (matchesTaken > matches)
            {
                // afficher un message d'erreur
                printf("Vous ne pouvez pas prendre plus d'allumettes que celles qui sont sur la table. Il n'en reste plus que: %d. Veuillez réessayer. \n", matches);
                turn = 0;
                continue;
            }
            else
            {
                matchesTakenPlayer = matchesTaken;
                matches = matches - matchesTaken;
                turn = 1;
            }
        }
        // BOT
        else
        {
            // générer un nombre aléatoire entre 1 et 3
            matchesTakenComputer = (rand() % 3) + 1;
            // tant que le nombre d'allumettes prises est supérieur au nombre d'allumettes restantes
            while (matchesTakenComputer > matches)
            {
                // générer un nombre aléatoire entre 1 et 3
                matchesTakenComputer = (rand() % 3) + 1;
            }
            // afficher message
            printf("\nLe BOT a pris %d allumettes. \n", matchesTakenComputer);
            matches = matches - matchesTakenComputer;
            turn = 0;
        }
    }

    // si le joueur perd
    if (turn == 1)
    {
        printf("Vous avez pris la derniere allumette. Vous avez perdu :( \n");
        return 0;
    }
    else
    {
        printf("Le BOT à pris la derniere allumette. Vous avez gagné :) \n");
        return 1;
    }

    return 0;
}
