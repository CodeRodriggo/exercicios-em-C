#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("\n=== CARDAPIO ===\n");
        printf("1 - Hamburguer ........ R$ 20,00\n");
        printf("2 - Pizza ............. R$ 35,00\n");
        printf("3 - Cachorro-quente ... R$ 15,00\n");
        printf("4 - Batata frita ...... R$ 12,00\n");
        printf("5 - Refrigerante ...... R$ 7,00\n");
        printf("6 - Sair\n");

        printf("\nDigite o codigo do produto: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nProduto: Hamburguer\n");
                printf("Valor: R$ 20,00\n");
                printf("Pedido confirmado! Obrigado pela preferencia.\n");
                break;

            case 2:
                printf("\nProduto: Pizza\n");
                printf("Valor: R$ 35,00\n");
                printf("Pedido confirmado! Obrigado pela preferencia.\n");
                break;

            case 3:
                printf("\nProduto: Cachorro-quente\n");
                printf("Valor: R$ 15,00\n");
                printf("Pedido confirmado! Obrigado pela preferencia.\n");
                break;

            case 4:
                printf("\nProduto: Batata frita\n");
                printf("Valor: R$ 12,00\n");
                printf("Pedido confirmado! Obrigado pela preferencia.\n");
                break;

            case 5:
                printf("\nProduto: Refrigerante\n");
                printf("Valor: R$ 7,00\n");
                printf("Pedido confirmado! Obrigado pela preferencia.\n");
                break;

            case 6:
                printf("\nSistema encerrado. Obrigado!\n");
                break;

            default:
                printf("\nOpcao invalida. Produto nao encontrado no cardapio.\n");
        }

    } while (opcao != 6);

    return 0;
}