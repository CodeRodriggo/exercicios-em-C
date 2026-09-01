#include <stdio.h>

int main()
{

    float media;

    printf("Digite sua media final: ");
    scanf("%f", &media);

    if (media >= 7.0)
    {
        printf("\nAPROVADO");
    }
    else if (media >= 5.0)
    {
        printf("\nRECUPERACAO");
    }
    else
    {
        printf("\nREPROVADO");
    }
}