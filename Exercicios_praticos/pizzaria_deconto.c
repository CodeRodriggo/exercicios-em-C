#include <stdio.h>

int main()
{

    float conta, pessoas, percentual, desconto, valorTotal;

    printf("Digite o valor total da conta: ");
    scanf("%f$$", &conta);
    printf("\nDigite quantidade de pessoas: ");
    scanf("%f", &pessoas);
    printf("\nDigite o desconto em porcentagem: ");
    scanf("%f", &percentual);

    desconto = conta - (conta * percentual / 100); // valor subtraindo o desconto
    valorTotal = desconto / pessoas;

    printf("\nValor da conta com desconto = %.2f R$", desconto);
    printf("\nValor a ser pago por pessao = %.2f R$", valorTotal);
    return 0;
}