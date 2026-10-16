#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;

    y = 25;
    z = 24.46;

    printf(" x = %d, y = %d and z = %.2f, \n", x,y,z);
    //en c, les bolléen False et True n'existe pas
    //néanmoins, il renvoie les 0 pour False et 1 pour True.

    printf("x >= y renvoie le booléen : %d\n",x >=y);
    //operateur d'égalité == (condition) à différentier avec l'opérateyr d'affectation (opération mathématique)
    printf("x == y renvoie le booléen : %d\n",x ==y);
    printf("x < z renvoie le booléen : %d\n",x < z);
    printf("y > z  renvoie le booléen : %d\n",y > z);
    printf("x != y  renvoie le booléen : %d\n",x != y);










    printf("Hello world!\n");
    return 0;
}
