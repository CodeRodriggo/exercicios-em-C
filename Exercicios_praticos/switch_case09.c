#include <stdio.h>

int main()
{
    int opcao;

    do
    {
        printf("========================================\n");
        printf("    Sistema de Gestao de Transporte     \n");
        printf("========================================\n\n");

        printf("Categorias de Veiculos:\n");
        printf("----------------------------------------\n");
        printf("1 - Carro\n");
        printf("2 - Motocicleta\n");
        printf("3 - Van\n");
        printf("4 - Onibus\n");
        printf("5 - Caminhao\n");
        printf("6 - Encerrar Sistema\n\n");

        printf("Digite o codigo do veiculo: ");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao)
        {
        case 1:
            printf("Veiculo selecionado: Carro\n");
            printf("Finalidade: Transporte de passageiros (passeio).\n");
            printf("Status: Veiculo classificado com sucesso.\n\n");
            break;
        case 2:
            printf("Veiculo selecionado: Motocicleta\n");
            printf("Finalidade: Transporte individual leve.\n");
            printf("Status: Veiculo classificado com sucesso.\n\n");
            break;
        case 3:
            printf("Veiculo selecionado: Van\n");
            printf("Finalidade: Transporte utilitario/passageiros.\n");
            printf("Status: Veiculo classificado com sucesso.\n\n");
            break;
        case 4:
            printf("Veiculo selecionado: Onibus\n");
            printf("Finalidade: Transporte coletivo de passageiros.\n");
            printf("Status: Veiculo classificado com sucesso.\n\n");
            break;
        case 5:
            printf("Veiculo selecionado: Caminhao\n");
            printf("Finalidade: Transporte de cargas.\n");
            printf("Status: Veiculo classificado com sucesso.\n\n");
            break;
        case 6:
            printf("Encerrando o sistema...\n");
            break;
        default:
            printf("Opcao invalida. Tente novamente.\n\n");
            break;
        }

    } while (opcao != 6);

    return 0;
}
