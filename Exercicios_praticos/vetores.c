#include <stdio.h>
int main()
{

    int recordes[5];

    printf("Enter 5 input values: \n\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &recordes[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", recordes[i]);
    }

    return 0;
}