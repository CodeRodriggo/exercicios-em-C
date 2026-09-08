#include <stdio.h>

int main() {
    float valorCompra, desconto, valorDesconto, valorPagar;
    int formaPagamento;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorCompra);

    printf("\nForma de pagamento:\n");
    printf("1 - Dinheiro\n");
    printf("2 - Cartao de Debito\n");
    printf("3 - Cartao de Credito\n");
    printf("4 - Pix\n");

    printf("Digite a forma de pagamento: ");
    scanf("%d", &formaPagamento);

    switch (formaPagamento) {
        case 1:
            desconto = 10;
            break;

        case 2:
            desconto = 5;
            break;

        case 3:
            desconto = 0;
            break;

        case 4:
            desconto = 10;
            break;

        default:
            printf("Forma de pagamento invalida!\n");
            return 0;
    }

    valorDesconto = valorCompra * desconto / 100;
    valorPagar = valorCompra - valorDesconto;

    printf("\n=== Resultado ===\n");
    printf("Valor da compra: R$ %.2f\n", valorCompra);
    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Valor a pagar: R$ %.2f\n", valorPagar);

    return 0;
}