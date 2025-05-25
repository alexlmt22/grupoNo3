#include <stdio.h>
#include <stdbool.h>
#include "../lib/tool.h"

void leaSerieS1For(int leaNroTermino)
{
    int leaTermino=0,leaTermino1=1,leaTerminoN=0;
    printf("\nSerie S1 For:\n");
    for (int i = 1; i <= leaNroTermino; i++)
    {
        printf("%d ",leaTermino);
        leaTerminoN = leaTermino + leaTermino1;
        leaTermino=leaTermino1;
        leaTermino1=leaTerminoN;
    }
    printf("\n");

}

void leaSerieS1While(int leaNroTermino)
{
    int leaInicial =0 ,leaTermino=0,leaTermino1=1,leaTerminoN=0;
    printf("\nSerie S1 While:\n");
    while (leaInicial<leaNroTermino)
    {
        printf("%d ", leaTermino);
        leaTerminoN = leaTermino + leaTermino1;
        leaTermino=leaTermino1;
        leaTermino1=leaTerminoN;
        leaInicial++;
    }
    printf("\n");
}

void leaSerieS1DoWhile(int leaNroTermino){
    int leaInicial =0 ,leaTermino=0,leaTermino1=1,leaTerminoN=0;
    printf("\nSerie S1 Do While:\n");
    do
    {
        printf("%d ", leaTermino);
        leaTerminoN = leaTermino + leaTermino1;
        leaTermino=leaTermino1;
        leaTermino1=leaTerminoN;
        leaInicial++;
    } while (leaInicial < leaNroTermino);
    printf("\n");
    printf("---------------------------------");
}

void llSerieS2For(int llnumero)
{
    int llcontador = 1;

    printf("\nSerie S2 For:\n");

    for (int i = 1; i <= llnumero; i++)
    {
        printf("%d ", (i % 2 != 0) ? llcontador : 0);
        llcontador += (i % 2 != 0) ? 2 : 0;
    }

    printf("\n");
}

void llSerieS2While(int llnumero)
{
    int llcontador = 1;

    printf("\nSerie S2 While:\n");

    int i = 1;
    while (i <= llnumero)
    {
        printf("%d ", (i % 2 != 0) ? llcontador : 0);
        llcontador += (i % 2 != 0) ? 2 : 0;
        i++;
    }

    printf("\n");
}

void llSerieS2DoWhile(int llnumero)
{
    int llcontador = 1;

    printf("\nSerie S2 Do While:\n");

    int i = 1;
    do
    {
        printf("%d ", (i % 2 != 0) ? llcontador : 0);
        llcontador += (i % 2 != 0) ? 2 : 0;
        i++;
    } while (i <= llnumero);

    printf("\n");
    printf("---------------------------------");
}

void llSerieS3For(int llnumero)
{
 int llnumero1 = 0; int llnumero2 = 1; int llnumero3;

    printf("\nSerie S3 For:\n");

    for (int i = llnumero1/llnumero2; i <= llnumero; i++)
    {
        printf("%d/%d ", llnumero1, 2 * i + 1);
        llnumero3 = llnumero1 + llnumero2;
        llnumero1 = llnumero2;
        llnumero2 = llnumero3;
    }

    printf("\n");
}   

void llSerieS3While(int llnumero)
{
    int llnumero1 = 0; int llnumero2 = 1; int llnumero3;

    printf("\nSerie S3 While:\n");

    int i = llnumero1 / llnumero2;
    while (i <= llnumero)
    {
        printf("%d/%d ", llnumero1, 2 * i + 1);
        llnumero3 = llnumero1 + llnumero2;
        llnumero1 = llnumero2;
        llnumero2 = llnumero3;
        i++;
    }

    printf("\n");
}

void llSerieS3DoWhile(int llnumero)
{
    int llnumero1 = 0; int llnumero2 = 1; int llnumero3;

    printf("\nSerie S3 Do While:\n");

    int i = llnumero1 / llnumero2;
    do
    {
        printf("%d/%d ", llnumero1, 2 * i + 1);
        llnumero3 = llnumero1 + llnumero2;
        llnumero1 = llnumero2;
        llnumero2 = llnumero3;
        i++;
    } while (i <= llnumero);

    printf("\n");
    printf("---------------------------------");
}

void llSerieS4For(int llnumero)
{
    int llnumero1 = 0; int llnumero2 = 1; int llnumero3;

    printf("\nSerie S4 For:\n");

    for (int i = llnumero1 / llnumero2; i <= llnumero; i++)
    {
        printf("%d/%d ", llnumero1, 2 * i + 2);
        llnumero3 = llnumero1 + llnumero2;
        llnumero1 = llnumero2;
        llnumero2 = llnumero3;
    }

    printf("\n");
}

void llSerieS4While(int llnumero)
{
    int llnumero1 = 0; int llnumero2 = 1; int llnumero3;

    printf("\nSerie S4 While:\n");

    int i = llnumero1 / llnumero2;
    while (i <= llnumero)
    {
        printf("%d/%d ", llnumero1, 2 * i + 2);
        llnumero3 = llnumero1 + llnumero2;
        llnumero1 = llnumero2;
        llnumero2 = llnumero3;
        i++;
    }

    printf("\n");
}

void llSerieS4DoWhile(int llnumero)
{
    int llnumero1 = 0; int llnumero2 = 1; int llnumero3;

    printf("\nSerie S4 Do While:\n");

    int i = llnumero1 / llnumero2;
    do
    {
        printf("%d/%d ", llnumero1, 2 * i + 2);
        llnumero3 = llnumero1 + llnumero2;
        llnumero1 = llnumero2;
        llnumero2 = llnumero3;
        i++;
    } while (i <= llnumero);

    printf("\n");
    printf("---------------------------------");
}

void llSerieS5For(int llnumero)
{
    int llcontPrimos = 0;
    int llactual = 2;

    printf("\nSerie S5 For:\n");

    while (llcontPrimos < llnumero)
    {
        bool llEsPrimo = true;

        for (int i = 2; i * i <= llactual; i++)
        {
            if (llactual % i == 0)
            {
                llEsPrimo = false;
                break;
            }
        }

        if (llEsPrimo)
        {
            printf("%d ", llactual);
            llcontPrimos++;
        }

        llactual++;
    }

    printf("\n");
}

void llSerieS5While(int llnumero)
{
    int llcontPrimos = 0;
    int llactual = 2;

    printf("\nSerie S5 While:\n");

    while (llcontPrimos < llnumero)
    {
        bool llEsPrimo = true;

        for (int i = 2; i * i <= llactual; i++)
        {
            if (llactual % i == 0)
            {
                llEsPrimo = false;
                break;
            }
        }

        if (llEsPrimo)
        {
            printf("%d ", llactual);
            llcontPrimos++;
        }

        llactual++;
    }

    printf("\n");
}

void llSerieS5DoWhile(int llnumero)
{
    int llcontPrimos = 0;
    int llactual = 2;

    printf("\nSerie S5 Do While:\n");

    do
    {
        bool llEsPrimo = true;

        for (int i = 2; i * i <= llactual; i++)
        {
            if (llactual % i == 0)
            {
                llEsPrimo = false;
                break;
            }
        }

        if (llEsPrimo)
        {
            printf("%d ", llactual);
            llcontPrimos++;
        }

        llactual++;
    } while (llcontPrimos < llnumero);

    printf("\n");
    printf("---------------------------------");
}

void leaSerieS6For(int leaNroTermino)
{
    int leaTermino;
    printf("\nSerie S6 For:\n");
    for (int leaInicial = 1; leaInicial <= leaNroTermino; leaInicial++)
    {
        leaTermino = leaInicial*leaInicial;
        printf("%d ",leaTermino);
    }
    printf("\n");
}

void leaSerieS6While(int leaNroTermino)
{
    int leaTermino, leaInicial = 1;
    printf("\nSerie S6 While:\n");
    while (leaInicial <= leaNroTermino)
    {
        leaTermino = leaInicial*leaInicial;
        printf("%d ",leaTermino);
        leaInicial++;
    }
    printf("\n");
}

void leaSerieS6Dowhile(int leaNroTermino)
{
    int leaTermino, leaInicial = 1;
    printf("\nSerie S6 Do While:\n");
    do
    {
        leaTermino = leaInicial*leaInicial;
        printf("%d ",leaTermino);
        leaInicial++;
    } while (leaInicial <= leaNroTermino);
    printf("\n");
    printf("---------------------------------");
}

void leaSerieS7For(int leaNroTermino)
{
    int leaTerminoN,leaTermino=1,leaSecuencia=3;
    printf("\nSerie S7 For:\n");
    for (int leaInicial = 0; leaInicial < leaNroTermino; leaInicial++)
    {
        leaTerminoN = leaTermino + (leaInicial*leaSecuencia);
        printf("%d ",leaTerminoN);
    }
    printf("\n");
}

void leaSerieS7While(int leaNroTermino)
{
    int leaTerminoN,leaTermino=1,leaSecuencia=3,leaInicial=0;
    printf("\nSerie S7 While:\n");
    while (leaInicial<leaNroTermino)
    {
        leaTerminoN = leaTermino + (leaInicial*leaSecuencia);
        printf("%d ",leaTerminoN);
        leaInicial++;
    }
    printf("\n");
}

void leaSerieS7Dowhile(int leaNroTermino)
{
    int leaTerminoN,leaTermino=1,leaSecuencia=3,leaInicial=0;
    printf("\nSerie S7 Do While:\n");
    do
    {
        leaTerminoN = leaTermino + (leaInicial*leaSecuencia);
        printf("%d ",leaTerminoN);
        leaInicial++;
    } while (leaInicial<leaNroTermino);
    printf("\n");
    printf("---------------------------------");
}

void leaSerieS8For(int leaNroTermino)
{
    int leaTerminoN,leaTermino=3,leaSecuencia=5;
    printf("\nSerie S8 For:\n");
    for (int leaInicial = 0; leaInicial < leaNroTermino; leaInicial++)
    {
        leaTerminoN = leaTermino + (leaInicial*leaSecuencia);
        printf("%d ",leaTerminoN);
    }
    printf("\n");
    
}

void leaSerieS8While(int leaNroTermino)
{
    int leaTerminoN,leaTermino=3,leaSecuencia=5,leaInicial=0;
    printf("\nSerie S8 While:\n");
    while (leaInicial<leaNroTermino)
    {
        leaTerminoN = leaTermino + (leaInicial*leaSecuencia);
        printf("%d ",leaTerminoN);
        leaInicial++;
    }
    printf("\n");
}

void leaSerieS8DoWhile(int leaNroTermino)
{
    int leaTerminoN,leaTermino=3,leaSecuencia=5,leaInicial=0;
    printf("\nSerie S8 Do While:\n");
    do
    {
        leaTerminoN = leaTermino + (leaInicial*leaSecuencia);
        printf("%d ",leaTerminoN);
        leaInicial++;
    } while (leaInicial<leaNroTermino);
    printf("\n");
    printf("---------------------------------");
}

void leaSerieS9For(int leaNroTermino)
{
    int leaTermino=2;
    printf("\nSerie S9 For:\n");
    for (int leaInicial = 0; leaInicial < leaNroTermino; leaInicial++)
    {
        printf("%d ",leaTermino);
        leaTermino *=2;
    }
    printf("\n");
}

void leaSerieS9While(int leaNroTermino)
{
    int leaTermino=2,leaInicial=0;
    printf("\nSerie S9 While:\n");
    while (leaInicial < leaNroTermino)
    {
        printf("%d ",leaTermino);
        leaTermino *=2;
        leaInicial++;
    }
    printf("\n");
}

void leaSerieS9DoWhile(int leaNroTermino)
{
    int leaTermino=2,leaInicial=0;
    printf("\nSerie S9 Do While:\n");
    do
    {
        printf("%d ",leaTermino);
        leaTermino *=2;
        leaInicial++;
    } while (leaInicial < leaNroTermino);
    printf("\n");
    printf("---------------------------------");
}

void leaSerieS10For(int leaNroTermino)
{
    int leaTermino=3;
    printf("\nSerie S10 For:\n");
    for (int leaInicial = 0; leaInicial < leaNroTermino; leaInicial++)
    {
        printf("%d ",leaTermino);
        leaTermino *=3;
    }
    printf("\n");
}

void leaSerieS10While(int leaNroTermino)
{
    int leaTermino=3,leaInicial=0;
    printf("\nSerie S10 While:\n");
    while (leaInicial < leaNroTermino)
    {
        printf("%d ",leaTermino);
        leaTermino *=3;
        leaInicial++;
    }
    printf("\n");
}

void leaSerieS10DoWhile(int leaNroTermino)
{
    int leaTermino=3,leaInicial=0;
    printf("\nSerie S10 Do While:\n");
    do
    {
        printf("%d ",leaTermino);
        leaTermino *=3;
        leaInicial++;
    } while (leaInicial < leaNroTermino);
    printf("\n");
    printf("---------------------------------");
}

void leaSerieS11For(int leaNroTermino)
{
    int leaTermino;
    printf("\nSerie S11 For:\n");
    for (int leaInicial = 1; leaInicial <= leaNroTermino; leaInicial++)
    {
        leaTermino = leaInicial * (leaInicial + 1);
        printf("%d ",leaTermino);
    }
    printf("\n");
}

void leaSerieS11While(int leaNroTermino){
    int leaTermino,leaInicial=1;
    printf("\nSerie S11 While:\n");
    while (leaInicial <= leaNroTermino)
    {
        leaTermino = leaInicial * (leaInicial + 1);
        printf("%d ",leaTermino);
        leaInicial++;
    }
    printf("\n");
}

void leaSerieS11DoWhile(int leaNroTermino)
{
    int leaTermino,leaInicial=1;
    printf("\nSerie S11 Do While:\n");
    do
    {
        leaTermino = leaInicial * (leaInicial + 1);
        printf("%d ",leaTermino);
        leaInicial++;
    } while (leaInicial <= leaNroTermino);
    printf("\n");
    printf("---------------------------------");
}

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
 
    printf("\nSerie S2C For:\n");
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
 
    printf("\nSerie S2C While:\n");
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
 
    printf("\nSerie S2C Do While:\n");
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
        printf("---------------------------------");
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

    printf("\nSerie S3C For:\n");

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

    printf("\nSerie S3C While:\n");

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

    printf("\nSerie S3C Do While:\n");

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
        printf("---------------------------------");
}

void liaserie4cFor(int lianroTerminos)
{
    char simbolos[] = {'+', '-', '*', '/'};

    printf("\nSerie S4C For:\n");
    for (int i = 0; i < lianroTerminos; i++) 
    {
        printf("%c ", simbolos[i % 4]);
    }
        printf("\n");
}

void liaserie4cWhile(int lianroTerminos)
{
    char simbolos[] = {'+', '-', '*', '/'};

    printf("\nSerie S4C While:\n");
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

    printf("\nSerie 4C Do While:\n");
    int i = 0;
    do 
    {
        printf("%c ", simbolos[i % 4]);
        i++;
    } 
        while (i < lianroTerminos);
        printf("\n");
        printf("---------------------------------");
}

void liaserie5cFor(int lianroTerminos)
{
    char simbolos[] = {'\\', '|', '/', '-'};

    printf("\nSerie S5C For:\n");
    for (int i = 0; i < lianroTerminos; i++)
    {
        printf("%c ", simbolos[i % 4]);
    }
        printf("\n");
}

void liaserie5cWhile(int lianroTerminos)
{
    char simbolos[] = {'\\', '|', '/', '-'};

    printf("\nSerie S5C While:\n");
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

    printf("\nSerie S5C Do While:\n");
    int i = 0;
    do
    {
        printf("%c ", simbolos[i % 4]);
        i++;
    } 
        while (i < lianroTerminos);
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

void leaControladorSerie()
{
    int leaNumero = 0;
    leaNumero = leaValidarEntero("\nIngrese el numero de terminos de las series:");
    leaSerieS1For(leaNumero);
    leaSerieS1While(leaNumero);
    leaSerieS1DoWhile(leaNumero);
    llSerieS2For(leaNumero);
    llSerieS2While(leaNumero);
    llSerieS2DoWhile(leaNumero);
    llSerieS3For(leaNumero);
    llSerieS3While(leaNumero);
    llSerieS3DoWhile(leaNumero);
    llSerieS4For(leaNumero);
    llSerieS4While(leaNumero);
    llSerieS4DoWhile(leaNumero);
    llSerieS5For(leaNumero);
    llSerieS5While(leaNumero);
    llSerieS5DoWhile(leaNumero);
    leaSerieS6For(leaNumero);
    leaSerieS6While(leaNumero);
    leaSerieS6Dowhile(leaNumero);
    leaSerieS7For(leaNumero);
    leaSerieS7While(leaNumero);
    leaSerieS7Dowhile(leaNumero);
    leaSerieS8For(leaNumero);
    leaSerieS8While(leaNumero);
    leaSerieS8DoWhile(leaNumero);
    leaSerieS9For(leaNumero);
    leaSerieS9While(leaNumero);
    leaSerieS9DoWhile(leaNumero);
    leaSerieS10For(leaNumero);
    leaSerieS10While(leaNumero);
    leaSerieS10DoWhile(leaNumero);
    leaSerieS11For(leaNumero);
    leaSerieS11While(leaNumero);
    leaSerieS11DoWhile(leaNumero);
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
    printf("\n");
}