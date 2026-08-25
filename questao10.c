#include <stdio.h>
int main()
{
    int idade, tempoEmpresa;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu tempo de empresa, em anos: ");
    scanf("%d", &tempoEmpresa);

    if (idade >= 18 && tempoEmpresa >= 1)
    {
        printf("Acesso autorizado.\n");
    }
    else
    {
        printf("Acesso nao autorizado.\n");
    }

    return 0;
}