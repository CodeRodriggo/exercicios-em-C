#include <stdio.h>

int main()
{
    char name[50];
    char sexo;
    int idade;

    printf("Digite seu nome completo: ");
    fgets(name, 50, stdin);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu sexo: ");
    scanf(" %c", &sexo);

    printf("\n\n\nNome: %s", name);
    printf("Idade: %d\n", idade);
    printf("Sexo: %c\n", sexo);

    if (sexo == 'M' || sexo == 'm')
    {
        printf("\nMASCULINO");
    }
    else
    {
        printf("FEMININO\n");
    }
    return 0;
}
