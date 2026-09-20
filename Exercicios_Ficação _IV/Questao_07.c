#include <stdio.h>

/* Sistema de Faixa Etária:
Desenvolva um programa que receba a idade de uma pessoa e classifique sua faixa etária:
• 0 a 12 anos → Criança;
• 13 a 17 anos → Adolescente;
• 18 a 59 anos → Adulto;
• 60 anos ou mais → Idoso.
O programa deverá utilizar else if.
Também deverá utilizar o operador ternário para informar se a pessoa é maior de idade. */

int main()
{
    int idade;

    printf("\nDigite a idade: ");
    scanf("%d", &idade);

    if (idade <= 12)
    {
        printf("Crianca\n");
    }
    else if (idade <= 17)
    {
        printf("Adolescente\n");
    }
    else if (idade <= 59)
    {
        printf("Adulto\n");
    }
    else
    {
        printf("Idoso\n");
    }

    printf("\nMaior ou Menor de idade\n");
    (idade < 18) ? printf("Menor de idade") : printf("Maior de idade");

    return 0;
}