#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,temp1,temp2,res;

    printf("Saisir le chiffre A \n");
    scanf("%d",&a);
    printf("Saisir le chiffre B\n");
    scanf("%d",&b);
    printf("Saisir le chiffre C \n");
    scanf("%d",&c);
    printf("Saisir le chiffre D\n");
    scanf("%d",&d);


    if (b > a)
    {
        temp1 = b;

    }
    else
    {
        temp1 = a;
    }

    if (c > d)
    {
        temp2 = c;

    }
    else
    {
        temp2 = d;
    }


    if (temp1 > temp2)
    {
        res = temp1;

    }


    else
    {
        res = temp2;

    }

    printf("Le plus grand chiffre entre %d %d %d %d est %d",a,b,c,d,res);

    return 0;
}
