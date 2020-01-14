#include <stdio.h>
#include <string.h>

int main() {

    int i;
    char semana[128];


    printf("Insira um numero inteiro entre 1 e 7: "); //Reconha de um numero
    scanf("%d", &i);

    switch (i) { //Com base no numero inserido escreve no char "semana" o dia da semana correspondente
    case 1:
        strcpy(semana,"Segunda-Feira");
        break;
    case 2:
        strcpy(semana,"Terca-Feira");
        break;
    case 3:
        strcpy(semana,"Quarta-Feira");
        break;
    case 4:
        strcpy(semana,"Quinta-Feira");
        break;
    case 5:
        strcpy(semana,"Sexta-Feira");
        break;
    case 6:
        strcpy(semana,"Sabado");
        break;     
    case 7:
        strcpy(semana,"Domingo");
        break;   
    default:
        printf("Erro!\n\n\nReniciando programa!");
        main();
        break;
    }

    printf("%d equivale a %s", i, semana);

    return 0;
}