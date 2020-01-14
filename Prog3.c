#include <stdio.h>

int main() {
    float total = 500000, primeiro, segundo;
    primeiro = total * 0.46; //Calculo do montande para o primeiro lugar
    printf("Primeiro: %.2f\n", primeiro); //Apresentacao do valor do primeiro lugar

    segundo = total * 0.32; //Calculo do mantante para o segundo lugar
    printf("Segundo: %.2f\n", segundo); //Apresentacao do valor para o segundo lugar

    printf("Terceiro: %f\n", total - primeiro - segundo); //Calcular e apresentacao do montante para o terceiro lugar

    return 0;
}