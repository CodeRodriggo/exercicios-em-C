#include <stdio.h>

/* Questão 6 – Sistema de Transporte
Uma empresa de transporte deseja identificar o tipo de veículo utilizado em uma viagem.
O usuário deverá informar:
1 - Motocicleta
2 - Automóvel
3 - Van
4 - Ônibus
5 - Caminhão
O programa deverá utilizar switch para apresentar o tipo de veículo selecionado.
Além disso, deverá informar se o veículo é classificado como veículo pesado, utilizando o operador ternário.
Considere como veículos pesados:
• Ônibus;
• Caminhão. */

int main()
{
    int opcao;

    printf("1- Motocicleta \n");
    printf("2- Automovel \n");
    printf("3- Van \n");
    printf("4- Ônibus \n");
    printf("5- Caminhão \n");

    printf("\nDigite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Motocicleta\n");
        break;
    case 2:
        printf("Automovel\n");
        break;
    case 3:
        printf("Van\n");
        break;
    case 4:
        printf("Onibus\n");
        break;
    case 5:
        printf("Caminhao\n");
        break;
    }

    (opcao == 4 || opcao == 5) ? printf("Veiculo Pesado") : printf("Veiculo Leve");
}