#include "header.h"
int main()
{
    int choix1;

    choix1=choixmenu(0);


    switch(choix1)
    {
        case 1 :
            system("cls");
            choix_mode();
            break;
        case 2:
            system("cls");
            printf("%c REGLES DU JEUX %c \n",22,22);
            regles();
            break;
        case 3 :
            system("cls");
            printf("%c SCORE %c \n",22,22);
            break;
        case 4 :
            system("cls");
            printf("%c QUITTER %c",22,22);
            break;
        default : printf("Faites votre choix ");
    }
    return 0;
}
