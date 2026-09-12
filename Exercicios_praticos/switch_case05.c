#include <stdio.h>

int main()
{

    double valor, desconto, valorTotal;
    int opcao;

    printf("SISTEMA  DE CALCULO DE DESCONTO");
    printf("\n-------------------------------");
    printf("\n\nDigite  o valor  da compra: R$ ");
    scanf("%lf", &valor);

    printf("\nForma de pagamento disponiveis: ");
    printf("\n1 PIX - (20%% de desconto) ");
    printf("\n2 Debito - (15%% de desconto)");
    printf("\n3 Credito - (5%% de desconto)");
    printf("\n\nEscolha a forma de pagamento: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        desconto = valor * 0.20;
        break;
    case 2:
        desconto = valor * 0.15;
        break;
    case 3:
        desconto = valor * 0.05;
        break;

    default:
        printf("Opcao invalida");
        break;
    }

    valorTotal = valor - desconto;

    printf("\n---------- Resumo da Compra ----------");

    switch (opcao)
    {
    case 1:
        printf("\nSua forma de pagamento foi: PIX");
        break;
    case 2:
        printf("\nSua forma de pagamento foi: Debito");
        break;
    case 3:
        printf("\nSua forma de pagamento foi: Credito");
        break;
    }

    printf("\nValor da compra: R$ %.2lf", valor);
    printf("\nValor do desconto: R$ %.2lf", desconto);
    printf("\nValor a pagar: R$ %.2lf", valorTotal);

    return 0;
}