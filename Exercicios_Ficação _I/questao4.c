#include <stdio.h>

int main() {

    float conta, desconto, valorFinal;

    printf("Digite o valor da conta: R$ ");
    scanf("%f", &conta);

    if (conta >= 500) {
        desconto = conta * 0.15;
    } else {
        desconto = conta * 0.05;
    }

    valorFinal = conta - desconto;

    printf("\n===== CUPOM FISCAL =====\n");
    printf("Valor original: R$ %.2f\n", conta);
    printf("Valor do desconto: R$ %.2f\n", desconto);
    printf("Valor com desconto: R$ %.2f\n", valorFinal);
    printf("========================\n");

    return 0;
}