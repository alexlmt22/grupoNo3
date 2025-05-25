#include <stdio.h>
#include <stdbool.h>
#include "../lib/tool.h"

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

void liaserie2cFor(int lianroSigno)
{
    char signo = '+';
    int a = 0, b = 1, c;
 
    printf("\nSerie 2 de Caracteres For:\n");
    for (int i = 1; i <= lianroSigno; i++)
 {
    c = a + b;
    a = b;
    b = c;

    for (int j = 1; j <= a; j++)
        printf("%c ", signo );

    printf("\t");
 }
    printf("\n");
}

void liaserie2cWhile(int lianroSigno)
{
    char signo = '+';
    int a = 0, b = 1, c;
    int i = 1;
 
    printf("\nSerie 2 de Caracteres While:\n");
    while(i <= lianroSigno)
 {
    c = a + b;
    a = b;
    b = c;

    for (int j = 1; j <= a; j++)
        printf("%c ", signo );

    printf("\t");
    i++;
 }
    printf("\n");
}

void liaserie2cDoWhile(int lianroSigno)
{
    char signo = '+';
    int a = 0, b = 1, c;
    int i = 1;
 
    printf("\nSerie 2 de Caracteres DoWhile:\n");
    do
    {
        c = a + b;
        a = b;
        b = c;

        for (int j = 1; j <= a; j++)
        printf("%c ", signo );

        printf("\t");
        i++;
    } 
        while (i <= lianroSigno);
        printf("\n");
} 

bool liaesPrimo(int lian) 
{
    if (lian < 2) return false;
    for (int i = 2; i * i <= lian; i++) 
    {
        if (lian % i == 0) return false;
    }
    return true;
}

void liaserie3cFor(int lianroTerminos)
{
    char signo = '+';
    int contador = 0;
    int num = 2;

    printf("\nSerie 3 de Caracteres con numeros primos For:\n");

    for (; contador < lianroTerminos; num++) 
    {
        if (liaesPrimo(num)) 
        {
            for (int j = 1; j <= num; j++)
                printf("%c ", signo);
            printf("\t");
            contador++;
        }
     }
        printf("\n");
}   

void liaserie3cWhile(int lianroTerminos)
{
    char signo = '+';
    int contador = 0;
    int num = 2;

    printf("\nSerie 3 de Caracteres con numeros primos While:\n");

    while (contador < lianroTerminos) 
    {
        if (liaesPrimo(num)) 
        {
            int j = 1;
            while (j <= num) 
            {
                printf("%c ", signo);
                j++;
            }
                printf("\t");
                contador++;
        }
            num++;
    }
        printf("\n");
}

void liaserie3cDoWhile(int lianroTerminos)
{
    char signo = '+';
    int contador = 0;
    int num = 2;

    printf("\nSerie 3 de Caracteres con numeros primos DoWhile:\n");

    do {
        if (liaesPrimo(num)) 
        {
            int j = 1;
            do 
            {
                printf("%c ", signo);
                j++;
            } 
            while (j <= num);
            printf("\t");
            contador++;
        }
            num++;
    } 
        while (contador < lianroTerminos);
        printf("\n");
}

void liaserie4cFor(int lianroTerminos)
{
    char simbolos[] = {'+', '-', '*', '/'};

    printf("\nSerie 4 de Caracteres For:\n");
    for (int i = 0; i < lianroTerminos; i++) 
    {
        printf("%c ", simbolos[i % 4]);
    }
        printf("\n");
}

void liaserie4cWhile(int lianroTerminos)
{
    char simbolos[] = {'+', '-', '*', '/'};

    printf("\nSerie 4 de Caracteres While:\n");
    int i = 0;
    while (i < lianroTerminos) 
    {
        printf("%c ", simbolos[i % 4]);
        i++;
    }
        printf("\n");
}

void liaserie4DoWhile(int lianroTerminos)
{
    char simbolos[] = {'+', '-', '*', '/'};

    printf("\nSerie 4 de Caracteres DoWhile:\n");
    int i = 0;
    do 
    {
        printf("%c ", simbolos[i % 4]);
        i++;
    } 
        while (i < lianroTerminos);
        printf("\n");
}

void liaserie5cFor(int lianroTerminos)
{
    char simbolos[] = {'\\', '|', '/', '-'};

    printf("\nSerie 5 de Caracteres For:\n");
    for (int i = 0; i < lianroTerminos; i++)
    {
        printf("%c ", simbolos[i % 4]);
    }
        printf("\n");
}

void liaserie5cWhile(int lianroTerminos)
{
    char simbolos[] = {'\\', '|', '/', '-'};

    printf("\nSerie 5 de Caracteres While:\n");
    int i = 0;
    while (i < lianroTerminos)
    {
        printf("%c ", simbolos[i % 4]);
        i++; 
    }
        printf("\n");
}

void liaserie5cDoWhile(int lianroTerminos)
{
    char simbolos[] = {'\\', '|', '/', '-'};

    printf("\nSerie 5 de Caracteres DoWhile:\n");
    int i = 0;
    do
    {
        printf("%c ", simbolos[i % 4]);
        i++;
    } 
        while (i < lianroTerminos);
        printf("\n");
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
        char llLetra = 'a' + i;
        int llrepeticiones;
        
        if (i < 3) {
            llrepeticiones = 1;
        } else {
            llrepeticiones = llfib1 + llfib2;
            llfib3 = llfib1 + llfib2;
            llfib1 = llfib2;
            llfib2 = llfib3;
        }

        for (int j = 0; j < llrepeticiones; j++) {
            printf("%c", llLetra);
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
        char llLetra = 'a' + i;
        int llrepeticiones;

        if (i < 3) {
            llrepeticiones = 1;
        } else {
            llrepeticiones = llfib1 + llfib2;
            llfib3 = llfib1 + llfib2;
            llfib1 = llfib2;
            llfib2 = llfib3;
        }

        for (int j = 0; j < llrepeticiones; j++) {
            printf("%c", llLetra);
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
        char llLetra = 'a' + i;
        int llrepeticiones;

        if (i < 3) {
            llrepeticiones = 1;
        } else {
            llrepeticiones = llfib1 + llfib2;
            llfib3 = llfib1 + llfib2;
            llfib1 = llfib2;
            llfib2 = llfib3;
        }

        for (int j = 0; j < llrepeticiones; j++) {
            printf("%c", llLetra);
        }
        printf(" ");
        i++;
    } while (i < llCantidad);
    printf("\n");
    printf("---------------------------------");
}

void llControladorSerieCaracteres()
{
   int leaNumero = 0;
   leaNumero = leaValidarEntero
   llSerieS1CFor(leaNumero);
   llSerieS1CWhile(leaNumero);
   llSerieS1CDoWhile(leaNumero);
   liaserie2cFor(leaNumero);
   liaserie2cWhile(leaNumero);
   liaserie2cDoWhile(leaNumero);
   liaserie3cFor(leaNumero);
   liaserie3cWhile(leaNumero);
   liaserie3cDoWhile(leaNumero);
   liaserie4cFor(leaNumero);
   liaserie4cWhile(leaNumero);
   liaserie4DoWhile(leaNumero);
   liaserie5cFor(leaNumero);
   liaserie5cWhile(leaNumero);
   liaserie5cDoWhile(leaNumero);
   llSerieS2CFor(leaNumero);
   llSerieS2CWhile(leaNumero);
   llSerieS2CDoWhile(leaNumero);
   llSerieS6CFor(leaNumero);
   llSerieS6CWhile(leaNumero);
   llSerieS6CDoWhile(leaNumero);
   llSerieS7CFor(leaNumero);
   llSerieS7CWhile(leaNumero);
   llSerieS7CDoWhile(leaNumero);
   llSerieS8CFor(leaNumero);
   llSerieS8CWhile(leaNumero);
   llSerieS8CDoWhile(leaNumero);
   llSerieS9CFor(leaNumero);
   llSerieS9CWhile(leaNumero);
   llSerieS9CDoWhile(leaNumero);
   llSerieS10CFor(leaNumero);
   llSerieS10CWhile(leaNumero);
   llSerieS10CDoWhile(leaNumero);
}
