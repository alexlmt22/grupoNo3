#include <stdio.h>
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
    
}

void leaControladorSerie(){
    int leaNumero = 0;
    leaNumero = leaValidarEntero("\nIngrese la cantidad de la serie:");
    leaSerieS1For(leaNumero);
    leaSerieS1While(leaNumero);
    leaSerieS1DoWhile(leaNumero);
    printf("\n");
}