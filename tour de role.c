#include <stdio.h>

int tournee()
{
    int i=0;
    do
    {
    printf("C'est le tour du joueur %d\n", turn());
    }
    while (++i != 10);

    return 0;
}

int turn()
{
    static int t = 1;
    t ^= 1;
    return t+1;
}
