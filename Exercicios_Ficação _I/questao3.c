#include <stdio.h>

int main()
{

    float orcamento;

    printf("Digite o orcamento da viagem: R$ ");
    scanf("%f", &orcamento);

    if (orcamento >= 10000)
    {
        printf("Maria e Joao vao fazer uma viagem INTERNACIONAL.");
    }
    else
    {
        printf("Maria e Joao vao fazer uma viagem NACIONAL.");
    }

    return 0;
}