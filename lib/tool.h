#ifndef TOOL_H
#define TOOL_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

int leaValidarEntero(char *leaMensaje)
{
    char leaIngreso[100];
    int leaNumero=0;
    bool leaValido; 

    while(true)
    {
        
        printf("%s",leaMensaje);
        
        if(fgets(leaIngreso,sizeof(leaIngreso),stdin)==NULL)
        {
            continue;
        }

        leaIngreso[strcspn(leaIngreso, "\n")] = '\0';
        leaValido = true;

        for (int i = 0; leaIngreso[i] != '\0'; i++)
        {
            if (!isdigit(leaIngreso[i]))
            {
                leaValido = false;
                break;
            }
        }
        if(leaValido && leaIngreso[0] != '\0')
        { 
            leaNumero = atoi(leaIngreso);
            if (leaNumero != 0)
            {
                return leaNumero;
            }else{
                printf("Error de entrada. \nVuelva a intentarlo\n");
                leaValido = false;
            }      
        }else{
            printf("Error de entrada.\nVuelva a intentarlo\n");
        }
        
    } 

}

int leaValidarEnteroPositivo(char *leaMensaje)
{

    char leaIngreso[100];
    int leaNumero=0;
    bool leaValido; 

    while(true)
    {
        
        printf("%s",leaMensaje);
        
        if(fgets(leaIngreso,sizeof(leaIngreso),stdin)==NULL)
        {
            continue;
        }

        leaIngreso[strcspn(leaIngreso, "\n")] = '\0';
        leaValido = true;

        for (int i = 0; leaIngreso[i] != '\0'; i++)
        {
            if (!isdigit(leaIngreso[i]))
            {
                leaValido = false;
                break;
            }
        }
        if(leaValido && leaIngreso[0] != '\0')
        { 
            leaNumero = atoi(leaIngreso);
            return leaNumero;
        }
        printf("Error de entrada. \nVuelva a intentarlo\n"); 
    } 
}

int leaValidarNumero(char *leaMensaje)
{
    char leaIngreso[100];
    int leaNumero=0;
    bool leaValido; 

    while(true)
    {
        
        printf("%s",leaMensaje);
        
        if(fgets(leaIngreso,sizeof(leaIngreso),stdin)==NULL)
        {
            continue;
        }

        leaIngreso[strcspn(leaIngreso, "\n")] = '\0';
        leaValido = true;

        int leaInicio = 0;
        if (leaIngreso[0]== '-')
        {
            leaInicio = 1;
            if(leaIngreso[1] == '\0')
            {
                leaValido = false;
            }
        }

        for (int i = 0; leaIngreso[i] != '\0'; i++)
        {
            if (!isdigit(leaIngreso[i]))
            {
                leaValido = false;
                break;
            }
        }
        if(leaValido && leaIngreso[0] != '\0')
        { 
            leaNumero = atoi(leaIngreso);
            return leaNumero;
        }
        printf("Error de entrada. \nVuelva a intentarlo\n"); 
    }
}
#endif
