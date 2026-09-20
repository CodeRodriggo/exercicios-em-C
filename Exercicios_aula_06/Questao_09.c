#include <stdio.h>
#include <locale.h>

/* Sistema de Classificação de Temperatura
Uma estação meteorológica necessita classificar uma temperatura informada pelo usuário:
• Temperatura menor que 0 °C → Muito frio;
• 0 °C a 15 °C → Frio;
• 16 °C a 25 °C → Agradável;
• 26 °C a 35 °C → Quente;
• Acima de 35 °C → Muito quente.
Utilize else if.
Ao final, utilize o operador ternário para informar se a temperatura está acima de 30 °C. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    float temp;

    printf("\n============SISTEMA DE CLASSIFICACAO DE TEMPERATURA============\n\n\n");
    printf("Digite a temperatura atual: \n");
    scanf("%f", &temp);

    if (temp < 0)
    {
        printf("Temperatura atual: %.1f °C, Muito frio!\n", temp);
    }
    else if (temp <= 15)
    {
        printf("Temperatura atual: %.1f °C, Frio\n", temp);
    }
    else if (temp <= 25)
    {
        printf("Temperatura atual: %.1f °C, Agradavel\n", temp);
    }
    else if (temp <= 35)
    {
        printf("Temperatura atual: %.1f °C, Quente\n", temp);
    }
    else
    {
        printf("Temperatura atual: %.1f °C, Muito quente! use protetor solar!\n", temp);
    }

    (temp > 30) ? printf("Temperatura esta acima de 30 °C, tome cuidado use sempre protetor solar\n")
                : printf("\nTemperatura igual ou abaixo de 30 °C.");

    return 0;
}