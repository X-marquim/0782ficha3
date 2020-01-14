#include <stdio.h>

int main() {
    float far;

    printf("Insere os graus em Fahrenheit: "); //Reconha dos graus inseridos em fahrenheit
    scanf("%f", &far);

    printf("%.2f Fahrenheit sao %.2f em graus Celsius", far, (far -32) / 1.8); // Apresentacao e calculo de quantos graus sao os fahrenheit inseridos

    return 0;
}