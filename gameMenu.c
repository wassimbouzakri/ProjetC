#include <stdio.h>

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
        printf("Votre choix : ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            puts("Vous avez choisi de jouer contre un humain");
            break;

        case 2:
            puts("Vous avez choisi de jouer contre le bot naif \n");
            break;

        case 3:
            puts("Vous avez choisi de jouer contre l'imbattable");
            break;

        default:
            puts("Vous n'avez pas choisi une option valide");
        }
    } while (choice != 3);

    return 0;
}