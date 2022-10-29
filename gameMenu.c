#include <stdio.h>
#include "matches.c"
#include "matchesRand.c"

int gameMenu()
{

    int choice;
    puts("Vous allez avoir le choix entre 3 modes de jeu\n");

    do
    {
        puts("\t Que faire ? \n");
        puts("1 - mode humain");
        puts("2 - mode naif");
        puts("3 - mode expert");
        puts("4 - quitter");
        printf("Votre choix : ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            puts("Vous avez choisi de jouer contre un humain");
            matches();
            break;

        case 2:
            puts("Vous avez choisi de jouer contre le bot naif \n");
            matchesRand();
            break;

        case 3:
            puts("Vous avez choisi de jouer contre l'imbattable");
            break;

        case 4:
            puts("Vous avez choisi de quitter le jeu");
            break;

        default:
            puts("Vous n'avez pas choisi une option valide");
        }
    } while (choice != 4);

    return 0;
}