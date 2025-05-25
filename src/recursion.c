#include <stdio.h>
#include "../lib/tool.h"

long leaRecursionFactorial(int leaNumero)
{
    if (leaNumero == 0 || leaNumero == 1)
    {
        return 1;
    }else{
        return leaNumero*leaRecursionFactorial(leaNumero-1);
    }
}

void leaMostrarFactorial()
{
    int leaNumero = 0, leaNumero1 = 0;
    long leaFactorial;
    leaNumero = leaValidarEnteroPositivo("\n\tFactorial\nIngrese un numero: ");
    leaFactorial = leaRecursionFactorial(leaNumero);
    printf("El factorial de %d es %ld\n",leaNumero,leaFactorial);
}

int leaRecursionSuma(int leaNumero, int leaNumero1)
{
    if (leaNumero1 == 0) {
        return leaNumero;
    } else if (leaNumero1 > 0) {
        return leaRecursionSuma(leaNumero + 1, leaNumero1 - 1);
    } else {
        return leaRecursionSuma(leaNumero - 1, leaNumero1 + 1);
    }
}

void leaMostrarSuma()
{
    int leaNumero = 0, leaNumero1 = 0, leaSuma=0;
    printf("\n\tSuma");
    leaNumero = leaValidarNumero("\nIngrese el primer numero: ");
    leaNumero1 = leaValidarNumero("\nIngrese el segundo numero: ");
    leaSuma= leaRecursionSuma(leaNumero,leaNumero1);
    printf("\nLa suma de %d y %d es %d\n",leaNumero,leaNumero1,leaSuma);
}

int leaRecursionProducto(int leaNumero, int leaNumero1)
{
    if (leaNumero1 == 0)
    {
        return 0;
    }else if(leaNumero1 > 0)
    {
        return leaNumero + leaRecursionProducto(leaNumero,leaNumero1 - 1);
    }else
    {
        return -leaRecursionProducto(leaNumero, -leaNumero1);
    }
}

void leaMostrarProducto()
{
    int leaNumero = 0, leaNumero1 = 0, leaProducto=0;
     printf("\n\tProducto");
    leaNumero = leaValidarNumero("\nIngrese el primer numero: ");
    leaNumero1 = leaValidarNumero("\nIngrese el segundo numero: ");
    leaProducto=leaRecursionProducto(leaNumero,leaNumero1);
    printf("\nEl producto de %d y %d es %d\n",leaNumero,leaNumero1,leaProducto);
}

int leaRecursionPotencia(int leaBase, int leaExpo)
{
    if(leaExpo == 0)
    {
        return 1;
    }else{
        return leaBase * leaRecursionPotencia(leaBase, leaExpo - 1);
    }
}

void leaMostrarPotencia()
{
    int leaNumero = 0, leaNumero1 = 0,leaPotencia=0;
    printf("\n\tPotencia");
    leaNumero = leaValidarNumero("\nIngrese la base: ");
    leaNumero1 = leaValidarEnteroPositivo("\nIngrese el exponente: ");
    leaPotencia=leaRecursionPotencia(leaNumero,leaNumero1);
    printf("\nEl %d elevado a la potencia de %d es %d\n",leaNumero,leaNumero1,leaPotencia);
}
void leaControladorRecursion()
{
  
    printf("\n\tRecursividad");
    leaMostrarFactorial();
    leaMostrarSuma();
    leaMostrarProducto();
    leaMostrarPotencia();
      
}