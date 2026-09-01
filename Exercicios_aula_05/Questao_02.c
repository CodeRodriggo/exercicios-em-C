#include <stdio.h>

int main()
{
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("MAIOR IDADE");
    }
    else
    {
        printf("MENOR IDADE");
    }
    return 0;
}