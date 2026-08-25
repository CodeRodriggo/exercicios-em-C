#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero >= 0)
    {
        printf("numero é: %d = POSITIVO \n", numero);
    }
    else
    {
        printf("numero é: %d = NEGATIVO \n", numero);
    }
    return 0;
}