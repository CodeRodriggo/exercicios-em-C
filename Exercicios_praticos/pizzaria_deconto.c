#include <stdio.h>

int main()
{

    float conta, pessoas, percentual, desconto, valorTotal, valorDesconto;

    printf("Digite o valor total da conta: ");
    scanf("%f$$", &conta);
    printf("\nDigite quantidade de pessoas: ");
    scanf("%f", &pessoas);
    printf("\nDigite o desconto em porcentagem: ");
    scanf("%f", &percentual);

    desconto = (conta * percentual) / 100;
    valorDesconto = conta - desconto;
    valorTotal = valorDesconto / pessoas;

    printf("\nValor da conta com desconto = %.2f R$", valorDesconto);
    printf("\nValor a ser pago por pessao = %.2f R$", valorTotal);
    return 0;
}