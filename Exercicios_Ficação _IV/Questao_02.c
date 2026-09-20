#include <stdio.h>
// Sistema de Atendimento Bancario
/* 1 - Saldo
2 - Extrato
3 - Transferência
4 - Pagamento
5 - Empréstimo
6 - Encerrar */

int main()
{
    int opcao;
    printf("============ SISTEMA DE ATENDIMENTO BANCARIO ============\n");
    printf("1- Saldo\n");
    printf("2- Extrato\n");
    printf("3- Transferencia\n");
    printf("4- Pagamento\n");
    printf("5- Emprestimo\n");
    printf("6- Encerrar\n");

    printf("\nDigite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Saldo\n");
        break;
    case 2:
        printf("Extrato\n");
        break;
    case 3:
        printf("Transferencia\n");
        break;
    case 4:
        printf("Pagamento\n");
        break;
    case 5:
        printf("Emprestimo\n");
        break;
    case 6:
        printf("Opecarao encerrada\n");
        break;
    default:
        printf("Opcao errada, tente novamente!");
    }
}