#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../lib/tool.h"

int JCcontarVocales(char JCfrase[]) {
    int JCcontador = 0;
    for (int i = 0; JCfrase[i] != '\0'; i++) {
        char JCletra = tolower(JCfrase[i]);
        if (JCletra == 'a' || JCletra == 'e' || JCletra == 'i' || JCletra == 'o' || JCletra == 'u') {
            JCcontador++;
        }
    }
    return JCcontador;
}

int JCcontarVocalesDoWhile(char JCfrase[]) {
    int JCcontador = 0;
    int JCi = 0;
    char JCletra;

    do {
        JCletra = tolower(JCfrase[JCi]);
        if (JCletra == 'a' || JCletra == 'e' || JCletra == 'i' || JCletra == 'o' || JCletra == 'u') {
            JCcontador++;
        }
        JCi++;
    } while (JCfrase[JCi] != '\0');

    return JCcontador;
}

int JCcontarVocalesWhile(char JCfrase[]) {
    int JCcontador = 0;
    int JCi = 0;
    char JCletra;

    while (JCfrase[JCi] != '\0') {
        JCletra = tolower(JCfrase[JCi]);
        if (JCletra == 'a' || JCletra == 'e' || JCletra == 'i' || JCletra == 'o' || JCletra == 'u') {
            JCcontador++;
        }
        JCi++;
    }

    return JCcontador;
}

void leaContadorVocales()
{
    int leasizeTexto=100;
    char leatexto[leasizeTexto];
    int leaNroVocalF,leaNroVocalW,leaNroVocalDw;
    leaValidarLetras("Ingrese un texto : ", leatexto, sizeof(leatexto));
    leaNroVocalF = JCcontarVocales(leatexto);
    printf("FOR --> Tiene %d vocales\n",leaNroVocalF);
    leaNroVocalDw = JCcontarVocalesDoWhile(leatexto);
    printf("DO WHILE --> Tiene %d vocales\n",leaNroVocalDw);
    leaNroVocalW = JCcontarVocalesWhile(leatexto);
    printf("WHILE --> Tiene %d vocales\n",leaNroVocalW);
}

int JCcontarConsonantes(char JCfrase[]) {
    int JCcontador = 0;
    for (int i = 0; JCfrase[i] != '\0'; i++) {
        char JCletra = tolower(JCfrase[i]);
        if (JCletra != 'a' && JCletra != 'e' && JCletra != 'i' && JCletra != 'o' && JCletra != 'u' && JCletra != ' ') {
            JCcontador++;
        }
    }
    return JCcontador;
}

int JCcontarConsonantesDoWhile(char JCfrase[]) {
    int JCcontador = 0;
    int JCi = 0;
    char JCletra;

    do {
        JCletra = tolower(JCfrase[JCi]);
        if (JCletra != 'a' && JCletra != 'e' && JCletra != 'i' && JCletra != 'o' && JCletra != 'u' && JCletra != ' ') {
            JCcontador++;
        }
        JCi++;
    } while (JCfrase[JCi] != '\0');

    return JCcontador;
}

int JCcontarConsonantesWhile(char JCfrase[]) {
    int JCcontador = 0;
    int JCi = 0;
    char JCletra;

    while (JCfrase[JCi] != '\0') {
        JCletra = tolower(JCfrase[JCi]);
        if (JCletra != 'a' && JCletra != 'e' && JCletra != 'i' && JCletra != 'o' && JCletra != 'u' && JCletra != ' ') {
            JCcontador++;
        }
        JCi++;
    }

    return JCcontador;
}

void leaContarConsonates()
{
    int leasizeTexto=100;
    char leatexto[leasizeTexto];
    int leaConsonanteF,leaConsonanteW,leaConsonanteDw;
    leaValidarLetras("Ingrese un texto : ", leatexto, sizeof(leatexto));
    leaConsonanteF = JCcontarConsonantes(leatexto);
    printf("FOR --> Tiene %d letras\n",leaConsonanteF);
    leaConsonanteDw = JCcontarConsonantesDoWhile(leatexto);
    printf("DO WHILE --> Tiene %d letras\n",leaConsonanteDw);
    leaConsonanteW = JCcontarConsonantesWhile(leatexto);
    printf("WHILE --> Tiene %d letras\n",leaConsonanteW);
}

char leaLeerVocal(char *leaMensaje)
{
    char leaVocal;
    bool leaEntradaValida;
    do
    {
        printf("%s",leaMensaje);
        leaVocal = getchar();
        leaEntradaValida = (getchar() == '\n');
        if (!leaEntradaValida) {
            while (getchar() != '\n');
        }else{
            leaVocal = tolower(leaVocal);
            if (leaVocal != 'a' && leaVocal != 'e' && leaVocal != 'i' && leaVocal != 'o' && leaVocal != 'u')
            {
                printf("Erro de entrada.\nVuelva a Intentarlo\n");
            }
            
        }
    } while (!leaEntradaValida);
    return leaVocal;
}

void JCeliminarVocales_for(char JCpalabra[],char leaVocal) {
    printf("Sin vocal (for): ");
    for (int JCi = 0; JCpalabra[JCi] != '\0'; JCi++) {
        char JCletra = tolower(JCpalabra[JCi]);
        char leaVocalLower = tolower(leaVocal);
        if (JCletra != leaVocalLower) {
            printf("%c", JCpalabra[JCi]);
        }
    }
    printf("\n");
}

void JCeliminarVocal_while(char JCpalabra[], char leaVocal) {
    printf("Sin vocal (while): ");
    int JCi = 0;
    while (JCpalabra[JCi] != '\0') {
        char JCletra = tolower(JCpalabra[JCi]);
        char leaVocalLower = tolower(leaVocal);
        if (JCletra != leaVocalLower) {
            printf("%c", JCpalabra[JCi]);
        }
        JCi++;
    }
    printf("\n");
}

void JCeliminarVocal_doWhile(char JCpalabra[], char leaVocal) {
    printf("Sin vocal (do-while): ");
    int JCi = 0;
    do {
        char JCletra = tolower(JCpalabra[JCi]);
        char leaVocalLower = tolower(leaVocal);
        if (JCletra != leaVocalLower && JCpalabra[JCi] != '\0') {
            printf("%c", JCpalabra[JCi]);
        }
        JCi++;
    } while (JCpalabra[JCi - 1] != '\0');
    printf("\n");
}

void leaEliminarVocal()
{
    int leasizeTexto=100;
    char leatexto[leasizeTexto];
    char leanrovocales;
    leaValidarLetras("Ingrese un texto: ", leatexto, sizeof(leatexto));
    leanrovocales = leaLeerVocal("Ingrese la vocal: ");
    JCeliminarVocales_for(leatexto,leanrovocales);
    JCeliminarVocal_while(leatexto,leanrovocales);
    JCeliminarVocal_doWhile(leatexto,leanrovocales);
}

char leaLeerConsonante(char *leaMensaje)
{
    char leaConsonante;
    bool leaEntradaValida;
    
    do
    {
        printf("%s", leaMensaje);
        leaConsonante = getchar();
        leaEntradaValida = (getchar() == '\n');
        
        if (!leaEntradaValida) 
        {
            while (getchar() != '\n');
        }
        else{
            leaConsonante = tolower(leaConsonante);
            if (!isalpha(leaConsonante)){
                printf("\nError de entrada.\n");
            }
            else if (leaConsonante == 'a' || leaConsonante == 'e' || leaConsonante == 'i' || leaConsonante == 'o' || leaConsonante == 'u') {
                printf("\nError de entrada.\n");
            }
            else {
                return leaConsonante;
            }
        }
        
        printf("Vuelva a intentarlo.\n");
    } while (true);
}

void JCeliminarLetra_for(char JCfrase[], char JCletraEliminar) {
    printf("Frase sin '%c' (for): ", JCletraEliminar);
    for (int JCi = 0; JCfrase[JCi] != '\0'; JCi++) {
        if (tolower(JCfrase[JCi]) != tolower(JCletraEliminar)) {
            printf("%c", JCfrase[JCi]);
        }
    }
    printf("\n");
}

void JCeliminarLetra_dowhile(char JCfrase[], char JCletraEliminar) {
    int JCi = 0;
    printf("Frase sin '%c' (do-while): ", JCletraEliminar);

    if (JCfrase[0] == '\0') return;

    do {
        if (tolower(JCfrase[JCi]) != tolower(JCletraEliminar)) {
            printf("%c", JCfrase[JCi]);
        }
        JCi++;
    } while (JCfrase[JCi] != '\0');

    printf("\n");
}

void JCeliminarLetra_while(char JCfrase[], char JCletraEliminar) {
    int JCi = 0;
    printf("Frase sin '%c' (while): ", JCletraEliminar);
    while (JCfrase[JCi] != '\0') {
        if (tolower(JCfrase[JCi]) != tolower(JCletraEliminar)) {
            printf("%c", JCfrase[JCi]);
        }
        JCi++;
    }
    printf("\n");
}

void leaEliminarConsonate()
{
    int leasizeTexto=100;
    char leatexto[leasizeTexto];
    char leanroCon;
    leaValidarLetras("Ingrese un texto: ", leatexto, sizeof(leatexto));
    leanroCon = leaLeerVocal("Ingrese la consonante: ");
    JCeliminarLetra_for(leatexto,leanroCon);
    JCeliminarLetra_dowhile(leatexto,leanroCon);
    JCeliminarLetra_while(leatexto,leanroCon);
}

void JCinvertirConVocalesMayus_for(char JCpalabra[]) {
    int JClongitud = strlen(JCpalabra);
    printf("Invertida con vocales mayusculas (for): ");
    for (int JCi = JClongitud - 1; JCi >= 0; JCi--) {
        char JCletra = JCpalabra[JCi];
        char JCletraMin = tolower(JCletra);
        if (JCletraMin == 'a' || JCletraMin == 'e' || JCletraMin == 'i' || JCletraMin == 'o' || JCletraMin == 'u') {
            printf("%c", toupper(JCletraMin));
        } else {
            printf("%c", JCletraMin);
        }
    }
    printf("\n");
}

void JCinvertirConVocalesMayus_dowhile(char JCpalabra[]) {
    int JCi = strlen(JCpalabra) - 1;
    printf("Invertida con vocales mayusculas (do-while): ");

    if (JCi < 0) return;

    do {
        char JCletra = JCpalabra[JCi];
        char JCletraMin = tolower(JCletra);
        if (JCletraMin == 'a' || JCletraMin == 'e' || JCletraMin == 'i' || JCletraMin == 'o' || JCletraMin == 'u') {
            printf("%c", toupper(JCletraMin));
        } else {
            printf("%c", JCletraMin);
        }
        JCi--;
    } while (JCi >= 0);

    printf("\n");
}

void JCinvertirConVocalesMayus_while(char JCpalabra[]) {
    int JCi = strlen(JCpalabra) - 1;
    printf("Invertida con vocales mayusculas (while): ");
    while (JCi >= 0) {
        char JCletra = JCpalabra[JCi];
        char JCletraMin = tolower(JCletra);
        if (JCletraMin == 'a' || JCletraMin == 'e' || JCletraMin == 'i' || JCletraMin == 'o' || JCletraMin == 'u') {
            printf("%c", toupper(JCletraMin));
        } else {
            printf("%c", JCletraMin);
        }
        JCi--;
    }
    printf("\n");
}

void leaInvertirVocal()
{
    int leasizeTexto=100;
    char leatexto[leasizeTexto];
    leaValidarLetras("Ingrese un texto : ", leatexto, sizeof(leatexto));
    JCinvertirConVocalesMayus_for(leatexto);
    JCinvertirConVocalesMayus_dowhile(leatexto);
    JCinvertirConVocalesMayus_while(leatexto);
}

void JCinvertirConsonantesMayus_for(char JCpalabra[]) {
    int JClongitud = strlen(JCpalabra);
    printf("FOR: ");
    for (int JCi = JClongitud - 1; JCi >= 0; JCi--) {
        char JCletra = tolower(JCpalabra[JCi]);
        if (JCletra == 'a' || JCletra == 'e' || JCletra == 'i' || JCletra == 'o' || JCletra == 'u') {
            printf("%c", JCletra);  // vocal en minúscula
        } else {
            printf("%c", toupper(JCletra));  // consonante en mayúscula
        }
    }
    printf("\n");
}

void JCinvertirConsonantesMayus_while(char JCpalabra[]) {
    int JCi = strlen(JCpalabra) - 1;
    printf("WHILE: ");
    while (JCi >= 0) {
        char JCletra = tolower(JCpalabra[JCi]);
        if (JCletra == 'a' || JCletra == 'e' || JCletra == 'i' || JCletra == 'o' || JCletra == 'u') {
            printf("%c", JCletra);
        } else {
            printf("%c", toupper(JCletra));
        }
        JCi--;
    }
    printf("\n");
}

void JCinvertirConsonantesMayus_dowhile(char JCpalabra[]) {
    int JCi = strlen(JCpalabra) - 1;
    printf("DO-WHILE: ");
    if (JCi < 0) return;

    do {
        char JCletra = tolower(JCpalabra[JCi]);
        if (JCletra == 'a' || JCletra == 'e' || JCletra == 'i' || JCletra == 'o' || JCletra == 'u') {
            printf("%c", JCletra);
        } else {
            printf("%c", toupper(JCletra));
        }
        JCi--;
    } while (JCi >= 0);
    printf("\n");
}

void leaInvertirCon()
{
    int leasizeTexto=100;
    char leatexto[leasizeTexto];
    leaValidarLetras("Ingrese un texto : ", leatexto, sizeof(leatexto));
    JCinvertirConsonantesMayus_for(leatexto);
    JCinvertirConsonantesMayus_while(leatexto);
    JCinvertirConsonantesMayus_dowhile(leatexto);
}

void JCeliminarLetraS__for(char JCfrase[]) {
    printf("FOR: ");
    for (int JCi = 0; JCfrase[JCi] != '\0'; JCi++) {
        char JCletra = toupper(JCfrase[JCi]);
        if (JCletra != 'J') {
            printf("%c", JCletra);
        }
    }
    printf("\n");
}

void JCeliminarLetraS__while(char JCfrase[]) {
    int JCi = 0;
    printf("WHILE: ");
    while (JCfrase[JCi] != '\0') {
        char JCletra = toupper(JCfrase[JCi]);
        if (JCletra != 'J') {
            printf("%c", JCletra);
        }
        JCi++;
    }
    printf("\n");
}

void JCeliminarLetraS__dowhile(char JCfrase[]) {
    int JCi = 0;
    printf("DO-WHILE: ");
    if (JCfrase[0] == '\0') return;

    do {
        char JCletra = toupper(JCfrase[JCi]);
        if (JCletra != 'J') {
            printf("%c", JCletra);
        }
        JCi++;
    } while (JCfrase[JCi] != '\0');
    printf("\n");
}

void leaEliminarLetra()
{
    int leasizeTexto=100;
    char leatexto[leasizeTexto];
    leaValidarLetras("Ingrese un texto : ", leatexto, sizeof(leatexto));
    JCeliminarLetraS__for(leatexto);
    JCeliminarLetraS__while(leatexto);
    JCeliminarLetraS__dowhile(leatexto);

}

void JC_ordenar(char* palabra) {
    int len = strlen(palabra);
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (palabra[i] > palabra[j]) {
                char temp = palabra[i];
                palabra[i] = palabra[j];
                palabra[j] = temp;
            }
        }
    }
}

int JC_esAnagrama(char* p1, char* p2) {
    int leasizeT = 50;
    char temp1[leasizeT], temp2[leasizeT];
    strcpy(temp1, p1);
    strcpy(temp2, p2);
    JC_ordenar(temp1);
    JC_ordenar(temp2);
    return strcmp(temp1, temp2) == 0;
}

void leaAnagramaFor() {
    int leaTotal = 5;
    int leaSizeT = 50;
    srand(time(NULL));
    
    char JC_palabra[5][50] = {"delira", "ballena", "alondra", "esparta", "enrique"};
    char JC_anagrama[5][50] = {"lidera", "llenaba", "ladrona", "apartes", "quieren"};
    
    int leaIndice = rand() % leaTotal;
    char *leaPalabraAc = JC_palabra[leaIndice];
    char *leaAnagramaAc = JC_anagrama[leaIndice];
    printf("\nAnagrama For\n");
    printf("Adivina un anagrama de: %s\n", leaPalabraAc);  
    bool leaAcierto = false;
    char JC_intento[leaSizeT];

    for (int JC_intentos = 0; JC_intentos < 3; JC_intentos++) {  
        printf("Intento %d: ", JC_intentos + 1);
        scanf("%s", JC_intento);

        if (JC_esAnagrama(leaPalabraAc, JC_intento) && strcmp(JC_intento, leaAnagramaAc) == 0) {
            printf("Correcto, JC! El anagrama es: %s\n", leaAnagramaAc); 
            leaAcierto = true;
            break;
        } else {
            printf("Incorrecto");
            if (JC_intentos < 2) { 
                printf(", intenta de nuevo\n");
            } else {
                printf("\n");
            }
        }
    }
    
    if(!leaAcierto) {
        printf("Fallaste, JC. La respuesta era: %s\n", leaAnagramaAc);
    }
}  

void leaAnagramaWhile() {
    int leaTotal = 5;
    int leaSizeT = 50;
    srand(time(NULL));
    
    char JC_palabra[5][50] = {"delira", "ballena", "alondra", "esparta", "enrique"};
    char JC_anagrama[5][50] = {"lidera", "llenaba", "ladrona", "apartes", "quieren"};
    
    int leaIndice = rand() % leaTotal;
    char *leaPalabraAc = JC_palabra[leaIndice];
    char *leaAnagramaAc = JC_anagrama[leaIndice];
    printf("\nAnagrama While\n");
    printf("Adivina un anagrama de: %s\n", leaPalabraAc);  
    bool leaAcierto = false;
    char JC_intento[leaSizeT];
    
    int JC_intentos = 0;
    while (JC_intentos < 3) {
        printf("Intento %d: ", JC_intentos + 1);
        scanf("%s", JC_intento);

        if (JC_esAnagrama(leaPalabraAc, JC_intento) && strcmp(JC_intento, leaAnagramaAc) == 0) {
            printf("Correcto, JC! El anagrama es: %s\n", leaAnagramaAc); 
            leaAcierto = true;
            break;
        } else {
            printf("Incorrecto");
            if (JC_intentos < 2) { 
                printf(", intenta de nuevo\n");
            } else {
                printf("\n");
            }
        }
        JC_intentos++;
    }
    
    if(!leaAcierto) {
        printf("Fallaste, JC. La respuesta era: %s\n", leaAnagramaAc);
    }
}

void leaAnagramaDoWhile() {
    int leaTotal = 5;
    int leaSizeT = 50;
    srand(time(NULL));
    
    char JC_palabra[5][50] = {"delira", "ballena", "alondra", "esparta", "enrique"};
    char JC_anagrama[5][50] = {"lidera", "llenaba", "ladrona", "apartes", "quieren"};
    
    int leaIndice = rand() % leaTotal;
    char *leaPalabraAc = JC_palabra[leaIndice];
    char *leaAnagramaAc = JC_anagrama[leaIndice];
    printf("\nAnagrama Do While\n");
    printf("Adivina un anagrama de: %s\n", leaPalabraAc);  
    bool leaAcierto = false;
    char JC_intento[leaSizeT];
    
    int JC_intentos = 0;
    do {
        printf("Intento %d: ", JC_intentos + 1);
        scanf("%s", JC_intento);

        if (JC_esAnagrama(leaPalabraAc, JC_intento) && strcmp(JC_intento, leaAnagramaAc) == 0) {
            printf("Correcto, JC! El anagrama es: %s\n", leaAnagramaAc); 
            leaAcierto = true;
            break;
        } else {
            printf("Incorrecto");
            if (JC_intentos < 2) { 
                printf(", intenta de nuevo\n");
            } else {
                printf("\n");
            }
        }
        JC_intentos++;
    } while (JC_intentos < 3);
    
    if(!leaAcierto) {
        printf("Fallaste, JC. La respuesta era: %s\n", leaAnagramaAc);
    }
}

void leaConvertirMayMinFor(char JC_frase[])
{
    char JC_resultado[100];
    int JC_contador = 0;

    for (int i = 0; JC_frase[i] != '\0'; i++) {
        if (JC_frase[i] != ' ') {
            JC_resultado[i] = (JC_contador % 2 == 0) ? toupper(JC_frase[i]) : tolower(JC_frase[i]);
            JC_contador++;
        } else {
            JC_resultado[i] = ' ';
        }
    }

    JC_resultado[strlen(JC_frase)] = '\0';

    printf("FOR -> %s\n", JC_resultado);
}

void leaConvertirMayMinWhile(char JC_frase[])
{
    char JC_resultado[100];
    int i = 0, JC_contador = 0;

    while (JC_frase[i] != '\0') {
        if (JC_frase[i] != ' ') {
            JC_resultado[i] = (JC_contador % 2 == 0) ? toupper(JC_frase[i]) : tolower(JC_frase[i]);
            JC_contador++;
        } else {
            JC_resultado[i] = ' ';
        }
        i++;
    }

    JC_resultado[i] = '\0';

    printf("WHILE -> %s\n", JC_resultado);
}

void leaConvertirMayMinDoWhile(char JC_frase[])
{
    char JC_resultado[100];
    int i = 0, JC_contador = 0;

    do {
        if (JC_frase[i] != '\0') {
            if (JC_frase[i] != ' ') {
                JC_resultado[i] = (JC_contador % 2 == 0) ? toupper(JC_frase[i]) : tolower(JC_frase[i]);
                JC_contador++;
            } else {
                JC_resultado[i] = ' ';
            }
            i++;
        }
    } while (JC_frase[i] != '\0');

    JC_resultado[i] = '\0';

    printf("DO-WHILE -> %s\n", JC_resultado);
}

void leaConvertirMayMin() {
    int sizeTexto=100;
    char texto[sizeTexto];
    char nrovocales;
    leaValidarLetras("Ingrese un texto : ", texto, sizeof(texto));
    printf("El texto ingresado es: %s\n", texto);
    leaConvertirMayMinFor(texto);
    leaConvertirMayMinWhile(texto);
    leaConvertirMayMinDoWhile(texto);
}

void ControladorCadenaCaracteres()
{
    printf("Cadena de Caracteres:\n");
    leaContadorVocales();
    leaContarConsonates();
    leaEliminarVocal();
    leaEliminarConsonate();
    leaInvertirVocal();
    leaInvertirCon();
    leaEliminarLetra();
    leaAnagramaFor();
    leaAnagramaWhile();
    leaAnagramaDoWhile();
    leaConvertirMayMin();

}