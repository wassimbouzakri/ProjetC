#include <stdio.h>
#include "rules.c"
#include "gameMenu.c"
#include "credits.c"

int menu()
{

    int choice;
    puts("\t \t \t \t \t \t \t \t /==================================/");
    puts("\t \t \t \t \t \t \t \t       Jeu des allumettes         ");
    puts("\t \t \t \t \t \t\t \t /==================================/ \n");
    puts("Bonjour et bienvenue dans le jeu des allumettes !! \n");
    puts("Vous allez avoir le choix entre 3 menus \n");
    puts("Vous choisirez le menu en tapant le chiffre correspondant \n");
    puts("Vous choisirez d'abord si vous voulez voir les regles du jeu ou non, puis vous choisirez le nombre d'allumettes que vous voulez \n");
    do
    {
        puts("\t \033[0;35m Que faire ? \n");
        puts("\033[0;32m 1 - Jouer");
        puts("\033[0;37m 2 - Regles du jeu");
        puts("\033[0;33m 3 - Crédits");
        puts("\033[0;31m 4 - Quitter");
        printf("\033[0;37mVotre choix : ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            puts("Vous avez choisi de jouer");
            gameMenu();
            break;

        case 2:
            puts("Vous avez choisi de voir les regles du jeu \n");
            rules();
            break;

        case 3:
            puts("Vous avez choisi de voir les credits \n");
            credits();
            break;

        case 4:
            puts("Vous avez choisi de quitter");
            break;

        default:
            puts("Vous n'avez pas choisi une option valide");
        }
    } while (choice != 4);

    return 0;
}