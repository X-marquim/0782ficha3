#include <stdio.h>

int main() {
    int i;

    printf("Insere um numero inteiro: "); //Insercao de um numero inteiro
    scanf("%d", &i);

    printf("O numero inserido foi %d o seu antecessor e %d e o seu sucessor e %d",i, i - 1, i + 1);
     //Calculo e apresentacao do numero antecessor e sucessor tal como o numero inserido                                                                                                                                                                       //e sucessor tal como o numero inserido

    return 0;
}