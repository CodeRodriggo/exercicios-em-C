#include <stdio.h>

/* Uma instituição financeira deseja realizar uma análise simplificada para concessão de crédito.
O programa deverá receber:
• idade;
• renda mensal;
• valor solicitado.
Considere as seguintes regras:
• Menor de 18 anos → crédito não permitido;
• Renda menor que R$ 2.000,00 → crédito não recomendado;
• Renda entre R$ 2.000,00 e R$ 4.999,99 → análise adicional;
• Renda igual ou superior a R$ 5.000,00 → crédito pré-aprovado.
Após determinar a situação, utilize o operador ternário para informar:
Cliente apto para prosseguir?
Sim
Não */

int main()
{
    double renda, valorSolicitado;
    int idade;

    printf("\nDigite a idade: ");
    scanf("%d", &idade);
    printf("\nDigite a renda: ");
    scanf("%lf", &renda);
    printf("\nDigite o valor solicitado: ");
    scanf("%lf", &valorSolicitado);

    if (idade < 18)
    {
        printf("Credito nao permitido\n");
    }
    else if (renda < 2000.00)
    {
        printf("credito nao recomendado\n");
    }
    else if (renda < 5000.00)
    {
        printf("analise adicional\n");
    }
    else
    {
        printf("credito pre-aprovado\n");
    }

    printf("\nCliente apto para prosseguir?\n\n");
    (idade < 18 || renda < 2000.00) ? printf("Cliente inapto") : printf("Cliente Apto");

    return 0;
}