#include <stdio.h>

int main()
{

    float nota;

    printf("Digite sua nota: ");
    scanf("%f", &nota);
    if (nota >= 7.0)
    {
        printf("\nAPROVADO");
    }
    else
    {
        printf("\nREPROVADO");
    }
}