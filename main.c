#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001 > NUL");

    int escolha;

    do {
        system("cls");
        printf("\nMenu de Convers�o de Unidades:\n");
        printf("1. Convers�o de pot�ncia\n");
        printf("2. Convers�o de tempo\n");
        printf("3. Convers�o de energia\n");
        printf("Escolha alguma op��o:");
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
                printf("Op��o inv�lida! Tente novamente.\n");
        }
    } while (escolha != 10);

    return 0;
}