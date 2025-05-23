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

void leaControladorSerie()
{
    int leaNumero = 0;
    leaNumero = leaValidarEntero("\nIngrese el numero de elementos de la serie numerica:");
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
    printf("\n");
}