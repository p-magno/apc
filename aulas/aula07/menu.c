#include <stdio.h>
#include <stdlib.h>
#include <Locale.h>

#define BLU "\e[0;34m"
#define reset "\e[0m"
#define RED "\e[0;31m"
int main(){
    setlocale (LC_ALL, "pt_BR");
    int opcao = 0;

    while (opcao !=4) {                     
printf (",--.   ,--.            ,----.                             \n");
printf ("|  |   |  | ,---.     '  .-./    ,--,--.,--,--,--. ,---.  \n");
printf ("|  |.'.|  || .-. :    |  | .---. ' ,-.  ||        || .-. : \n");
printf ("|   ,'.   ||   --.    '  '--'  | | '-'  ||  |  |  |   --. \n");
printf ("'--'   '--' `----'     `------'  `--`--'`--`--`--' `----' \n");


                          
printf (",---.  ,------. ,----.     ,---.           |\n");
printf ("'   .-' |  .---''  .-./    /  O  |         |\n");
printf ("`.  `-. |  `--, |  | .---.|  .-.  |        |\n");
printf (".-'    ||  `---.'  '--'  ||  | |  |        |\n");
printf ("`-----' `------' `------' `--' `--'        |\n");
                               

                                                          

        printf (BLU);
    printf ("+------------------------+\n");
    printf ("|     MENU PRINCIPAL     |\n");
    printf ("+------------------------+\n");
    printf ("| 1 - Novo Jogo          |\n");
    printf ("| 2 - Ver Score          |\n");
    printf ("| 3 - Sobre o Jogo       |\n");
    printf ("| 4 - Sair               |\n");
    printf ("+------------------------+\n");
    printf ("Escolha uma opcao > ");
    scanf ("%i", &opcao);
    while (getchar() != '\n');
    system ("clear");
printf (reset);
    switch (opcao){
        case 1: {
            system ("clear");
            int nivel = 0;
            printf (RED);
            printf ("Nivel do Jogo\n");
            printf ("1 - Facil\n");
            printf ("2 - Medio\n");
            printf ("3 - Dificil\n");
            printf ("Escolha um nivel > ");
            scanf ("%i", &nivel);
            while (getchar() != '\n');
            break;
        }
        case 2: {
            system ("clear");
            printf ("Score do Jogo\n");
            printf ("1 - Jogador A - 1000 pontos\n");
            printf ("2 - Jogador B - 700 pontos\n");
            printf ("3 - Jogador C - 500 pontos\n");
            printf ("4 - Jogador D - 600 pontos\n");
            printf ("5 - Jogador E - 100 pontos\n");
            printf ("Pressione ENTER para continuar...");
            while (getchar() != '\n');
            break;
        }
        case 3:{
            system ("clear");
            printf ("Sobre o Jogo\n\n");
            printf ("Desenvolvido em C\n");
            printf ("Por Dev1 e Dev2\n\n");
            printf ("Copyright (C) 2025\n");
            printf ("Pressione ENTER para continuar...");
            while (getchar() != '\n');
            break;





        }
        case 4: {
            printf (reset);
            printf ("Obrigado por jogar!\n");
            break;
        }
        default: printf ("Opcao invalida! Tente novamente. \n");

    }



    }

//para voltar só uma aba no cd, usar cd ..
//aprender a colocar texto customizado em c

    return 0;
}