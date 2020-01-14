#include <stdio.h>

int main() {
    int menu;
    float num1, num2;

    printf("---Operacoes---\n");
    printf("1 - Multiplicacao\n");
    printf("2 - Divisao\n");
    printf("3 - Adicao\n");
    printf("4 - Subtracao\n");
    printf("Escolha: ");
    scanf("%d", &menu); //Escolha da operacao


    printf("Primeiro numero: "); //Reconha do primeiro numero
    scanf("%f", &num1);

    printf("Segundo numero: "); //Reconha do segundo numero
    scanf("%f", &num2);

    switch (menu) { //Calculo com base na escolha da operacao e numeros selecionados
    case 1:
        printf("%.2f x %.2f = %.2f", num1, num2, num1 * num2);
        break;
    case 2:
        printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
        break;
    case 3:
        printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
        break;
    case 4:
        printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
        break;
    default:
        printf("Erro!\n\nReniciando programa!");
        main();
        break;
    }
    return 0;
}