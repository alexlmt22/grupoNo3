#include <stdio.h>

void llSerieS1CFor (int llnumero)
{
    for (int i = 1; i <= llnumero; i++)
    {
        if (i % 2 == 0)
        {
            printf("%c ", "+ ");
        }
        else
        {
            printf("%c ", "- ");
        }
    }
    printf("\n");
}


