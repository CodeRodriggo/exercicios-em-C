#include <stdio.h>
int main()
{
    int i, n, soma;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (i = 0; i < 100; i = i + 2)
    {
        soma = n + i;
        printf("%d\n", soma);
    }
}