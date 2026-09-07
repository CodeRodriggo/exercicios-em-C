#include <stdio.h>
#include <stdbool.h>

//usando bool library


int main()
{
    bool aprovado;
    int n;

    printf("Digite a sua nota: ");
    scanf("%d", &n);
    //printf("%d reprovado");

    aprovado = n >= 7;

    if(aprovado){
        printf("APROVADO");
    }else{
        printf("REPROVADO");
    }

}