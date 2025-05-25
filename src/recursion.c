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



void leaControladorRecursion()
{
    int leaNumero = 0;
    long leaFactorial;
    leaNumero = leaValidarEnteroPositivo("\n\tFactrial\nIngrese un numero: ");
    leaFactorial = leaRecursionFactorial(leaNumero);
    printf("El factorial de %d es %ld\n",leaNumero,leaFactorial);
}