#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int jogadorA, jogadorB, random;

    printf("Digite o valor do dado jogado pelo jogador A: ");
    scanf("%d", &jogadorA);
    printf("Digite o valor do dado jogado pelo jogador B: ");
    scanf("%d", &jogadorB);

    random = jogadorA;
    jogadorA = jogadorB;
    jogadorB = random;

    printf("\njogador A andará %d casas", jogadorA);
    printf("\njogador B andará %d casas", jogadorB);

    return 0;
}
