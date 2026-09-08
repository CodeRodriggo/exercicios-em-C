#include <stdio.h>

int main() {
    int opcao;

    printf("=== Sistema de Atendimento Bancario ===\n");
    printf("1 - Saque\n");
    printf("2 - Deposito\n");
    printf("3 - Transferencia\n");
    printf("4 - Sair\n");

    printf("Digite uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Saque\n");
            break;

        case 2:
            printf("Deposito\n");
            break;

        case 3:
            printf("Transferencia\n");
            break;

        case 4:
            printf("Sair\n");
            break;

        default:
            printf("Opcao invalida\n");
    }

    return 0;
}