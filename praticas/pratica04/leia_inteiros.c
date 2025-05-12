#include <stdio.h>

int main (){

long int numero = 0;
int x, y = 0;
printf ("Digite um numero inteiro: ");
scanf ("%ld", &numero);
getchar();

printf ("Voce digitou: %i\n", numero);
getchar();

printf ("Digite as coordenadas x e y: ");
scanf ("%i %i", &x, &y);
getchar();



    return 0;
}