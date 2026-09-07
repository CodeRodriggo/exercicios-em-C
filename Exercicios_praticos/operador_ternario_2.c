#include <stdio.h>
#include <locale.h>
int main()
{
    // Usando operador ternario para simplificar codigo em uma unica linha//

    setlocale(LC_ALL, "portuguese");
    int numero1, numero2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &numero2);

    (numero1 > numero2) ? printf("\nnumero 1 e o maior") : (numero1 == numero2) ? printf("\nNumero iguais.")
                                                                                : printf("\nnumero 2 e o maior");

    return 0;
}