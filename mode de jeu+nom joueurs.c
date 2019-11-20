#include "header.h"

int choix_modes (int choixa)
{
    printf("Choisir mode de jeu \n \n");
    printf("1. Jouer en mode normal \n");
    printf("2. Jouer en mode degrade \n");
    printf("Que choisissez-vous : ");

    scanf("%d", &choixa);
    return choixa;
}

int choix_mode()
{
    int choix_mode1;
    choix_mode1 = choix_modes(0);

    switch (choix_mode1)
    {
    case 1 :
        system("cls");
        printf("Vous etes en mode normal\n");
        choix_nb_joueurs();
        choix_nb();
        break;
    case 2 :
        system("cls");
        printf("Vous etes en mode degrade\n");
        choix_nb_joueurs();
        choix_nb() ;
        break;
    }

}
