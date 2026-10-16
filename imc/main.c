#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float taille,poids,imc;
    int truc;
    printf("Entrer votre poids \n");
    scanf("%f", &poids);
    printf("Entrer votre taille en m \n");
    scanf("%f", &taille);
    taille = pow(taille, 2);
    imc = poids/taille;

    if (imc < 18.5)
    {
         printf("vous etes en sous poids imc = %f",imc);
         truc = 1;
    }

    if (imc >= 18.5 && imc < 24.5)
    {
         printf("vous etes normal = %f",imc);
         truc = 1;
    }

    if (truc == 0)
    {
        printf("vous etes gros = %f",imc);
    }







    return 0;
}
