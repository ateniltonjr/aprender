// conversão de medidas de tempo
// segundos, minutos, horas.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void conversaoTempo( char unidade, int valor) {
    switch (unidade) {
        case 's':
        printf("%d segundos \n%d minutos \n%d horas \n", valor, valor/60, valor/3600);
        break;

        case 'm':
        printf("%d segundos \n%d minutos \n%d horas \n", valor*60, valor, valor/60);
        break;

        case 'h':
        printf("%d segundos \n%d minutos \n%d horas \n", valor*3600, valor*60, valor);
        break;

        default:
        printf("Unidade inválida! Digite s, m ou h.");
    } }

int main() {
int valor, encerrar;
char unidade;

setlocale(LC_ALL, "portuguese");

do {
    printf("Digite:\n s - para segundos.\n m - para minutos.\n h - para horas. \nQual a unidade de medida de tempo?: ");
    scanf(" %c", &unidade);

    printf("\nDigite o valor da unidade de tempo: ");
    scanf(" %d", &valor);

    conversaoTempo(unidade, valor);

    printf("\nDigite 1 caso deseje continuar, e outra tecla para encerrar.\n");
    scanf(" %d", &encerrar); }

    while (encerrar == 1); 
        printf("Programa encerrado.\n");

    system("pause"); }