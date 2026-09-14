#include <stdio.h>
int main()
{
    // tabuada reversa.
    int i = 10, tabuada, n;

    printf("\nDigite a tabuada desejada: ");
    scanf("%d", &n);
    printf("\nTabuada de multiplicacao do numero: %d", n);

    while (i >= 1)
    {
        tabuada = i * n;
        printf("\n%d * %d = %d", n, i, tabuada);

        i--;
    }
}