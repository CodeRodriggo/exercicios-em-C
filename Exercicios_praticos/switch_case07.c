#include <stdio.h>

int main()
{

    int opcao;

    printf("\n=======================================");
    printf("\nSistema de Pedidos Restaurante");
    printf("\n=======================================");
    printf("\nCardapio Digital:");
    printf("\n-----------------");
    printf("\n1 - Hambúrguer Artesanal  - R$ 25,00");
    printf("\n2 - Pizza Calabresa       - R$ 45,00");
    printf("\n3 - Prato Executivo       - R$ 35,00");
    printf("\n4 - Refrigerante          - R$ 8,00");
    printf("\n5 - Sobremesa             - R$ 12,00");
    printf("\n6 - Encerrar Pedido");
    do
    {
        printf("\nDigite o codigo do produto desejado: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("\nProduto escolhido: Hambúrguer Artesanal\n");
            printf("\nValor: R$ 25,00");
            printf("\n\nPedido confirmado! Aguarde o preparo.  ");
            break;
        case 2:
            printf("\nProduto escolhido: Pizza Calabresa\n");
            printf("\nValor: R$ 45,00");
            printf("\n\nPedido confirmado! Aguarde o preparo.  ");
            break;
        case 3:
            printf("\nProduto escolhido: Prato Executivo\n");
            printf("\nValor: R$ 35,00");
            printf("\n\nPedido confirmado! Aguarde o preparo.  ");
            break;
        case 4:
            printf("\nProduto escolhido: Refrigerante\n");
            printf("\nValor: R$ 8,00");
            printf("\n\nPedido confirmado! Aguarde o preparo.  ");
            break;
        case 5:
            printf("\nProduto escolhido: Sobremesa\n");
            printf("\nValor: R$ 12,00");
            printf("\n\nPedido confirmado! Aguarde o preparo.");
            break;
        case 6:
            printf("\nPedido encerrado.\n");
            break;
        default:
            printf("\nOpcao invalida tente novamente.\n");
        }
    } while (opcao < 1 || opcao > 6);
    return 0;
}