#include <stdio.h>

/* Sistema Integrado de Atendimento
Uma empresa de tecnologia deseja criar um sistema de atendimento com diferentes setores:
1 - Suporte Técnico
2 - Financeiro
3 - Recursos Humanos
4 - Comercial
5 - Desenvolvimento
Utilize switch para identificar o setor escolhido.
Para cada setor, o programa deverá solicitar uma prioridade:
1 - Baixa
2 - Média
3 - Alta
Utilize switch novamente para classificar a prioridade.
Ao final, utilize o operador ternário para informar:
Atendimento prioritário: Sim/Não
Considere atendimento prioritário somente quando a prioridade escolhida for Alta. */

int main()
{
    int opcao, opcao2;

    printf("\n===========Sistema Integrado de Atendimento============\n\n");

    printf("1 - Suporte Tecnico \n");
    printf("2 - Financeiro \n");
    printf("3 - Recursos Humanos \n");
    printf("4 - Comercial \n");
    printf("5 - Desenvolvimento");

    printf("\n\nDigite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Atendimento escolhido: Suporte Tecnico\n\n");
        break;
    case 2:
        printf("Atendimento escolhido: Financeiro\n\n");
        break;
    case 3:
        printf("Atendimento escolhido: Recursos Humanos\n\n");
        break;
    case 4:
        printf("Atendimento escolhido: Comercial\n\n");
        break;
    case 5:
        printf("Atendimento escolhido: Desenvolvimento\n\n");
        break;
    default:
        printf("\nOpcao invalida.\n");
        return 0;
    }

    printf("Digite o nivel de prioridade para o antendimento: ");
    scanf("%d", &opcao2);

    switch (opcao2)
    {
    case 1:
        printf("Prioridade: Alta");
        break;
    case 2:
        printf("Prioridade: Media");
        break;
    case 3:
        printf("Prioridade: Baixa");
        break;
    }
    printf("\nAtendimento prioritario: ");
    (opcao2 == 1) ? printf("SIM") : printf("NAO");
    return 0;
}