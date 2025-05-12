#include <stdio.h>
int main(){
int numero = 0;
float media = 0;

printf("Digite um numero inteiro: ");
scanf("%i", &numero);

int numero_eh_divisivel_por_2 = numero % 2 == 0; // declarar a variável numero divisível por 2 depois do scanf.
if (numero_eh_divisivel_por_2) {
    printf("O numero %i eh par!\n", numero);
}else {
    printf("O numero %i eh impar\n", numero);
}

int idade = 0;
printf ("Digite a sua idade: ");
scanf ("%i", &idade);
if (idade < 16) {
    if (idade < 18 && idade > 70) { // ao invés de usar ||, usar &&
        printf("Voce nao pode votar!\n");
    }else {
        printf ("Voce pode votar!\n");
    }
} else {
    printf("Voce nao pode votar");
}

    return 0;
}