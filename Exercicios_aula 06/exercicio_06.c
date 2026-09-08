#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("\n=== SISTEMA DE ATENDIMENTO ===\n");
        printf("1 - Suporte Tecnico\n");
        printf("2 - Financeiro\n");
        printf("3 - Recursos Humanos\n");
        printf("4 - Comercial\n");
        printf("5 - Sair\n");

        printf("Escolha o setor desejado: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nSetor selecionado: Suporte Tecnico\n");
                printf("Aguarde, sua solicitacao sera encaminhada para a equipe tecnica.\n");
                break;

            case 2:
                printf("\nSetor selecionado: Financeiro\n");
                printf("Sua solicitacao sera encaminhada para o setor financeiro.\n");
                break;

            case 3:
                printf("\nSetor selecionado: Recursos Humanos\n");
                printf("Sua solicitacao sera encaminhada para o setor de Recursos Humanos.\n");
                break;

            case 4:
                printf("\nSetor selecionado: Comercial\n");
                printf("Sua solicitacao sera encaminhada para a equipe comercial.\n");
                break;

            case 5:
                printf("\nPrograma encerrado. Obrigado!\n");
                break;

            default:
                printf("\nOpcao invalida. Escolha um setor disponivel.\n");
        }

    } while (opcao != 5);

    return 0;
}