#include <stdio.h>
#include "rules.c"
#include "gameMenu.c"
#include "credits.c"

int menu()
{
    int choice;

    printf("\t\t\t\t\t \033[0;35m      _                  _                   _ _                      _            \n");
    printf("\t\t\t\t\t \033[0;35m     | |                | |                 | | |                    | |           \n");
    printf("\t\t\t\t\t \033[0;35m     | | ___ _   _    __| | ___  ___    __ _| | |_   _ _ __ ___   ___| |_ ___  ___ \n");
    printf("\t\t\t\t\t \033[0;35m _   | |/ _ \\ | | |  / _` |/ _ \\/ __|  / _` | | | | | | '_ ` _ \\ / _ \\ __/ _ \\/ __|\n");
    printf("\t\t\t\t\t \033[0;35m| |__| |  __/ |_| | | (_| |  __/\\__ \\ | (_| | | | |_| | | | | | |  __/ ||  __/\\__ \\\n");
    printf("\t\t\t\t\t \033[0;35m \\____/ \\___|\\__,_|  \\__,_|\\___||___/  \\__,_|_|_|\\__,_|_| |_| |_|\\___|\\__\\___||___/ \n");
    puts("\n\033[0;37mBonjour et bienvenue dans le jeu des allumettes !! \n");
    puts("\033[0;37mVous allez avoir le choix entre 3 menus \n");
    puts("\033[0;37mVous choisirez le menu en tapant le chiffre correspondant \n");
    puts("\033[0;37mVous choisirez d'abord si vous voulez voir les regles du jeu ou non, puis vous choisirez le nombre d'allumettes que vous voulez \n");
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