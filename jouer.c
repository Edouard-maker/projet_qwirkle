#include "header.h"

int choix_nb_joueurs()
{
    int choixb=0;

    printf("Entrer le nombre de joueurs(de 2 a 4 joueurs): \n");
    scanf("%d",&choixb);
    while((choixb<2)||(choixb>4))
    {
    printf("Entrer le nombre de joueurs(de 2 a 4 joueurs): \n");
    scanf("%d",&choixb);
    }
    return choixb;
}

int choix_nb()
{
    int choix_nb1;
    char joueur1[20];
    char joueur2[20];
    char joueur3[20];
    char joueur4[20];

    switch(choix_nb1)
    {
        case 2 :
            printf("Joueur1, quel est votre pseudo? ");
            scanf("%s",&joueur1);
            printf("Joueur2, quel est votre pseudo? ");
            scanf("%s",&joueur2);
            printf("\n");
            printf("Bienvenue a vous %s et %s\n", joueur1,joueur2);
            break ;
        case 3  :
            printf("Joueur1, quel est votre pseudo? ");
            scanf("%s",&joueur1);
            printf("Joueur2, quel est votre pseudo? ");
            scanf("%s",&joueur2);
            printf("Joueur3, quel est votre pseudo? ");
            scanf("%s",&joueur3);
            printf("\n");
            printf("Bienvenue a vous %s, %s et %s\n", joueur1,joueur2,joueur3);
            break ;
        case 4   :
            printf("Joueur1, quel est votre pseudo? ");
            scanf("%s",&joueur1);
            printf("Joueur2, quel est votre pseudo? ");
            scanf("%s",&joueur2);
            printf("Joueur3, quel est votre pseudo? ");
            scanf("%s",&joueur3);
            printf("Joueur4, quel est votre pseudo? ");
            scanf("%s",&joueur4);
            printf("\n");
            printf("Bienvenue a vous %s, %s, %s et %s\n", joueur1,joueur2,joueur3,joueur4);
            break ;
        default : printf("Faites votre choix ");
    }
return(choix_nb1);
}


