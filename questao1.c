#include <stdio.h>
int main()
{

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero >= 0)
    {
        printf("numero e: %d = POSITIVO \n", numero);
    }
    else
    {
        printf("numero e: %d = NEGATIVO \n", numero);
    }
    return 0;
}