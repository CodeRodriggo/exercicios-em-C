#include <stdio.h>

/* Um supermercado classifica os produtos em categorias:
1 → "Frios e Laticínios"
2 → "Carnes e Peixes"
3 → "Hortifruti"
4 → "Padaria"
5 → "Bebidas"
Pergunta:
Crie um programa que solicite um código de 1 a 5 e exiba a categoria correspondente. */

int main()
{

    int n;

    do
    {
        printf("Digite a categoria que deseja de 1 - 5: ");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            printf("\nFrios e Laticinios");
            break;
        case 2:
            printf("\nCarnes e Peixes");
            break;
        case 3:
            printf("\nHortifruti");
            break;
        case 4:
            printf("\nPadaria");
            break;
        case 5:
            printf("\nBebidas");
            break;
        }
    } while (n < 1 || n > 5);

    return 0;
}