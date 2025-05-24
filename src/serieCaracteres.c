#include <stdio.h>

void llSerieS1CFor(int llCantidad)
{
    printf("\nSerie S1C For:\n");
    for (int i = 0; i <= llCantidad; i++)
    {
         printf("%c ", (i % 2 == 0) ? '+' : '-');
    }
    printf("\n");
}

void llSerieS1CWhile(int llCantidad)
{
    printf("\nSerie S1C While:\n");
    int i = 0;
    while (i <= llCantidad)
    {
        printf("%c ", (i % 2 == 0) ? '+' : '-');
        i++;
    }
    printf("\n");
}

void llSerieS1CDoWhile(int llCantidad)
{
    printf("\nSerie S1C Do While:\n");
    int i = 0;
    do
    {
        printf("%c ", (i % 2 == 0) ? '+' : '-');
        i++;
    } while (i <= llCantidad);
    printf("\n");
}
