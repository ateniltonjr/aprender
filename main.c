#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001 > NUL");

    int escolha;

    do {
        system("cls");
        printf("\nMenu de Conversão de Unidades:\n");
        printf("1. Conversão de potência\n");
        printf("2. Conversão de tempo\n");
        printf("3. Conversão de energia\n");
        printf("Escolha alguma opção:");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                ShowconversaoPotenciaMenu();
                break;
            case 2:
                ShowConversaoTempoMenu();
                break;
            case 3:
                ShowConversaoEnergiaMenu();
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (escolha != 10);

    return 0;
}