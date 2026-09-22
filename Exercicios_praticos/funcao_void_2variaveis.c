#include <stdio.h>

// void function com duas variaveis

void calculetteSquare(int number1, int number2)
{
    int sum = number1 + number2;
    printf(" The sum of %d + %d is equal to %d \n", number1, number2, sum);
}
int main()
{
    calculetteSquare(2, 2);
}