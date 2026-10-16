#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,temp;

    printf("Saisir le chiffre A \n");
    scanf("%d",&a);
    printf("Saisir le chiffre B\n");
    scanf("%d",&b);
    if (b > a)
    {
        temp = a;
        a = b;
        b = temp;
    }

    c = a - b;
    printf("%d - %d = %d",a,b,c);





    return 0;
}
