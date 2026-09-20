#include <stdio.h>

int main()
{

    double desconto, valor, valorDesconto, percentual;

    printf("Digite o valor a pagar: ");
    scanf("%lf", &valor);

    if (valor >= 200)
    {
        desconto = valor * 0.10;
    }
    else if (valor >= 100)
    {
        desconto = valor * 0.05;
    }
    else
    {
        printf("Sem desconto.");
    }

    valorDesconto = valor - desconto;
    percentual = (desconto / valor) * 100;

    printf("\nValor total recebido: %.2lfR$", valor);
    printf("\nValor do desconto: %.2lfR$", desconto);
    printf("\nValor do percentual de desconto: %.0lf%%", percentual);
    printf("\nValor total pago: %.2lfR$", valorDesconto);

    return 0;
}