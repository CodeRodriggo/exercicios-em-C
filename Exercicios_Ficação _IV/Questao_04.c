#include <stdio.h>
/* – Sistema de Classificação de Usuários
Uma empresa deseja classificar seus usuários de acordo com um código numérico:
1 - Administrador
2 - Gerente
3 - Analista
4 - Desenvolvedor
5 - Usuário
O programa deverá receber o código e apresentar o perfil correspondente.
Utilize switch.
Para códigos que não estejam entre 1 e 5, apresente:
Perfil inválido. */

int main()
{
    int opcao;
    printf("============ SISTEMA DE CLASSIFICACAO DE USUARIOS ============\n");
    printf("1- Administrador\n");
    printf("2- Gerente\n");
    printf("3- Analista\n");
    printf("4- Desenvolvedor\n");
    printf("5- Usuario\n");

    printf("\nDigite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Administrador\n");
        break;
    case 2:
        printf("Gerente\n");
        break;
    case 3:
        printf("Analista\n");
        break;
    case 4:
        printf("Desenvolvedor\n");
        break;
    case 5:
        printf("Usuario\n");
        break;
    default:
        printf("Perfil invalido, tente novamente!");
    }
}