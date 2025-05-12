#include <stdio.h>
int main(){
int numero = 0;

printf ("Digite um numero: ");
scanf ("%i", &numero);

printf ("A tabuada do %i eh\n");
printf ("1 x %i = %i\n", numero, 1 * numero);
printf ("2 x %i = %i\n", numero, 2 * numero);
printf ("3 x %i = %i\n", numero, 3 * numero);
printf ("4 x %i = %i\n", numero, 4 * numero);
printf ("5 x %i = %i\n", numero, 5 * numero);
printf ("6 x %i = %i\n", numero, 6 * numero);
printf ("7 x %i = %i\n", numero, 7 * numero);
printf ("8 x %i = %i\n", numero, 8 * numero);
printf ("9 x %i = %i\n", numero, 9 * numero);
printf ("10 x %i = %i\n", numero, 10 * numero);

printf ("\nUsando a funcao 'for' fica: \n");
for (int i = 1; i <=10; i++){ // i+2
    printf ("%i * %i = %i\n", i, numero, i * numero);
}

printf ("\nAgora, de tras para frente: \n");
for (int i = 10; i >= 1; i--){ //10 a 1
    printf ("%i * %i = %i\n", i, numero, i * numero);
}
   

// for (int i=1; i>0; i++){ //para parar dar control c
// printf ("Ao infinito e alem: ");
// } 
return 0;
}