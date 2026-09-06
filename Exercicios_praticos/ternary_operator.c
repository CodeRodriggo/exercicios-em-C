#include <stdio.h>
#include <locale.h>

/*USANDO TERNARY OPERATOR PARA VER SE O NUMERO É PAR OU ÍMPAR*/

int main()
{
    setlocale(LC_ALL, "portuguese");
    int numero = 23;

    /* Usando Ternary operator para simplificar o codigo, fica mais limpo e facil de
    decifrar, mas é bom usar apenas para pouca linhas de if else statement */
    (numero % 2 == 0) ? printf("Numero PAR") : printf("Numero IMPAR");

    return 0;
}