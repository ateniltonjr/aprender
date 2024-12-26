// Conversão de unidades de energia.
// Joule, kilo Joule.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void convEnergia(char unidade, float valor) {
    switch (unidade) {
        case 'j':
        printf("O valor da energia é: \n%.2f J \n%.2f kJ\n", valor, valor*1000);
        break;

        case 'k':
        printf("O valor da energia é: \n%.2f J \n%.2f kJ\n", valor/1000, valor);
        break;

        default:
        printf("Unidade inválida!");
        break;
    }
}

void ShowConversaoEnergiaMenu() {

    char unidade, continuar;
    float valor;

    setlocale(LC_ALL, "portuguese");

    do {
        printf("\nDigite: \nj - para Joules \nk - para kilo Joules\n");
        scanf(" %c", &unidade);

        printf("Qual o valor da energia?: ");
        scanf(" %f", &valor);

        convEnergia(unidade, valor);

        printf("\nDigite s para continuar, ou outra tecla para encerrar.\n");
        scanf( " %c", &continuar);
    }

    while (continuar == 's' || continuar == 'S');
    printf("Programa encerrado.\n");
    system("pause");
}