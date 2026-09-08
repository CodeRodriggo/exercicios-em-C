#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("\n=== SISTEMA DE GESTAO DE TRANSPORTE ===\n");
        printf("1 - Onibus\n");
        printf("2 - Caminhao\n");
        printf("3 - Van\n");
        printf("4 - Carro\n");
        printf("5 - Motocicleta\n");
        printf("6 - Sair\n");

        printf("\nDigite o codigo do veiculo: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nVeiculo: Onibus\n");
                printf("Finalidade: Transporte de passageiros.\n");
                break;

            case 2:
                printf("\nVeiculo: Caminhao\n");
                printf("Finalidade: Transporte de cargas.\n");
                break;

            case 3:
                printf("\nVeiculo: Van\n");
                printf("Finalidade: Transporte de passageiros e pequenas cargas.\n");
                break;

            case 4:
                printf("\nVeiculo: Carro\n");
                printf("Finalidade: Transporte de passageiros.\n");
                break;

            case 5:
                printf("\nVeiculo: Motocicleta\n");
                printf("Finalidade: Transporte de pequenas cargas e entregas.\n");
                break;

            case 6:
                printf("\nSistema encerrado. Obrigado!\n");
                break;

            default:
                printf("\nCodigo invalido. Veiculo nao encontrado.\n");
        }

    } while (opcao != 6);

    return 0;
}