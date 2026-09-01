#include <stdio.h>

int main()
{

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("\nNUMERO PAR");
    }
    else
    {
        printf("\nNUMERO IMPAR");
    }

    return 0;
}