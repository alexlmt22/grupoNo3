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
            return leaNumero;
            
        }
        printf("Error de entrada\nVuelva a intentarlo\n");
    } 

}

