#include <stdio.h>
#include "../lib/tool.h"

int leaRecursionSuma(int leaNum,int leaNum1)
{
    if(leaNum1==0)
    {
        return leaNum;
    }
    int leaSuma = leaNum ^ leaNum1;
    int leaCarry = (leaNum & leaNum1) << 1;
    return leaRecursionSuma(leaSuma,leaCarry);
}

int leaRecursionProducto(int leaNum, int leaNum1)
{
    if (leaNum1 == 0)
    {
        return 0;
    }
    return leaRecursionSuma(leaNum,leaRecursionProducto(leaNum,leaRecursionSuma(leaNum1,~0)));
}

int leaRecursionFactorial(int leaNum)
{
    if(leaNum==0)
    {
        return 1;
    }
    return leaRecursionProducto(leaNum,leaRecursionFactorial(leaRecursionSuma(leaNum,~0)));
}

void leaMostrarFactorial()
{
    int leaNumero = 0, leaNumero1 = 0;
    long leaFactorial;
    leaNumero = leaValidarEnteroPositivo("\n\tFactorial\nIngrese un numero: ");
    leaFactorial = leaRecursionFactorial(leaNumero);
    printf("El factorial de %d es %ld\n",leaNumero,leaFactorial);
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
    }
        return leaRecursionProducto(leaBase, leaRecursionPotencia(leaBase,leaRecursionSuma(leaExpo,~0)));
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

void leaConteoProgresivo(int leaNum){
    if(leaNum < 0)
    {
        return;
    }
    
    leaConteoProgresivo(leaRecursionSuma(leaNum,~0));
    printf("Cuenta progresiva: %d\n", leaNum);
}

void leaMostrarConteoPro()
{
    int leaNumero = 0;
    leaNumero = leaValidarEntero("\n\tConteo Progresivo\nIngrese un numero: ");
    leaConteoProgresivo(leaNumero);

}

void leaConteoRegresivo(int leaNum){
    if(leaNum < 0)
    {
        return;
    }
    printf("Cuenta progresiva: %d\n", leaNum);
    leaConteoRegresivo(leaRecursionSuma(leaNum,~0));
}

void leaMostrarConteoReg()
{
    int leaNumero = 0;
    leaNumero = leaValidarEntero("\n\tConteo Regresivo\nIngrese un numero: ");
    leaConteoRegresivo(leaNumero);

}

void leaControladorRecursion()
{
  
    printf("\n\tRecursividad");
    leaMostrarFactorial();
    leaMostrarSuma();
    leaMostrarProducto();
    leaMostrarPotencia();
    leaMostrarConteoPro();
    leaMostrarConteoReg();
      
}