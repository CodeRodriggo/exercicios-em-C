#include <stdio.h>

int main()
{

    float nota;

    printf("DIGITE SUA NOTA: ");
    scanf("%f", &nota);

    if (nota >= 7)
    {
        printf("BOM DESEMPENHO");
    }
    else if (nota >= 5)
    {
        printf("DESEMPENHO REGULAR");
    }
    else
    {
        printf("Baixo desempenho");
    }
    return 0;
}