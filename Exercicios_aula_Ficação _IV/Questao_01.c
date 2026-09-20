#include <stdio.h>

// Sistema de Avaliação Acadêmica

int main()
{
    float nota;

    printf("\nDigite sua nota: ");
    scanf("%f", &nota);

    if (nota >= 9)
    {
        printf("Excelente");
    }
    else if (nota >= 7)
    {
        printf("Bom");
    }
    else if (nota >= 5)
    {
        printf("Recuperacao");
    }
    else
    {
        printf("Reprovado");
    }

    return 0;
}