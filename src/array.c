#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAX_PALABRAS 10
#define MAX_LONG_PALABRA 50

#define NAME "Alexis"

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

#define NOMBRE "Alexis Liquinchana"
#define liaNOMBRE_LEN (sizeof(NOMBRE) - 1)
#define liaMATRIX_SIZE 7


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

void liaarrays2For(int liatam, char liach) 
{
    printf("\nArrays 2 For\n");
    for (int i = 0; i < liatam; i++) 
    {
        for (int j = 0; j < liatam; j++) 
        {
            if (i == 0 || i == liatam / 2 || j == 0 || j == liatam - 1)
                printf("%c", liach);
            else
                printf(" ");
        }

        printf("   ");

        for (int j = 0; j < liatam; j++) 
        {
            if (j == 0 || i == liatam - 1)
                printf("%c", liach);
            else
                printf(" ");
        }

        printf("\n");
    }
}

void liaarrays2While(int liatam, char liach) 
{
    printf("\nArrays 2 While\n");
    int i = 0;
    while (i < liatam) 
    {
        int j = 0;
        while (j < liatam) 
        {
            if (i == 0 || i == liatam / 2 || j == 0 || j == liatam - 1)
                printf("%c", liach);
            else
                printf(" ");
            j++;
        }

        printf("   ");

        j = 0;
        while (j < liatam) 
        {
            if (j == 0 || i == liatam - 1)
                printf("%c", liach);
            else
                printf(" ");
            j++;
        }

        printf("\n");
        i++;
    }
}

void liaarrays2DoWhile(int liatam, char liach) 
{
    printf("\nArrays 2 DoWhile\n");
    int i = 0;
    if (liatam > 0) 
    {
        do 
        {
            int j = 0;
            do 
            {
                if (i == 0 || i == liatam / 2 || j == 0 || j == liatam - 1)
                    printf("%c", liach);
                else
                    printf(" ");
                j++;
            } while (j < liatam);

            printf("   ");

            j = 0;
            do 
            {
                if (j == 0 || i == liatam - 1)
                    printf("%c", liach);
                else
                    printf(" ");
                j++;
            } while (j < liatam);

            printf("\n");
            i++;
        } while (i < liatam);
    }
}

int f(int liax) 
{
    return 2 * liax;
}

void liaarrays3For() 
{
    const char *lianame = NAME;
    int lialen = strlen(lianame);
    if (lialen == 0) return;
    int liarows = f(lialen) + 1;
    int liacols = 4 + lialen;
    char liagraph[liarows][liacols];

    for (int i = 0; i < liarows; i++)
        for (int j = 0; j < liacols; j++)
            liagraph[i][j] = ' ';

    for (int y = 0; y <= f(lialen); y++) 
    {
        int r = liarows - 1 - y;
        if (y < 10)
            liagraph[r][1] = '0' + y;
        else 
        {
            liagraph[r][0] = '0' + y / 10;
            liagraph[r][1] = '0' + y % 10;
        }
        liagraph[r][2] = '|';
    }

    for (int j = 3; j < liacols; j++)
        liagraph[liarows - 1][j] = '_';

    for (int i = 0; i < lialen; i++) 
    {
        int r = liarows - 1 - f(i + 1);
        int c = i + 1 + 3;
        liagraph[r][c] = lianame[i];
    }

    printf("\nArrays 3 For\n");
    for (int i = 0; i < liarows; i++) 
    {
        for (int j = 0; j < liacols; j++)
            putchar(liagraph[i][j]);
        putchar('\n');
    }
}

void liaarrays3While() 
{
    const char *lianame = NAME;
    int lialen = strlen(lianame);
    if (lialen == 0) return;
    int liarows = f(lialen) + 1;
    int liacols = 4 + lialen;
    char liagraph[liarows][liacols];

    int i = 0;
    while (i < liarows) 
    {
        int j = 0;
        while (j < liacols) 
        {
            liagraph[i][j] = ' ';
            j++;
        }
        i++;
    }

    int y = 0;
    while (y <= f(lialen)) 
    {
        int r = liarows - 1 - y;
        if (y < 10)
            liagraph[r][1] = '0' + y;
        else 
        {
            liagraph[r][0] = '0' + y / 10;
            liagraph[r][1] = '0' + y % 10;
        }
        liagraph[r][2] = '|';
        y++;
    }

    int j = 3;
    while (j < liacols) 
    {
        liagraph[liarows - 1][j] = '_';
        j++;
    }

    i = 0;
    while (i < lialen) 
    {
        int r = liarows - 1 - f(i + 1);
        int c = i + 1 + 3;
        liagraph[r][c] = lianame[i];
        i++;
    }

    printf("\nArrays 3 While\n");
    i = 0;
    while (i < liarows) 
    {
        j = 0;
        while (j < liacols) 
        {
            putchar(liagraph[i][j]);
            j++;
        }
        putchar('\n');
        i++;
    }
}

void liaarrays3DoWhile() 
{
    const char *lianame = NAME;
    int lialen = strlen(lianame);
    if (lialen == 0) return;
    int liarows = f(lialen) + 1;
    int liacols = 4 + lialen;
    char liagraph[liarows][liacols];

    int i = 0;
    if (liarows > 0 && liacols > 0) {
        do 
        {
            int j = 0;
            do 
            {
                liagraph[i][j] = ' ';
                j++;
            } while (j < liacols);
            i++;
        } while (i < liarows);
    }

    int y = 0;
    if (f(lialen) >= 0) 
    {
        do 
        {
            int r = liarows - 1 - y;
            if (y < 10)
                liagraph[r][1] = '0' + y;
            else 
            {
                liagraph[r][0] = '0' + y / 10;
                liagraph[r][1] = '0' + y % 10;
            }
            liagraph[r][2] = '|';
            y++;
        } while (y <= f(lialen));
    }

    int j = 3;
    if (liacols > 3) 
    {
        do 
        {
            liagraph[liarows - 1][j] = '_';
            j++;
        } while (j < liacols);
    }

    i = 0;
    if (lialen > 0) 
    {
        do 
        {
            int r = liarows - 1 - f(i + 1);
            int c = i + 1 + 3;
            liagraph[r][c] = lianame[i];
            i++;
        } while (i < lialen);
    }

    printf("\nArrays 3 DoWhile\n");
    i = 0;
    if (liarows > 0) 
    {
        do 
        {
            j = 0;
            do 
            {
                putchar(liagraph[i][j]);
                j++;
            } while (j < liacols);
            putchar('\n');
            i++;
        } while (i < liarows);
    }
}

int liaclear_screen_enabled = 1; 

void liadelay(int liams) 
{
#ifdef _WIN32
    Sleep(liams);
#else
    usleep(liams * 1000);
#endif
}

void liaprint_matrix_conditional(char liamat[liaMATRIX_SIZE][liaMATRIX_SIZE], int *liaprintedOnce) {
    if (liaclear_screen_enabled && *liaprintedOnce) 
    {
        system("cls || clear");
    }
    *liaprintedOnce = 1;
    for (int i = 0; i < liaMATRIX_SIZE; i++) 
    {
        for (int j = 0; j < liaMATRIX_SIZE; j++) 
        {
            printf("%c  ", liamat[i][j]);
        }
        printf("\n");
    }
}

void liaarrays4For() 
{
    const char* lianombre = "Cayo";
    const char* liaapellido = "Alexis";

    int liaNombre = strlen(lianombre);
    int liaApellido = strlen(liaapellido);
    int n = (liaNombre > liaApellido) ? liaNombre : liaApellido;

    printf("\nArrays 4 For\n");
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (i == j && i < liaApellido)
                printf("%c", liaapellido[i]);
            else if (i + j == n - 1 && i < liaNombre)
                printf("%c", lianombre[i]);
            else
                printf(" ");
        }
        printf("\n");
    }
}

void liaarrays4While() 
{
    const char* lianombre = "Cayo";
    const char* liaapellido = "Alexis";

    int liaNombre = strlen(lianombre);
    int liaApellido = strlen(liaapellido);
    int n = (liaNombre > liaApellido) ? liaNombre : liaApellido;

    printf("\nArrays 4 While\n");
    int i = 0;
    while (i < n) 
    {
        int j = 0;
        while (j < n) 
        {
            if (i == j && i < liaApellido)
                printf("%c", liaapellido[i]);
            else if (i + j == n - 1 && i < liaNombre)
                printf("%c", lianombre[i]);
            else
                printf(" ");
            j++;
        }
        printf("\n");
        i++;
    }
}

void liaarrays4DoWhile() 
{
    const char* lianombre = "Cayo";
    const char* liaapellido = "Alexis";

    int liaNombre = strlen(lianombre);
    int liaApellido = strlen(liaapellido);
    int n = (liaNombre > liaApellido) ? liaNombre : liaApellido;

    printf("\nArrays 4 Do While\n");
    int i = 0;
    if (n > 0) 
    {
        do 
        {
            int j = 0;
            do 
            {
                if (i == j && i < liaApellido)
                    printf("%c", liaapellido[i]);
                else if (i + j == n - 1 && i < liaNombre)
                    printf("%c", lianombre[i]);
                else
                    printf(" ");
                j++;
            } while (j < n);
            printf("\n");
            i++;
        } while (i < n);
    }
}

void liaarrays5For() 
{
    printf("\n--- FOR ---\n");
    char liamatrix[liaMATRIX_SIZE][liaMATRIX_SIZE];
    for (int i = 0; i < liaMATRIX_SIZE; i++)
        for (int j = 0; j < liaMATRIX_SIZE; j++)
            liamatrix[i][j] = ' ';

    int liaplaced[liaNOMBRE_LEN] = {0};
    int liacount = 0;
    srand(time(NULL));
    int liaprintedOnce = 0;

    for (int liaattempts = 0; liacount < liaNOMBRE_LEN && liaattempts < liaMATRIX_SIZE * liaMATRIX_SIZE * liaNOMBRE_LEN * 2; liaattempts++) 
    {
        int r = rand() % liaMATRIX_SIZE;
        int c = rand() % liaMATRIX_SIZE;
        int idx = rand() % liaNOMBRE_LEN;
        if (liamatrix[r][c] == ' ' && !liaplaced[idx]) 
        {
            liamatrix[r][c] = NOMBRE[idx];
            liaplaced[idx] = 1;
            liacount++;
            liaprint_matrix_conditional(liamatrix, &liaprintedOnce);
            liadelay(150);
        }
    }

    int liamarked[liaNOMBRE_LEN] = {0};
    for (int k = 0; k < liaNOMBRE_LEN; k++) 
    {
        char liatarget = NOMBRE[k];
        int liadone = 0;
        for (int liatries = 0; !liadone && liatries < liaMATRIX_SIZE * liaMATRIX_SIZE * 5; liatries++) 
        {
            int r = rand() % liaMATRIX_SIZE;
            int c = rand() % liaMATRIX_SIZE;
            if (liamatrix[r][c] == liatarget && !liamarked[k]) 
            {
                liamatrix[r][c] = '*';
                liamarked[k] = 1;
                liadone = 1;
                liaprint_matrix_conditional(liamatrix, &liaprintedOnce);
                liadelay(200);
            } else if (liamatrix[r][c] == '*' && !liamarked[k]) 
            {
                liamarked[k] = 1;
                liadone = 1;
            }
        }
        if (!liadone && !liamarked[k]) liamarked[k] = 1;
    }

    liaprint_matrix_conditional(liamatrix, &liaprintedOnce);
    printf("Arrays 5 For\n");
    liadelay(3000);
}

void liaarrays5While() 
{
    printf("\n--- WHILE ---\n");
    char liamatrix[liaMATRIX_SIZE][liaMATRIX_SIZE];
    int i = 0;
    while (i < liaMATRIX_SIZE) 
    {
        int j = 0;
        while (j < liaMATRIX_SIZE) 
        {
            liamatrix[i][j] = ' ';
            j++;
        }
        i++;
    }

    int liaplaced[liaNOMBRE_LEN] = {0};
    int liacount = 0, liaattempts = 0;
    int liaprintedOnce = 0;
    while (liacount < liaNOMBRE_LEN && liaattempts < liaMATRIX_SIZE * liaMATRIX_SIZE * liaNOMBRE_LEN * 2) 
    {
        int r = rand() % liaMATRIX_SIZE;
        int c = rand() % liaMATRIX_SIZE;
        int idx = rand() % liaNOMBRE_LEN;
        if (liamatrix[r][c] == ' ' && !liaplaced[idx]) 
        {
            liamatrix[r][c] = NOMBRE[idx];
            liaplaced[idx] = 1;
            liacount++;
            liaprint_matrix_conditional(liamatrix, &liaprintedOnce);
            liadelay(150);
        }
        liaattempts++;
    }

    int liamarked[liaNOMBRE_LEN] = {0}, k = 0;
    while (k < liaNOMBRE_LEN) 
    {
        char liatarget = NOMBRE[k];
        int liadone = 0, liatries = 0;
        while (!liadone && liatries < liaMATRIX_SIZE * liaMATRIX_SIZE * 5)
         {
            int r = rand() % liaMATRIX_SIZE;
            int c = rand() % liaMATRIX_SIZE;
            if (liamatrix[r][c] == liatarget && !liamarked[k]) 
            {
                liamatrix[r][c] = '*';
                liamarked[k] = 1;
                liadone = 1;
                liaprint_matrix_conditional(liamatrix, &liaprintedOnce);
                liadelay(200);
            } else if (liamatrix[r][c] == '*' && !liamarked[k]) 
            {
                liamarked[k] = 1;
                liadone = 1;
            }
            liatries++;
        }
        if (!liadone && !liamarked[k]) liamarked[k] = 1;
        k++;
    }

    liaprint_matrix_conditional(liamatrix, &liaprintedOnce);
    printf("Arrays 5 While\n");
    liadelay(3000);
}

void liaarrays5DoWhile() 
{
    printf("\n--- DO WHILE ---\n");
    char liamatrix[liaMATRIX_SIZE][liaMATRIX_SIZE];
    int i = 0;
    do 
    {
        int j = 0;
        do 
        {
            liamatrix[i][j] = ' ';
            j++;
        } while (j < liaMATRIX_SIZE);
        i++;
    } while (i < liaMATRIX_SIZE);

    int liaplaced[liaNOMBRE_LEN] = {0};
    int liacount = 0, liaattempts = 0;
    int liaprintedOnce = 0;
    do {
        int r = rand() % liaMATRIX_SIZE;
        int c = rand() % liaMATRIX_SIZE;
        int idx = rand() % liaNOMBRE_LEN;
        if (liamatrix[r][c] == ' ' && !liaplaced[idx]) 
        {
            liamatrix[r][c] = NOMBRE[idx];
            liaplaced[idx] = 1;
            liacount++;
            liaprint_matrix_conditional(liamatrix, &liaprintedOnce);
            liadelay(150);
        }
        liaattempts++;
    } while (liacount < liaNOMBRE_LEN && liaattempts < liaMATRIX_SIZE * liaMATRIX_SIZE * liaNOMBRE_LEN * 2);

    int liamarked[liaNOMBRE_LEN] = {0}, k = 0;
    do 
    {
        char liatarget = NOMBRE[k];
        int liadone = 0, liatries = 0;
        do 
        {
            int r = rand() % liaMATRIX_SIZE;
            int c = rand() % liaMATRIX_SIZE;
            if (liamatrix[r][c] == liatarget && !liamarked[k]) 
            {
                liamatrix[r][c] = '*';
                liamarked[k] = 1;
                liadone = 1;
                liaprint_matrix_conditional(liamatrix, &liaprintedOnce);
                liadelay(200);
            } else if (liamatrix[r][c] == '*' && !liamarked[k]) 
            {
                liamarked[k] = 1;
                liadone = 1;
            }
            liatries++;
        } while (!liadone && liatries < liaMATRIX_SIZE * liaMATRIX_SIZE * 5);
        if (!liadone && !liamarked[k]) liamarked[k] = 1;
        k++;
    } while (k < liaNOMBRE_LEN);

    liaprint_matrix_conditional(liamatrix, &liaprintedOnce);
    printf("Arrays 5 DoWhile\n");
    liadelay(3000);
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

    int liatam;
    char liach;

    printf("Arrays2 - Nombre: Alexis Liquinchana => AL\n");

    printf("Ingrese el tamano: ");
    scanf("%d", &liatam);

    printf("Ingrese el caracter: ");
    scanf(" %c", &liach);

    liaarrays2For(liatam, liach);
    liaarrays2While(liatam, liach);
    liaarrays2DoWhile(liatam, liach);
    liaarrays3For();
    liaarrays3While();
    liaarrays3DoWhile();
    
    srand(time(NULL));

    liaclear_screen_enabled = 0;
    liaarrays4For();
    liaarrays4While();
    liaarrays4DoWhile();

    printf("\nPresione ENTER para continuar con Arrays 5...");
    getchar();
    getchar();

    liaclear_screen_enabled = 1;
    liaarrays5For();
    liaarrays5While();
    liaarrays5DoWhile();
    
}