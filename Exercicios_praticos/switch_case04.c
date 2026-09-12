#include <stdio.h>

/* Um banco deseja implementar um sistema de atendimento automatizado , onde o cliente pode
escolher uma operação escrevendo um número correspondente. O menu de opções é o seguinte:
1 → "Saque"
2 → "Depósito"
3 → "Transferência"
4 → "Sair
*/

int main()
{

    int n;

    printf("Digite uma opcao desejada: ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("\nSaque");
        break;
    case 2:
        printf("\nDeposito");
        break;
    case 3:
        printf("\nTransferencia");
        break;
    case 4:
        printf("\nSair");
        break;

    default:
        printf("\nOpcao invalida, tente novamente.");
        break;
    }

    return 0;
}