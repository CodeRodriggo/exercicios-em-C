#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    float salario, bonus, salarioFinal, percentual;

    printf("Digite o salario mensal: R$ ");
    scanf("%f", &salario);

    if (salario < 3000.00) {
        percentual = 10.0;
    } else {
        percentual = 5.0;
    }

    bonus = salario * percentual / 100;
    salarioFinal = salario + bonus;

    printf("\n--- Resultado ---\n");
    printf("Salario original: R$ %.2f\n", salario);
    printf("Percentual de bonus: %.0f%%\n", percentual);
    printf("Valor do bonus: R$ %.2f\n", bonus);
    printf("Salario final: R$ %.2f\n", salarioFinal);

    return 0;
}