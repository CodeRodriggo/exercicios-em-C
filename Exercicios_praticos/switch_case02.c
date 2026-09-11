#include <stdio.h>

/*B → "Bom"
C → "Razoável"
D → "Ruim"
F → "Reprovado"*/

int main()
{

    char letra;
    printf("Digite sua grade: ");
    scanf("%c", &letra);

    switch (letra)
    {
        /* Usando o empilhamento de case para se caso o usuario digite
        a letra Maiuscula o minuscula; */
    case 'A':
    case 'a':
        printf("EXCELENTE");
        break;
    case 'B':
    case 'b':
        printf("RAZOAVEL");
        break;
    case 'C':
    case 'c':
        printf("RUIM");
        break;
    case 'D':
    case 'd':
        printf("REPROVADO");
        break;
    default:
        printf("NOTA INVALIDA");
    }

    return 0;
}