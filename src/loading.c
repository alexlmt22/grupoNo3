#include <stdio.h>
#include "windows.h"
#include "string.h"

void cargaRotativaForIM() 
{
    printf("Carga desde 0-100:\n");

    char spinnerIM[]= {'|', '/', '-', '\\'};

    for (int porcentajeIM = 0; porcentajeIM<= 100; porcentajeIM++)
    {
        printf("\r%c %d%% ", spinnerIM[ porcentajeIM % 4],     porcentajeIM);
        fflush(stdout);
        Sleep(50);
    }
    printf("\ncarga completa\n");
}
void cargaRotativawhileIM() 
{
    printf("Carga desde 0-100 while:\n");
    char spinnerIM[]= {'|', '/', '-', '\\'};
    int porcentajeIM = 0;

    while (porcentajeIM<= 100)
    {
        char simboloIM = spinnerIM [ porcentajeIM % 4];
        printf("\r%c %3d%%",  simboloIM,      porcentajeIM);
        porcentajeIM++;
        fflush(stdout);
        Sleep(50);
    }
    printf("\nCarga completa\n");
}
void cargaRotativadowhileIM() 
{
    printf("Carga desde 0-100 dowhile:\n");
    char spinnerIM[]= {'|', '/', '-', '\\'};
    int porcentajeIM = 0;
    do
    {
        char simboloIM = spinnerIM[porcentajeIM % 4 ];
        printf("\r%c%3d%%",  simboloIM,      porcentajeIM);
        fflush(stdout);
        Sleep(50);
                porcentajeIM++;
    }
     while (porcentajeIM <= 100);
    printf("\ncarga completa\n");
}
void cargaBarraForIM()
 {
    char barraIM[21];       
    char rellenoIM;         
    int porcentajeIM;       
    int numCharsIM;            
    printf("Barra de carga for:");
    scanf(" %c", &rellenoIM);
    for (porcentajeIM = 0; porcentajeIM <= 100; porcentajeIM++) 
    {
        numCharsIM = porcentajeIM * 20 / 100;
        for (int i = 0; i < numCharsIM; i++) {
            barraIM[i] = rellenoIM;
        }
        for (int i = numCharsIM; i < 20; i++) {
            barraIM[i] = ' ';
        }
        barraIM[20] = '\0';
        printf("\r[%s] %3d%%", barraIM, porcentajeIM);
        fflush(stdout);
        Sleep(70);
    }
    printf("\nCarga completa.\n");
}
void cargaBarraWhileIM() {
    char barraIM[21];
    char rellenoIM;
    int porcentajeIM = 0;
    int numCharsIM;
    printf("Barra de carga while:");
    scanf(" %c", &rellenoIM);
    while (porcentajeIM <= 100) 
    {
        numCharsIM = porcentajeIM * 20 / 100;
        int i = 0;
        while (i < numCharsIM) {
            barraIM[i] = rellenoIM;
            i++;
        }
        while (i < 20) {
            barraIM[i] = ' ';
            i++;
        }
        barraIM[20] = '\0';
        printf("\r[%s] %3d%%", barraIM, porcentajeIM);
        fflush(stdout);
        Sleep(70);
        porcentajeIM += 5;
    }
    printf("\nCarga completa.\n");
}
void cargaBarraDoWhileIM()
{
    char barraIM[21];
    char rellenoIM;
    int porcentajeIM = 0;
    int numcharsIM;
    printf("barra de carga dowhile:");
    scanf(" %c",   &rellenoIM);
    do
    {
        int cantidadIM = porcentajeIM / 5;
        for (int i = 0; i < cantidadIM ; i++)
        {
            barraIM[i] = rellenoIM;
        }
        for (int i = cantidadIM; i < 20; i++)
        {
            barraIM[i] = ' ';
        }
        barraIM[20] = '\0';
        printf("\r[%s]%3d%%",   barraIM,  porcentajeIM);
        fflush(stdout);
        Sleep(70);
        porcentajeIM++;
    } while (porcentajeIM <= 100);
    printf("\ncargacompleta\n");   
}
void cargaMovimientoForIM()
{
    char barraIM[21];
    char caracterIM = '-';
    int posicionIM = 0;
    int direccionIM = 1;
    int porcentajeIM = 0;
    printf("Barra de movimiento for:\n");
    for (porcentajeIM = 0; porcentajeIM <= 100; porcentajeIM++)
    {
        memset(barraIM, ' ', 20);    
        barraIM[posicionIM] = caracterIM; 
        barraIM[20] = '\0';              
        printf("\r[%s] %3d%%", barraIM, porcentajeIM);
        fflush(stdout);
        Sleep(30);
        posicionIM += direccionIM;
        if (posicionIM == 19 || posicionIM == 0)
        {
            direccionIM *= -1;
        }
    }
    printf("\nCarga completa\n");
}
void cargaMovimientoWhileIM()
{
    char barraIM[21];
    char caracterIM = '-';
    int posicionIM = 0;
    int direccionIM = 1;
    int porcentajeIM = 0;
    printf("Barra de movimiento while:\n");
    while (porcentajeIM <= 100)
    {
        memset(barraIM, ' ', 20);        
        barraIM[posicionIM] = caracterIM; 
        barraIM[20] = '\0';           
        printf("\r[%s] %3d%%", barraIM, porcentajeIM);
        fflush(stdout);
        Sleep(50);                    
        posicionIM += direccionIM;     
        if (posicionIM == 19 || posicionIM == 0)
        {
            direccionIM *= -1;
        }
        porcentajeIM++;
    }
    printf("\nCarga completa\n");
}
void cargaMovimientoDoWhileIM()
{
    char barraIM[21];
    char caracterIM = '-';
    int posicionIM = 0;
    int direccionIM = 1;
    int porcentajeIM = 0;
    printf("Barra de movimiento dowhile:\n");
    do
    {
        memset(barraIM, ' ', 20);           
        barraIM[posicionIM] = caracterIM;   
        barraIM[20] = '\0';                 
        printf("\r[%s] %3d%%", barraIM, porcentajeIM); 
        fflush(stdout);
        Sleep(40);                        
        posicionIM += direccionIM;        
        if (posicionIM == 19 || posicionIM == 0) 
        {
            direccionIM *= -1;
        }
        porcentajeIM++; 
    } 
    while (porcentajeIM <= 100);
    printf("\nCarga completa\n");
}
void cargaWaitingForIM()
{
    const char patronesIM[2][4] = {"o0o", "0o0"};
    int porcentajeIM;
    printf("Carga rotativa for:\n");
    for (porcentajeIM = 0; porcentajeIM <= 100; porcentajeIM++)
    {
        const char* patronActualIM = patronesIM[porcentajeIM % 2];
        printf("\r%s %3d%%", patronActualIM, porcentajeIM);
        fflush(stdout);
        Sleep(80);
    }
    printf("\n");
}
void cargaWaitingWhileIM()
{
    const char patronesIM[2][4] = {"o0o", "0o0"};
    int porcentajeIM = 0;
    printf("Carga rotativa while:\n");
    while (porcentajeIM <= 100)
    {
        const char* patronActualIM = patronesIM[porcentajeIM % 2];
        printf("\r%s %3d%%", patronActualIM, porcentajeIM);
        fflush(stdout);
        Sleep(60);
        porcentajeIM++;
    }
    printf("\n");
}
void cargaWaitingDoWhileIM()
{
    const char patronesIM[2][4] = {"o0o", "0o0"};
    int porcentajeIM = 0;
    printf("Carga rotativa dowhile:\n");
    do
    {
        const char* patronActualIM = patronesIM[porcentajeIM % 2];
        printf("\r%s %3d%%", patronActualIM, porcentajeIM);
        fflush(stdout);
        Sleep(70);
        porcentajeIM++;
    }
    while (porcentajeIM <= 100);
    printf("\n");
}
void cargaFlechaForIM()
{
    char barraIM[23];     
    int porcentajeIM;
    int numEqIM;
    printf("Carga Flecha for:\n");
    for (porcentajeIM = 0; porcentajeIM <= 100; porcentajeIM += 5)
    {
        numEqIM = porcentajeIM * 20 / 100;   
        for (int i = 0; i < numEqIM; i++)
            barraIM[i] = '=';
        if (numEqIM < 20)
            barraIM[numEqIM++] = '>';
        for (int i = numEqIM; i < 20; i++)
            barraIM[i] = ' ';
        barraIM[20] = '\0';
        printf("\r[%s] %3d%%", barraIM, porcentajeIM);
        fflush(stdout);
        Sleep(60);
    }
    printf("\nCarga completa\n");
}
void cargaFlechaWhileIM()
{
    char barraIM[23];
    int porcentajeIM = 0;
    int numEqIM;
    printf("Carga Flecha while:\n");
    while (porcentajeIM <= 100)
    {
        numEqIM = porcentajeIM * 20 / 100;
        for (int i = 0; i < numEqIM; i++)
            barraIM[i] = '=';
        if (numEqIM < 20)
            barraIM[numEqIM++] = '>';
        for (int i = numEqIM; i < 20; i++)
            barraIM[i] = ' ';
        barraIM[20] = '\0';
        printf("\r[%s] %3d%%", barraIM, porcentajeIM);
        fflush(stdout);
        Sleep(70);
        porcentajeIM += 5;
    }
    printf("\nCarga completa\n");
}
void cargaFlechadowhileIM()
{
    char barraIM[23];
    int porcentajeIM = 0;
    int numEqIM;
    printf("Carga Flecha dowhile:\n");
    do
    {
        numEqIM = porcentajeIM * 20 / 100;
        for (int i = 0; i < numEqIM; i++)
            barraIM[i] = '=';
        if (numEqIM < 20)
            barraIM[numEqIM++] = '>';
        for (int i = numEqIM; i < 20; i++)
            barraIM[i] = ' ';
        barraIM[20] = '\0';
        printf("\r[%s] %3d%%", barraIM, porcentajeIM);
        fflush(stdout);
        Sleep(100);
        porcentajeIM += 5;
    }
    while (porcentajeIM <= 80);
    printf("\nCarga completa\n");
}
void cargaDobleFlechaForIM()
{
    char barraIM[21];          
    const char* simboloIM = "<=>";
    int porcentajeIM, posIM;
    printf("Craga Doble Flecha for:\n");
    for (porcentajeIM = 0; porcentajeIM <= 100; porcentajeIM ++)
    {
        posIM = porcentajeIM / 5;
        if (posIM > 17) posIM = 17;
        for (int i = 0; i < 20; i++)
            barraIM[i] = ' ';
        for (int j = 0; j < 3; j++)
            barraIM[posIM + j] = simboloIM[j];
        barraIM[20] = '\0'; 
        printf("\r[%s] %3d%%", barraIM, porcentajeIM);
        fflush(stdout);
        Sleep(70);
    }
    printf("\nCarga completa\n");
}
void cargaDobleFlechawhileIM()
{
    char barraIM[21];
    const char* simboloIM = "<=>";
    int porcentajeIM = 0, posIM;
    printf("Crga Doble Flecha while:\n");
    while (porcentajeIM <= 100)
    {
        posIM = porcentajeIM / 5;
        if (posIM > 17) posIM = 17;
        for (int i = 0; i < 20; i++)
            barraIM[i] = ' ';
        for (int j = 0; j < 3; j++)
            barraIM[posIM + j] = simboloIM[j];
        barraIM[20] = '\0';
        printf("\r[%s] %3d%%", barraIM, porcentajeIM);
        fflush(stdout);
        Sleep(80);
        porcentajeIM ++;
    }

    printf("\nCarga completa\n");
}
void cargaDobleFlechaDoWhileIM()
{
    char barraIM[21];
    const char* simboloIM = "<=>";
    int porcentajeIM = 0, posIM;
    printf("Craga Doble Flecha dowhile:\n");
    do
    {
        posIM = porcentajeIM / 5;
        if (posIM > 17) posIM = 17;
        for (int i = 0; i < 20; i++)
            barraIM[i] = ' ';
        for (int j = 0; j < 3; j++)
            barraIM[posIM + j] = simboloIM[j];
        barraIM[20] = '\0';
        printf("\r[%s] %3d%%", barraIM, porcentajeIM);
        fflush(stdout);
        Sleep(90);
        porcentajeIM ++;
    }
    while (porcentajeIM <= 100);
    printf("\nCarga completa\n");
}
void cargaFlechaSpinnerForIM()
{
    char barraIM[21];                 
    char spinnerIM[] = {'\\','|','/','-'};
    int porcentajeIM, numIM, idxIM;
    printf("Carga Flecha Spiner for:\n");
    for (porcentajeIM = 0; porcentajeIM <= 100; porcentajeIM ++)
    {
        numIM = porcentajeIM * 20 / 100;      
        idxIM = porcentajeIM / 5 % 4;           
        for (int i = 0; i < numIM; i++)
            barraIM[i] = '=';
        if (numIM < 20)
            barraIM[numIM++] = spinnerIM[idxIM];
        for (int i = numIM; i < 20; i++)
            barraIM[i] = ' ';
        barraIM[20] = '\0';
        printf("\r[%s] %3d%%", barraIM, porcentajeIM);
        fflush(stdout);
        Sleep(100);
    }
    printf("\nCarga completa\n");
}

void cargaFlechaSpinnerWhileIM()
{
    char barraIM[21];
    char spinnerIM[] = {'\\','|','/','-'};
    int porcentajeIM = 0, numIM, idxIM;

    printf("Craga Flecha Spinner while:\n");
    while (porcentajeIM <= 100)
    {
        numIM = porcentajeIM * 20 / 100;
        idxIM = porcentajeIM / 5 % 4;
        for (int i = 0; i < numIM; i++)
            barraIM[i] = '=';
        if (numIM < 20)
            barraIM[numIM++] = spinnerIM[idxIM];
        for (int i = numIM; i < 20; i++)
            barraIM[i] = ' ';
        barraIM[20] = '\0';
        printf("\r[%s] %3d%%", barraIM, porcentajeIM);
        fflush(stdout);
        Sleep(100);
        porcentajeIM ++;
    }
    printf("\nCarga completa\n");
}
void cargaFlechaSpinnerDoWhileIM()
{
    char barraIM[21];
    char spinnerIM[] = {'\\','|','/','-'};
    int porcentajeIM = 0, numIM, idxIM;
    printf("Carga Flecha Spinner dowhile:\n");
    do
    {
        numIM = porcentajeIM * 20 / 100;
        idxIM = porcentajeIM / 5 % 4;
        for (int i = 0; i < numIM; i++)
            barraIM[i] = '=';
        if (numIM < 20)
            barraIM[numIM++] = spinnerIM[idxIM];
        for (int i = numIM; i < 20; i++)
            barraIM[i] = ' ';
        barraIM[20] = '\0';
        printf("\r[%s] %3d%%", barraIM, porcentajeIM);
        fflush(stdout);
        Sleep(100);
        porcentajeIM ++;
    }
    while (porcentajeIM <= 100);
    printf("\nCarga completa\n");
}
void cargaNombreForIM()
{
    char nombreIM[100];      
    printf("Su Nombre: ");
    fgets(nombreIM, sizeof(nombreIM), stdin);
    nombreIM[strcspn(nombreIM, "\n")] = '\0';
    int lonIM = strlen(nombreIM);
    char tempIM[100]; 
    printf("Cargando Nombre for:\n");
    for (int iIM = 1; iIM <= lonIM; iIM++)
    {
        memcpy(tempIM, nombreIM, iIM);
        tempIM[iIM] = '\0';
        int porcentajeIM = iIM * 100 / lonIM;
        printf("\r[%s] %3d%%", tempIM, porcentajeIM);
        fflush(stdout);
        Sleep(400);
    }
    printf("\nCarga completa: %s\n", nombreIM);
}
void cargaNombreWhileIM()
{
    char nombreIM[100];
    printf("Su Nombre: ");
    fgets(nombreIM, sizeof(nombreIM), stdin);
    nombreIM[strcspn(nombreIM, "\n")] = '\0';
    int lonIM = strlen(nombreIM);
    char tempIM[100];
    int iIM = 1;
    printf("Cargando Nombre while:\n");
    while (iIM <= lonIM)
    {
        memcpy(tempIM, nombreIM, iIM);
        tempIM[iIM] = '\0';
        int porcentajeIM = iIM * 100 / lonIM;
        printf("\r[%s] %3d%%", tempIM, porcentajeIM);
        fflush(stdout);
        Sleep(300);
        iIM++;
    }
    printf("\nCarga completa: %s\n", nombreIM);
}
void cargaNombreDoWhileIM()
{
    char nombreIM[100];
    printf("Su Nombre: ");
    fgets(nombreIM, sizeof(nombreIM), stdin);
    nombreIM[strcspn(nombreIM, "\n")] = '\0';
    int lonIM = strlen(nombreIM);
    char tempIM[100];
    int iIM = 1;
    printf("Cargando Nombre dowhile:\n");
    if (lonIM > 0)
    {
        do
        {
            memcpy(tempIM, nombreIM, iIM);
            tempIM[iIM] = '\0';
            int porcentajeIM = iIM * 100 / lonIM;
            printf("\r[%s] %3d%%", tempIM, porcentajeIM);
            fflush(stdout);
            Sleep(300);
            iIM++;
        } while (iIM <= lonIM);
    }
    printf("\nCarga completa: %s\n", nombreIM);
}
void cargaNombreSecuenciaForIM()
{
    char nombreIM[100];
    int lonIM;
    printf("Su Nombre: ");
    fgets(nombreIM, sizeof(nombreIM), stdin);
    nombreIM[strcspn(nombreIM, "\n")] = '\0'; 
    lonIM = strlen(nombreIM);
    printf("Cargando Nombre for:\n");
    for (int iIM = 0; iIM < lonIM; iIM++)
    {
        char letraIM = nombreIM[iIM];
        int porcentajeIM = (iIM + 1) * 100 / lonIM;
        printf("\r%c %3d%%", letraIM, porcentajeIM);
        fflush(stdout);
        Sleep(300);
    }
    printf("\nProceso terminado: %s\n", nombreIM);
}
void cargaNombreSecuencialWhileIM()
{
    char nombreIM[100];
    int lonIM, iIM = 0;
    printf("Su Nombre: ");
    fgets(nombreIM, sizeof(nombreIM), stdin);
    nombreIM[strcspn(nombreIM, "\n")] = '\0';
    lonIM = strlen(nombreIM);
    printf("Cragando Nombre while:\n");
    while (iIM < lonIM)
    {
        char letraIM = nombreIM[iIM];
        int porcentajeIM = (iIM + 1) * 100 / lonIM;
        printf("\r%c %3d%%", letraIM, porcentajeIM);
        fflush(stdout);
        Sleep(300);
        iIM++;
    }
    printf("\nProceso terminado: %s\n", nombreIM);
}
void cargaNombreSecuencialdowhileIM()
{
    char nombreIM[100];
    int lonIM, iIM = 0;
    printf("SU Nombre: ");
    fgets(nombreIM, sizeof(nombreIM), stdin);
    nombreIM[strcspn(nombreIM, "\n")] = '\0';
    lonIM = strlen(nombreIM);
    printf("Cargando Nombre dowhile:\n");
    if (lonIM > 0) 
    {
        do
        {
            char letraIM = nombreIM[iIM];
            int porcentajeIM = (iIM + 1) * 100 / lonIM;
            printf("\r%c %3d%%", letraIM, porcentajeIM);
            fflush(stdout);
            Sleep(300);
            iIM++;
        } while (iIM < lonIM);
    }
    printf("\nProceso terminado: %s\n", nombreIM);
}
void cargaescaleraSpinnerForIM()
{
    char spinnerIM[] = {'\\','|','/','-'};
    printf("Cragando escalera Spinner:\n");
    for (int porcentajeIM = 0; porcentajeIM <= 100; porcentajeIM += 5)
    {
        int peldañoIM = porcentajeIM / 20;
        char simboloIM = spinnerIM[peldañoIM % 4];
        for (int iIM = 0; iIM < peldañoIM; iIM++)
            printf(" ");
        printf("|___ %c %3d%%\n", simboloIM, porcentajeIM);
        Sleep(30);
    }
}
void cargaescaleraSpinnerWhileIM()
{
    char spinnerIM[] = {'\\','|','/','-'};
    int porcentajeIM = 0;
    printf("Crgando escalera Spinner while:\n");
    while (porcentajeIM <= 100)
    {
        int peldañoIM = porcentajeIM / 20;
        char simboloIM = spinnerIM[peldañoIM % 4];
        for (int iIM = 0; iIM < peldañoIM; iIM++)
            printf(" ");
        printf("|___ %c %3d%%\n", simboloIM, porcentajeIM);
        Sleep(30);
        porcentajeIM += 5;
    }
}
void cargaescaleraSpinnerDoWhileIM()
{
    char spinnerIM[] = {'\\','|','/','-'};
    int porcentajeIM = 0;
    printf("Cragando escalera Spinner dowhile:\n");
    do
    {
        int peldañoIM = porcentajeIM / 20;
        char simboloIM = spinnerIM[peldañoIM % 4];
        for (int iIM = 0; iIM < peldañoIM; iIM++)
            printf(" ");
        printf("|___ %c %3d%%\n", simboloIM, porcentajeIM);
        Sleep(30);
        porcentajeIM += 5;
    }
    while (porcentajeIM <= 100);
}
void cargaescaleraWaitingForIM()
{
    const char* patronIM[2] = {"o0o", "0o0"};
    printf("Caragando Escalera Waiting for:\n");
    for (int porcentajeIM = 0; porcentajeIM <= 100; porcentajeIM += 5)
    {
        int peldañoIM = porcentajeIM / 20;
        const char* spinIM = patronIM[peldañoIM % 2];
        for (int iIM = 0; iIM < peldañoIM; iIM++)
            printf("    ");  
        printf("|___ %s %3d%%\n", spinIM, porcentajeIM);
        Sleep(30);
    }
}
void cargaescaleraWaitingWhileIM()
{
    const char* patronIM[2] = {"o0o", "0o0"};
    int porcentajeIM = 0;
    printf("Cargando Escalera Waiting while:\n");
    while (porcentajeIM <= 100)
    {
        int peldañoIM = porcentajeIM / 20;
        const char* spinIM = patronIM[peldañoIM % 2];
        for (int iIM = 0; iIM < peldañoIM; iIM++)
            printf("    ");
        printf("|___ %s %3d%%\n", spinIM, porcentajeIM);

        Sleep(30);
        porcentajeIM += 5;
    }
}
void cargaescaleraWaitingDoWhileIM()
{
    const char* patronIM[2] = {"o0o", "0o0"};
    int porcentajeIM = 0;
    printf("Cargando Escalera Waiting dowhile:\n");
    do
    {
        int peldañoIM = porcentajeIM / 20;
        const char* spinIM = patronIM[peldañoIM % 2];
        for (int iIM = 0; iIM < peldañoIM; iIM++)
            printf("    ");
        printf("|___ %s %3d%%\n", spinIM, porcentajeIM);
        Sleep(30);
        porcentajeIM += 5;
    }
    while (porcentajeIM <= 100);
}
void cargaFigurasForIM()
{
    const char* figurasIM[3] = {"\\|||/", "(> <)", "ooO-(_)-Ooo"};
    int maxDesplIM = 30, pasoIM, idxIM;
    printf("Cargando Figura for:\n");
    for (pasoIM = 0; pasoIM <= maxDesplIM; pasoIM++)
    {
        for (int iIM = 0; iIM < pasoIM; iIM++) printf(" ");
        idxIM = pasoIM % 3;
        printf("\r%s", figurasIM[idxIM]);
        fflush(stdout);
        Sleep(200);
    }
    for (pasoIM = maxDesplIM; pasoIM >= 0; pasoIM--)
    {
        for (int iIM = 0; iIM < pasoIM; iIM++) printf(" ");
        idxIM = pasoIM % 3;
        printf("\r%s", figurasIM[idxIM]);
        fflush(stdout);
        Sleep(200);
    }
    printf("\n");
}
void cargaFigurasWhileIM()
{
    const char* figurasIM[3] = {"\\|||/", "(> <)", "ooO-(_)-Ooo"};
    int maxDesplIM = 30, pasoIM = 0, idxIM;
    printf("Cargando Figura while:\n");
    while (pasoIM <= maxDesplIM)
    {
        for (int iIM = 0; iIM < pasoIM; iIM++) printf(" ");
        idxIM = pasoIM % 3;
        printf("\r%s", figurasIM[idxIM]);
        fflush(stdout);
        Sleep(200);
        pasoIM++;
    }
    while (pasoIM >= 0)
    {
        for (int iIM = 0; iIM < pasoIM; iIM++) printf(" ");
        idxIM = pasoIM % 3;
        printf("\r%s", figurasIM[idxIM]);
        fflush(stdout);
        Sleep(200);
        pasoIM--;
    }
    printf("\n");
}
void cargaFigurasDoWhileIM()
{
    const char* figurasIM[3] = {"\\|||/", "(> <)", "ooO-(_)-Ooo"};
    int maxDesplIM = 30, pasoIM = 0, idxIM;
    printf("Cragando Figura dowhile:\n");
    do
    {
        for (int iIM = 0; iIM < pasoIM; iIM++) printf(" ");
        idxIM = pasoIM % 3;
        printf("\r%s", figurasIM[idxIM]);
        fflush(stdout);
        Sleep(200);
        pasoIM++;
    } while (pasoIM <= maxDesplIM);
    do
    {
        for (int iIM = 0; iIM < pasoIM; iIM++) printf(" ");
        idxIM = pasoIM % 3;
        printf("\r%s", figurasIM[idxIM]);
        fflush(stdout);
        Sleep(200);
        pasoIM--;
    } while (pasoIM >= 0);
    printf("\n");
}

    