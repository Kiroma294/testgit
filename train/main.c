#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v1, v2, distance, temps;
    int totsec, totmin, sec, min, heure, hd, md, sd, departtotal, arriveh, arrivem, arrives;


    printf("Entrer la distance en Km!\n");
    scanf("%f", &distance);
    printf("Entrer la vitesse du train 1 en Km/h \n");
    scanf("%f", &v1);
    printf("Entrer la vitesse du train 2 en Km/h \n");
    scanf("%f", &v2);

    temps = distance / (v1 + v2); // le résultat en heure
    totsec = temps * 3600;

    sec = totsec % 60; // modulo
    totmin = totsec / 60; // division euclidienne
    min = totmin % 60; // modulo
    heure = totmin / 60; // division euclidienne

    printf("Temps de trajet : %d heure(s) %d minute(s) %d seconde(s)\n", heure, min, sec);

    printf("Entrer l'heure de départ\n");
    scanf("%d", &hd); // Corrigé : %d au lieu de %f et suppression du 'a'
    printf("Entrer les minutes de départ\n");
    scanf("%d", &md); // Corrigé : %d au lieu de %f
    printf("Entrer les secondes de départ \n");
    scanf("%d", &sd); // Corrigé : %d au lieu de %f

    departtotal = hd * 3600 + md * 60 + sd + totsec;

    arrives = departtotal % 60; // modulo pour les secondes
    totmin = departtotal / 60; // division euclidienne pour le total des minutes
    arrivem = totmin % 60; // modulo pour les minutes d'arrivée
    arriveh = totmin / 60; // division euclidienne pour les heures d'arrivée

    printf("Heure d'arrivée : %d heure(s) %d minute(s) %d seconde(s)\n", arriveh, arrivem, arrives);

    return 0;
}
