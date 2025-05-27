#include <stdio.h>
#include <string.h>

#define MAX_PALABRAS 10
#define MAX_LONG_PALABRA 50

void limpiarBuffer() 
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void llArray01For()
{
    char llnombre[MAX_PALABRAS][MAX_LONG_PALABRA];
    int llporcentajes[MAX_PALABRAS];
    int llnum_palabras = 0;
    
    printf("Array 01 For:\n");
    printf("\nIngrese su nombre completo (separado por espacios):\n");
    char input[500];
    fgets(input, sizeof(input), stdin);
    
    char *token = strtok(input, " \n");
    for (llnum_palabras = 0; token != NULL && llnum_palabras < MAX_PALABRAS; llnum_palabras++) 
    {
        strncpy(llnombre[llnum_palabras], token, MAX_LONG_PALABRA);
        token = strtok(NULL, " \n");
    }
    
    printf("\nIngrese el porcentaje de carga para cada palabra (separado por espacios):\n");
    for (int i = 0; i < llnum_palabras; i++) {
        scanf("%d", &llporcentajes[i]);
    }
    limpiarBuffer();

    for (int i = 0; i < llnum_palabras; i++) {
        int num_iguales = llporcentajes[i] / 10;
        printf("[");
        for (int j = 0; j < 10; j++) {
            printf(j < num_iguales ? "=" : j == num_iguales ? ">" : " ");
        }
        printf("] %d%% %.*s\n", llporcentajes[i], 
              (int)(strlen(llnombre[i]) * llporcentajes[i] / 100), llnombre[i]);
    }
    printf("\n");
}

void llArray01While() 
{
    char llnombre[MAX_PALABRAS][MAX_LONG_PALABRA];
    int llporcentajes[MAX_PALABRAS];
    int llnum_palabras = 0;
    
    printf("Array 01 While:\n");
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
    limpiarBuffer();
    
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
    printf("\n");
}

void llArray01DoWhile()
{
    char llnombre[MAX_PALABRAS][MAX_LONG_PALABRA];
    int llporcentajes[MAX_PALABRAS];
    int llnum_palabras = 0;
    
    printf("Array 01 Do While:\n");
    printf("\nIngrese su nombre completo (separado por espacios):\n");
    char input[500];
    fgets(input, sizeof(input), stdin);
    
    char *token = strtok(input, " \n");
    if (token != NULL) {
        do {
            strncpy(llnombre[llnum_palabras], token, MAX_LONG_PALABRA);
            llnum_palabras++;
            token = strtok(NULL, " \n");
        } while (token != NULL && llnum_palabras < MAX_PALABRAS);
    }
    
    printf("\nIngrese el porcentaje de carga para cada palabra (separado por espacios):\n");
    int i = 0;
    do {
        if (i < llnum_palabras) {
            scanf("%d", &llporcentajes[i]);
            i++;
        }
    } while (i < llnum_palabras);
    limpiarBuffer();

    i = 0;
    do 
    {
        if (i < llnum_palabras) {
            int num_iguales = llporcentajes[i] / 10;
            printf("[");
            int j = 0;
            do {
                if (j < num_iguales) printf("=");
                else if (j == num_iguales) printf(">");
                else printf(" ");
                j++;
            } while (j < 10);
            printf("] %d%% %.*s\n", llporcentajes[i], 
                  (int)(strlen(llnombre[i]) * llporcentajes[i] / 100), llnombre[i]);
            i++;
        }
    } 
    while (i < llnum_palabras);
    
    printf("\n");
}


void llControladorArray() 
{
    printf("\nArrays:\n");
    llArray01For();
    printf("---------------------------------\n");
    llArray01While();
    printf("---------------------------------\n");
    llArray01DoWhile();
    printf("---------------------------------\n");
}