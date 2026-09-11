#include <stdio.h>

/*B → "Bom"
C → "Razoável"
D → "Ruim"
F → "Reprovado"*/

int main()
{

    char letra;
    printf("Digite uma letra desejavel: ");
    scanf("%c", &letra);

    switch (letra)
    {
    case 'A':
        printf("EXCELENTE");
        break;
    case 'B':
        printf("RAZOAVEL");
        break;
    case 'C':
        printf("RUIM");
        break;
    case 'D':
        printf("REPROVADO");
        break;
    default:
        printf("NOTA INVALIDA");
    }

    return 0;
}