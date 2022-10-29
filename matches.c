#include <stdio.h>

int matches()
{
    // jeu des allumettes avec 30 allumettes

    // initialisation des variables

    // 30 allumettes au départ
    int matches = 30;
    // le joueur commence
    int player = 1;
    // le joueur prend 1, 2 ou 3 allumettes
    int matches_taken;
    // le joueur gagne si il prend la dernière allumette
    int winner;

    // tant que le nombre d'allumettes est supérieur à 0
    while (matches > 0)
    {
        // afficher le nombre d'allumettes restantes
        printf("Il y a:  %d allumettes sur la table. ", matches);
        // demander au joueur combien d'allumettes il veut prendre
        printf("Joueur %d, combien d'allumettes voulez-vous prendre ? ", player);
        scanf("%d", &matches_taken);

        // si le nombre d'allumettes est supérieur à 3 ou inférieur à 1
        if (matches_taken > 3 || matches_taken < 1)
        {
            // afficher un message d'erreur
            printf("Vous pouvez uniquement prendre 1, 2 ou 3 alumettes. Merci de reessayer. \n");
            continue;
        }

        // allumettes restantes = allumettes restantes - allumettes prises
        matches -= matches_taken;
        player = (player == 1) ? 2 : 1;

        // si le nombre d'allumettes est 1
        if (matches == 1)
        {
            // afficher un message
            printf("Il ne reste plus que 1 allumette sur la table. Joueur %d, combien d'allumettes voulez-vous prendre ? ", player);
            scanf("%d", &matches_taken);

            // si allumeettes prises est supérieur à 1 ou inférieur à 1
            if (matches_taken > 1 || matches_taken < 1)
            {
                // afficher un message d'erreur
                printf("Vous ne pouvez prendre qu'1 seule allumette. Veuillez reessayer. \n");
                continue;
            }

            // allumettes restantes = allumettes restantes - allumettes prises
            matches -= matches_taken;
            player = (player == 1) ? 2 : 1;
        }

        // si le nombre d'allumettes est 0
        if (matches == 0)
        {
            // afficher un message
            winner = (player == 1) ? 2 : 1;
            printf("Joueur %d vous avez gagné ! \n", winner);
        }
    }
    return 0;
}