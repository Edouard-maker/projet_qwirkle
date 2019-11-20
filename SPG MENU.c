#include "header.h"

int choixmenu(int choix) // sous-programme pour affichez le menu et faire son choix
{
    printf("%c MENU %c \n",0xBA,0xBA);
    printf("%c 1. JOUER UNE PARTIE %c \n",42,42);
    printf("%c 2. REGLES DU JEU %c \n",42,42);
    printf("%c 3. SCORES %c \n",42,42);
    printf("%c 4. QUITTER %c \n",42,42);
    printf("Que voulez vous faire ? ");

    scanf("%d",&choix);
    return choix;

}
