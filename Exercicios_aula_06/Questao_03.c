#include <stdio.h>

// Sistema de Desconto em Compras
// Uma loja deseja calcular o desconto concedido aos seus clientes de acordo com o valor da compra
/* Até R$ 500,00 → sem desconto;
• De R$ 500,01 até R$ 1.000,00 → 5%;
• De R$ 1.000,01 até R$ 2.000,00 → 10%;
• Acima de R$ 2.000,00 → 15%.
O programa deverá receber o valor da compra, calcular o desconto e apresentar:
• valor original;
• percentual de desconto;
• valor do desconto;
• valor final da compra. */

int main()
{
    double valor, desconto, percentual, valorFinal;

    printf("\nDigite o valor: ");
    scanf("%lf", &valor);

    if (valor <= 500.00)
    {
        desconto = valor * 0;
        percentual = 0;
        printf("Sem desconto\n");
    }
    else if (valor <= 1000.0)
    {
        desconto = valor * 0.05;
        percentual = 5;
    }
    else if (valor <= 2000.0)
    {
        desconto = valor * 0.10;
        percentual = 10;
    }
    else
    {
        desconto = valor * 0.15;
        percentual = 15;
    }

    valorFinal = valor - desconto;

    printf("\nValor original %.2lfR$", valor);
    printf("\nPercentual de desconto %.0lf%%", percentual);
    printf("\nValor do desconto %.2lfR$", desconto);
    printf("\nValor final da conta %.2lfR$", valorFinal);

    return 0;
}