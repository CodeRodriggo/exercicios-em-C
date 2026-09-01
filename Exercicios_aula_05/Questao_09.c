#include <stdio.h>

int main()
{

    double salario;

    printf("Digite o salario: ");
    scanf("%lf", &salario);

    if (salario >= 5000)
    {
        printf("\nFaixa 3");
    }
    else if (salario >= 2000.01)
    {
        printf("Faixa 2");
    }
    else
    {
        printf("Faixa 1");
    }
    return 0;
}