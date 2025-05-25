#include <stdio.h>
#include <string.h>

#define MAX_PALABRAS 10
#define MAX_LONG_PALABRA 50

void llArray01() 
{
    char llnombre[MAX_PALABRAS][MAX_LONG_PALABRA];
    int llporcentajes[MAX_PALABRAS];
    int llnum_palabras = 0;
    
    printf("\nIngrese su nombre completo (separado por espacios):\n");
    
    char input[500];
    fgets(input, sizeof(input), stdin);
    
    char *token = strtok(input, " \n");
    while (token != NULL && llnum_palabras < MAX_PALABRAS) {
        strncpy(llnombre[llnum_palabras], token, MAX_LONG_PALABRA);
        llnum_palabras++;
        token = strtok(NULL, " \n");
    }
    
    printf("\nIngrese el porcentaje de carga para cada palabra (separado por espacios):\n");
    for (int i = 0; i < llnum_palabras; i++) {
        scanf("%d", &llporcentajes[i]);
    }
    
    printf("\n");
    for (int i = 0; i < llnum_palabras; i++) {
        int llnum_iguales = llporcentajes[i] / 10;
        
        printf("[");
        for (int j = 0; j < 10; j++) {
            if (j < llnum_iguales) {
                printf("=");
            } else if (j == llnum_iguales) {
                printf(">");
            } else {
                printf(" ");
            }
        }
        
        printf("] %d%% ", llporcentajes[i]);
        
        int llLetras_a_mostrar = (strlen(llnombre[i]) * llporcentajes[i]) / 100;
        if (llLetras_a_mostrar < 1 && strlen(llnombre[i]) > 0) {
            llLetras_a_mostrar = 1;
        }
        
        for (int k = 0; k < llLetras_a_mostrar; k++) {
            printf("%c", llnombre[i][k]);
        }
        
        printf("\n");
    }
    printf("------------------------------\n");
}

void llControladorArray() 
{
    printf("\nArrays:\n");
    llArray01();
}