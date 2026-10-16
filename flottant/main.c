#include <stdio.h>
#include <stdlib.h>

int main()
{

    int e1, e2, e3; //integer,variables *
    float fl1, fl2, fl3; //réels flottant
    int reste; // integer (entiers

    e1 = 32 / 10; // on obtient 3 parce que e1 est un entier
    fl1  = 32 / 10; // division euclidienne : 3.2 parce que fl1 est un flottant
    reste = 32%10; // on obtient 2 parce que c'est le reste de la division
    e2 = 32.0 /10;
    fl2 = 32.0 /10;
    e3 = 32 / 10.0;
    fl3 = 32 / 10.0;

    printf("la division euclidienne de 32/10 donne : %d \n", e1);
    printf("la division decimale de 32/10 est : %f \n", fl1);
    printf("la division euclidienne de 32.0/10 est : %f \n" e2);
    printf("la division decimale de 32.0/10 est : %f \n" fl2);
    printf("la division entiere de 32.0/10 est : %d \n" e3);
    printf("bla")






    printf("Hello world!\n");
    return 0;

}
