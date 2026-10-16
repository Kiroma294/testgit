//inclu les bibliotheques
#include <stdio.h>
#include <stdlib.h>

//fonction principale*
int main()
{
    int c = 65;
    int c2= 66;
    //je crée un caractère cara1 et j'affecte la valeur 'A'
    //pour 1 caractère, j'utilise des cotes simple ' touche 4
    //pour une chaine de caractères, j'utilise des cotes double " touche 3
    char cara1 = 'A';
    char cara2 = 'B';
    // %c = type char
    printf("le caractere cara1 est egal a : %c \n", cara1);
    printf("le caractere cara2 est egal a : %c \n", cara2);
    // %d = type entier
    printf("la valeur ASCII cara1 est egal a : %d \n", cara1);
    printf("la valeur ASCII cara2 est egal a : %d\n", cara2);


        // %d = type entier
    printf("le nombre c1 est egal a : %d \n", c);
    printf("le nombre c2 est egal a : %d \n", c2);

        // %c = type char
    printf("le code ASCII de c1 est egal a : %c \n", c);
    printf("le code ASCII de c2 est egal a : %c \n", c2);

    //on parle d'incrémentation:   ( on parle de décrémentation c-- )
    c++; // c=c +1
    printf("le nombre c1 est egal a : %d \n", c);
    printf("le code ASCII de c1 est egal a : %c \n", c);


    cara1 = cara1 +2;
    printf("le caractere cara1 est egal a : %c \n", cara1);
    printf("la valeur ASCII cara1 est egal a : %d \n", cara1);

    printf("Hello world!\n");
    return 0;
}
