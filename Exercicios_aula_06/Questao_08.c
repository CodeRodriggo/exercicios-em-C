#include <stdio.h>

// Sistema de Pagamento
/* Uma empresa disponibiliza diferentes formas de pagamento:
1 - PIX
2 - Débito
3 - Crédito
4 - Boleto
O programa deverá receber:
• valor da compra;
• forma de pagamento.
Aplicar os seguintes descontos:
• PIX → 20%;
• Débito → 15%;
• Crédito → 5%;
• Boleto → 10%.
Utilize switch para identificar a forma de pagamento.
Ao final, apresente:
• forma de pagamento;
• valor da compra;
• percentual de desconto;
• valor do desconto;
• valor final. */

int main()
{
    float valor, valorFinal, desconto, percentual;
    int opcao;

    printf("\n===========Sistema de Pagamento============\n\n");

    printf("Digite o valor da compra:\n");
    scanf("%f", &valor);

    printf("Escolha a forma de pagamento: \n");
    printf("1 - PIX \n");
    printf("2 - Debito \n");
    printf("3 - Credito \n");
    printf("4 - Boleto \n");
    printf("Opcao escolhida: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Forma de pagamento: PIX\n");
        desconto = valor * 0.20;
        percentual = 20;
        break;
    case 2:
        printf("Forma de pagamento: Debito\n");
        desconto = valor * 0.15;
        percentual = 15;
        break;
    case 3:
        printf("Forma de pagamento: Credito\n");
        desconto = valor * 0.05;
        percentual = 5;
        break;
    case 4:
        printf("Forma de pagamento: Boleto\n");
        desconto = valor * 0.10;
        percentual = 10;
        break;
    default:
        printf("\nOpcao invalida.\n");
    }

    valorFinal = valor - desconto;

    printf("Valor da compra: %.2f\n", valor);
    printf("Percentual de desconto: %.f%%\n", percentual);
    printf("Valor do desconto: %.2f\n", desconto);
    printf("Valor final: %.2f\n", valorFinal);
}