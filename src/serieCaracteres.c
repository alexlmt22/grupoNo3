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
    printf("---------------------------------");
}


void llSerieS6CFor(int llCantidad)
{
    printf("\nSerie S6C For:\n");
    for (int i = 0; i <= llCantidad; i++)
    {
        printf("%c ", 'a' + i);
    }
    printf("\n");
}

void llSerieS6CWhile(int llCantidad)
{
    printf("\nSerie S6C While:\n");
    int i = 0;
    while (i <= llCantidad)
    {
        printf("%c ", 'a' + i);
        i++;
    }
    printf("\n");
}

 void llSerieS6CDoWhile(int llCantidad)
{
    printf("\nSerie S6C Do While:\n");
    int i = 0;
    do
    {
        printf("%c ", 'a' + i);
        i++;
    } while (i <= llCantidad);
    printf("\n");
    printf("---------------------------------");
}

void llSerieS7CFor(int llCantidad)
{
    printf("\nSerie S7C For:\n");

    for (int i = 0; i <= llCantidad * 2 - 1; i++)
    {
        if (i % 2 == 0)
        {
            printf("%c ", 'a' + i);
        }
        else
        {
            printf("%c ", (i / 2) % 2 == 0 ? '+' : '-');
        }
    }

    printf("\n");
}

void llSerieS7CWhile(int llCantidad)
{
    printf("\nSerie S7C While:\n");
    int i = 0;
    while (i <= llCantidad * 2 - 1)
    {
        if (i % 2 == 0)
        {
            printf("%c ", 'a' + i);
        }
        else
        {
            printf("%c ", (i / 2) % 2 == 0 ? '+' : '-');
        }
        i++;
    }
    printf("\n");
}   

void llSerieS7CDoWhile(int llCantidad)
{
    printf("\nSerie S7C Do While:\n");
    int i = 0;
    do
    {
        if (i % 2 == 0)
        {
            printf("%c ", 'a' + i);
        }
        else
        {
            printf("%c ", (i / 2) % 2 == 0 ? '+' : '-');
        }
        i++;
    } while (i <= llCantidad * 2 - 1);
    printf("\n");
    printf("---------------------------------");
}

void llSerieS8CFor(int llCantidad)
{
    printf("\nSerie S8C For:\n");
    for (int i = 0; i <= llCantidad; i++)
    {
        char llLetra = 'a' + i;
        int llrepeticiones = 2 * (i + 1);
        for (int j = 0; j < llrepeticiones; j++)
        {
            printf("%c", llLetra);
        }
        printf(" ");
    }
    printf("\n");
}

void llSerieS8CWhile(int llCantidad)
{
    printf("\nSerie S8C While:\n");
    int i = 0;
    while (i <= llCantidad)
    {
        char llLetra = 'a' + i;
        int llrepeticiones = 2 * (i + 1);
        int j = 0;
        while (j < llrepeticiones)
        {
            printf("%c", llLetra);
            j++;
        }
        printf(" ");
        i++;
    }
    printf("\n");
}

void llSerieS8CDoWhile(int llCantidad)
{
    printf("\nSerie S8C Do While:\n");
    int i = 0;
    do
    {
        char llLetra = 'a' + i;
        int llrepeticiones = 2 * (i + 1);
        int j = 0;
        do
        {
            printf("%c", llLetra);
            j++;
        } while (j < llrepeticiones);
        printf(" ");
        i++;
    } while (i <= llCantidad);
    printf("\n");
    printf("---------------------------------");
}

void llSerieS9CFor(int llCantidad)
{
    printf("\nSerie S9C For:\n");
    for (int i = 0; i <= llCantidad; i++)
    {
        char llLetra = 'a' + i;
        int llrepeticiones = (i * 2) + 1;
        for (int j = 0; j < llrepeticiones; j++)
        {
            printf("%c", llLetra);
        }
        printf(" ");
    }
    printf("\n");
}

void llSerieS9CWhile(int llCantidad)
{
    printf("\nSerie S9C While:\n");
    int i = 0;
    while (i <= llCantidad)
    {
        char llLetra = 'a' + i;
        int llrepeticiones = (i * 2) + 1;
        int j = 0;
        while (j < llrepeticiones)
        {
            printf("%c", llLetra);
            j++;
        }
        printf(" ");
        i++;
    }
    printf("\n");
}

void llSerieS9CDoWhile(int llCantidad)
{
    printf("\nSerie S9C Do While:\n");
    int i = 0;
    do
    {
        char llLetra = 'a' + i;
        int llrepeticiones = (i * 2) + 1;
        int j = 0;
        do
        {
            printf("%c", llLetra);
            j++;
        } while (j < llrepeticiones);
        printf(" ");
        i++;
    } while (i <= llCantidad);
    printf("\n");
    printf("---------------------------------");
}

void llSerieS10CFor(int llCantidad) 
{
    printf("\nSerie S10C For:\n");
    int llfib1 = 1, llfib2 = 1, llfib3;
    
    for (int i = 0; i < llCantidad; i++) 
    {
        char letra = 'a' + i;
        int repeticiones;
        
        if (i < 3) {
            repeticiones = 1;  // Para a, b, c
        } else {
            repeticiones = llfib1 + llfib2; // Fib(n) = Fib(n-1) + Fib(n-2)
            llfib3 = llfib1 + llfib2;
            llfib1 = llfib2;
            llfib2 = llfib3;
        }

        for (int j = 0; j < repeticiones; j++) {
            printf("%c", letra);
        }
        printf(" ");
    }
    printf("\n");
}

void llSerieS10CWhile(int llCantidad) 
{
    printf("\nSerie S10C While:\n");
    int llfib1 = 1, llfib2 = 1, llfib3;
    int i = 0;

    while (i < llCantidad) 
    {
        char letra = 'a' + i;
        int repeticiones;

        if (i < 3) {
            repeticiones = 1;  // Para a, b, c
        } else {
            repeticiones = llfib1 + llfib2; // Fib(n) = Fib(n-1) + Fib(n-2)
            llfib3 = llfib1 + llfib2;
            llfib1 = llfib2;
            llfib2 = llfib3;
        }

        for (int j = 0; j < repeticiones; j++) {
            printf("%c", letra);
        }
        printf(" ");
        i++;
    }
    printf("\n");
}

void llSerieS10CDoWhile(int llCantidad) 
{
    printf("\nSerie S10C Do While:\n");
    int llfib1 = 1, llfib2 = 1, llfib3;
    int i = 0;

    do 
    {
        char letra = 'a' + i;
        int repeticiones;

        if (i < 3) {
            repeticiones = 1;  // Para a, b, c
        } else {
            repeticiones = llfib1 + llfib2; // Fib(n) = Fib(n-1) + Fib(n-2)
            llfib3 = llfib1 + llfib2;
            llfib1 = llfib2;
            llfib2 = llfib3;
        }

        for (int j = 0; j < repeticiones; j++) {
            printf("%c", letra);
        }
        printf(" ");
        i++;
    } while (i < llCantidad);
    printf("\n");
    printf("---------------------------------");
}
