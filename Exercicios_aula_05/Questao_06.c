#include <stdio.h>

int main()
{

    float temperatura;

    printf("Digite a temperatura atual: ");
    scanf("%f", &temperatura);

    if (temperatura > 25)
    {
        printf("QUENTE!");
    }
    else if (temperatura > 15)
    {
        printf("AGRADAVEL!");
    }
    else
    {
        printf("FRIO!");
    }

    return 0;
}