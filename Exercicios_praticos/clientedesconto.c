#include <stdio.h>

int main()
{

    double valor, percentual, desconto, valorTotal;

    printf("Digite o valor da compra: ");
    scanf("%lf", &valor);

    if (valor >= 1000)
    {
        percentual = 20;
        desconto = valor * 0.20;
    }
    else
    {
        percentual = 8;
        desconto = valor * 0.08;
    }

    valorTotal = valor - desconto;

    printf("\nO valor original da compra: %.2lf R$", valor);
    printf("\nO percentual do desoconto aplicado:%.0lf%% ", percentual);
    printf("\nO valor do desconto: %.2lf R$", desconto);
    printf("\nO valor final da compra: %.2lf R$", valorTotal);
    return 0;
}