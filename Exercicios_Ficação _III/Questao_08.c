#include <stdio.h>

int main()
{

    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("ADULTO");
    }
    else if (idade >= 13)
    {
        printf("ADOLESCENTE");
    }
    else
    {
        printf("CRINCA");
    }
    return 0;
}