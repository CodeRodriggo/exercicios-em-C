#include <stdio.h>
int main()
{
    int estoque;

    printf("Digite a quantidade de produtos em estoque: ");
    scanf("%d", &estoque);

    if (estoque < 10)
    {
        printf("ATENCAO: Estoque baixo. Necessario realizar reposicao.\n");
    }

    return 0;
}