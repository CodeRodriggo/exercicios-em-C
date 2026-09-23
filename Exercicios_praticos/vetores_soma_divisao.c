#include <stdio.h>
int main()
{

    int recordes[5], total = 0, soma = 0, i;

    printf("Enter 5 input values: \n\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &recordes[i]);
        soma += recordes[i];
    }

    total = soma / 5;

    printf("Total de recordes = %d", total);

    return 0;
}
