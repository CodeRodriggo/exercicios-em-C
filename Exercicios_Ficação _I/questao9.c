#include <stdio.h>
int main()
{

    float compra, percentual, desconto, valorFinal;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &compra);

    if (compra >= 500.00)
    {
        percentual = 15.0;
    }
    else
    {
        percentual = 5.0;
    }

    desconto = compra * percentual / 100;
    valorFinal = compra - desconto;

    printf("\n--- Resultado ---\n");
    printf("Valor original: R$ %.2f\n", compra);
    printf("Desconto: %.0f%%\n", percentual);
    printf("Valor do desconto: R$ %.2f\n", desconto);
    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}