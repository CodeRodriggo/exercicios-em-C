#include <stdio.h>
int main()
{

    int i = 1, tabuada, n;

    printf("\nDigite a tabuada desejada: ");
    scanf("%d", &n);
    printf("\nTabuada de multiplicacao do numero: %d", n);

    while (i < 10)
    {
        tabuada = i * n;
        printf("\n%d", tabuada);
        i++;
    }
}