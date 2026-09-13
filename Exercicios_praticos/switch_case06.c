#include <stdio.h>
int main()
{

    int opcao;

    printf("\n=======================================");
    printf("\nSistema Inteligente de Atendimento");
    printf("\n=======================================");

    printf("\nMenu de atendimento:");
    printf("\n1- Suporte tecnico");
    printf("\n2- Financeiro");
    printf("\n3- Recursos humanos");
    printf("\n4- Comercial");
    printf("\n5- Encerrar Atendimento");
    printf("\n\nDigite a opcao desejada: ");
    scanf("%d", &opcao);

    printf("\n============= Setor ============");
    switch (opcao)
    {

    case 1:
        printf("\nSetor selecionado: Suporte tecnico\n");
        break;
    case 2:
        printf("\nSetor selecionado: Financeiro\n");
        break;
    case 3:
        printf("\nSetor selecionado: Recursos humanos\n");
        break;
    case 4:
        printf("\nSetor selecionado: Comercial\n");
        break;
    case 5:
        printf("\nAtendimento encerrado.\n");
        break;
    default:
        printf("\nOpcao invalida. Escolha um setor disponivel.\n");
    }
    printf("\n=========== Orientacao ============");
    switch (opcao)
    {
    case 1:
        printf("\nAtendimento para problemas relacionados a sistemas, computadores, redes e equipamentos.");
        printf("\nSua solicitacao sera direcionada para a equipe de tecnologia.");
        break;
    case 2:
        printf("\nAtendimento para duvidas sobre pagamentos, cobrancas, contratos e faturamento.\n\n");
        break;
    case 3:
        printf("\nAtendimento para assuntos relacionados a colaboradores, beneficios e documentos internos.\n\n");
        break;
    case 4:
        printf("\nAtendimento para propostas, vendas, clientes e negociacoes comerciais.\n\n");
        break;
    case 5:
        printf("\nAtendimento encerrado.\n");
        break;
    default:
        printf("\nTente novamente.");
    }
}