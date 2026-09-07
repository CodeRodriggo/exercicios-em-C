#include <stdio.h>
#include <stdbool.h>

// usando bool library

int main()
{
    bool par;
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);
    // printf("%d reprovado");

    par = n % 2 == 0;

    if (par)
    {
        printf("Numero PAR");
    }
    else
    {
        printf("Numero IMPAR");
    }
}