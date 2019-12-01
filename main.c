#include "header.h"

// fonction pour afficher le menu et faire son choix

int main()
{
    Color(0,4);

    int choix;

    printf("\n\n\n\n\n\n\t\t\t\t\t\t\tQUIRKLE\n\n\n\n\n\n\n\n\n");

    printf("\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",0xC9,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xBB);

    printf("\t\t\t\t\t%c\t\t MENU\t\t\t%c\n",0xBA,0xBA);

    printf("\t\t\t\t\t%c\t\t\t\t\t%c\n",0xBA,0xBA);

    printf("\t\t\t\t\t%c\t%c 1. JOUER UNE PARTIE \t\t%c\n",0xBA,0x10,0xBA);

    printf("\t\t\t\t\t%c\t%c 2. REGLES DU JEU \t\t%c\n",0xBA,0x10,0xBA);

    printf("\t\t\t\t\t%c\t%c 3. SCORES \t\t\t%c\n",0xBA,0x10,0xBA);

    printf("\t\t\t\t\t%c\t%c 4. QUITTER \t\t\t%c\n",0xBA,0x10,0xBA);

    printf("\t\t\t\t\t%c\t\t\t\t\t%c\n",0xBA,0xBA);

    printf("\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",0xC8,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xBC);

    printf("\n\t\t\t\t\tQue voulez vous faire ? ");
    scanf("%d",&choix);

    while((choix<1)||(choix>4))
        {
        printf("\nVeuillez entrer un nombre entre 1 et 4 a l'ecran s'il vous plait.\nQue voulez vous faire?\n");
        scanf("%d",&choix);
        }

    switch(choix)
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
            printf("%c A UNE PROCHAINE FOIS %c",0x03,0x03);
            break;
        default :
            printf("Faites votre choix ");
    }
    return 0;
}
