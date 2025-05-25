#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Función para contar vocales
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

int main() {
    char JCfrase[] = "hamburguesa";  // Frase fija
    printf("Frase: %s\n", JCfrase);

    int JCtotalVocales = JCcontarVocales(JCfrase);
    printf("Tiene %d vocales\n", JCtotalVocales);
    return 0;
}
Frase: hamburguesa
Tiene 5 vocales


int JCcontarVocales(char JCfrase[]) {
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

int main() {
    char JCfrase[] = "hamburguesa";
    printf("Frase: %s\n", JCfrase);

    int JCtotalVocales = JCcontarVocales(JCfrase);
    printf("Tiene %d vocales\n", JCtotalVocales);
    return 0;
}
Frase: hamburguesa
Tiene 5 vocales


int JCcontarVocales(char JCfrase[]) {
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

int main() {
    char JCfrase[] = "hamburguesa";
    printf("Frase: %s\n", JCfrase);

    int JCtotalVocales = JCcontarVocales(JCfrase);
    printf("Tiene %d vocales\n", JCtotalVocales);
    return 0;
}
Frase: hamburguesa
Tiene 5 vocales


int JCcontarLetras_for(char JCfrase[]) {
    int JCcontador = 0;
    for (int JCi = 0; JCfrase[JCi] != '\0'; JCi++) {
        if (JCfrase[JCi] != ' ') {
            JCcontador++;
        }
    }
    return JCcontador;
}

int main() {
    char JCfrase[] = "hamburguesa";
    printf("Frase: %s\n", JCfrase);

    int JCtotalLetras = JCcontarLetras_for(JCfrase);
    printf("Tiene %d letras\n", JCtotalLetras);
    return 0;
}
Frase: hamburguesa
Tiene 11 letras


int JCcontarLetras_dowhile(char JCfrase[]) {
    int JCcontador = 0;
    int JCi = 0;
    if (JCfrase[0] == '\0') return 0;

    do {
        if (JCfrase[JCi] != ' ') {
            JCcontador++;
        }
        JCi++;
    } while (JCfraseJC[JCi] != '\0');

    return JCcontador;
}
int JCtotalLetras = JCcontarLetras_dowhile(JCfrase);
Frase: hamburguesa
Tiene 11 letras


int JCcontarLetras_while(char JCfrase[]) {
    int JCcontador = 0;
    int JCi = 0;
    while (JCfrase[JCi] != '\0') {
        if (JCfrase[JCi] != ' ') {
            JCcontador++;
        }
        JCi++;
    }
    return JCcontador;
}
int JCtotalLetras = JCcontarLetras_while(JCfrase);
Frase: hamburguesa
Tiene 11 letras


void JCeliminarVocales_for(char JCpalabra[]) {
    printf("Sin vocales (for): ");
    for (int JCi = 0; JCpalabra[JCi] != '\0'; JCi++) {
        char JCletra = tolower(JCpalabra[JCi]);
        if (JCletra != 'a' && JCletra != 'e' && JCletra != 'i' && JCletra != 'o' && JCletra != 'u') {
            printf("%c", JCpalabra[JCi]);
        }
    }
    printf("\n");
}


void JCeliminarVocales_dowhile(char JCpalabra[]) {
    int JCi = 0;
    printf("Sin vocales (do-while): ");
    if (JCpalabra[0] == '\0') return;

    do {
        char JCletra = tolower(JCpalabra[JCi]);
        if (JCletra != 'a' && JCletra != 'e' && JCletra != 'i' && JCletra != 'o' && JCletra != 'u') {
            printf("%c", JCpalabra[JCi]);
        }
        JCi++;
    } while (JCpalabra[JCi] != '\0');
    printf("\n");
}


void JCeliminarVocales_while(char JCpalabra[]) {
    int JCi = 0;
    printf("Sin vocales (while): ");
    while (JCpalabra[JCi] != '\0') {
        char JCletra = tolower(JCpalabra[JCi]);
        if (JCletra != 'a' && JCletra != 'e' && JCletra != 'i' && JCletra != 'o' && JCletra != 'u') {
            printf("%c", JCpalabra[JCi]);
        }
        JCi++;
    }
    printf("\n");
}

int main() {
    char JCpalabra[] = "hamburguesa";
    printf("Palabra original: %s\n", JCpalabra);

    JCeliminarVocales_for(JCpalabra);
    JCeliminarVocales_while(JCpalabra);
    JCeliminarVocales_dowhile(JCpalabra);

    return 0;
}

Palabra original: hamburguesa
Sin vocales (for): hmbrgs
Sin vocales (while): hmbrgs
Sin vocales (do-while): hmbrgs


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

int main() {
    char JCfrase[100];
    char JCletraEliminar;

    printf("Ingrese una frase: ");
    fgets(JCfrase, sizeof(JCfrase), stdin);
    JCfrase[strcspn(JCfrase, "\n")] = '\0'; // Eliminar salto de línea

    printf("Ingrese la letra que desea eliminar: ");
    scanf(" %c", &JCletraEliminar);

    JCeliminarLetra_for(JCfrase, JCletraEliminar);
    JCeliminarLetra_while(JCfrase, JCletraEliminar);
    JCeliminarLetra_dowhile(JCfrase, JCletraEliminar);

    return 0;
}

Frase sin 'u' (for): hambrgesa
Frase sin 'u' (while): hambrgesa
Frase sin 'u' (do-while): hambrgesa


void JCinvertirConVocalesMayus_for(char JCpalabra[]) {
    int JClongitud = strlen(JCpalabra);
    printf("Invertida con vocales mayúsculas (for): ");
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
    printf("Invertida con vocales mayúsculas (do-while): ");

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
    printf("Invertida con vocales mayúsculas (while): ");
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

int main() {
    char JCpalabra[] = "hamburguesa";
    printf("Palabra original: %s\n", JCpalabra);

    JCinvertirConVocalesMayus_for(JCpalabra);
    JCinvertirConVocalesMayus_while(JCpalabra);
    JCinvertirConVocalesMayus_dowhile(JCpalabra);

    return 0;
}

Palabra original: hamburguesa
Invertida con vocales mayúsculas (for): AsEUgrUbmAh
Invertida con vocales mayúsculas (while): AsEUgrUbmAh
Invertida con vocales mayúsculas (do-while): AsEUgrUbmAh


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

int main() {
    char JCpalabra[] = "hamburguesa";

    printf("Palabra original: %s\n", JCpalabra);

    JCinvertirConsonantesMayus_for(palabra);
    JCinvertirConsonantesMayus_while(palabra);
    JCinvertirConsonantesMayus_dowhile(palabra);

    return 0;
}

Palabra original: hamburguesa
Invertida con consonantes mayúsculas (for): aSeuGRuBMaH
Invertida con consonantes mayúsculas (while): aSeuGRuBMaH
Invertida con consonantes mayúsculas (do-while): aSeuGRuBMaH


void JCeliminarLetraS__for(char JCfrase[]) {
    printf("FOR: ");
    for (int JCi = 0; JCfrase[JCi] != '\0'; JCi++) {
        char JCletra = toupper(JCfrase[JCi]);
        if (JCletra != 'S') {
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
        if (JCletra != 'S') {
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
        if (JCletra != 'S') {
            printf("%c", JCletra);
        }
        JCi++;
    } while (JCfrase[JCi] != '\0');
    printf("\n");
}


int main() {
    char JCfrase[100];

    printf("Ingrese una frase: ");
    fgets(JCfrase, sizeof(JCfrase), stdin);

    // Eliminar salto de línea si lo hay
    size_t JClen = strlen(JCfrase);
    if (JClen > 0 && JCfrase[JClen - 1] == '\n') {
        JCfrase[JClen - 1] = '\0';
    }

    JCeliminarLetraS__for(JCfrase);
    JCeliminarLetraS__while(JCfrase);
    JCeliminarLetraS__dowhile(JCfrase);

    return 0;
}

Palabra original: Perlas
Presentarla la palabra con mayusculas sin la letra s (for): PERLA
Presentarla la palabra con mayusculas sin la letra s (while): PERLA
Presentarla la palabra con mayusculas sin la letra s (do-while): PERLA


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
    char temp1[50], temp2[50];
    strcpy(temp1, p1);
    strcpy(temp2, p2);
    JC_ordenar(temp1);
    JC_ordenar(temp2);
    return strcmp(temp1, temp2) == 0;
}

int main() {
    char JC_palabra[] = "amor";
    char JC_anagrama[] = "roma";
    char JC_intento[50];
    
    printf("Adivina un anagrama de: %s\n", JC_palabra);

    for (int JC_intentos = 0; JC_intentos < 3; JC_intentos++) {
        printf("Intento %d: ", JC_intentos + 1);
        scanf("%s", JC_intento);

        if (JC_esAnagrama(JC_palabra, JC_intento) && strcmp(JC_intento, JC_anagrama) == 0) {
            printf("¡Correcto, JC!\n");
            return 0;
        }
    }

    printf("Fallaste, JC. La respuesta era: %s\n", JC_anagrama);
    return 0;
}


int main() {
    char JC_palabra[] = "amor";
    char JC_anagrama[] = "roma";
    char JC_intento[50];
    int JC_intentos = 0;

    printf("Adivina un anagrama de: %s\n", JC_palabra);

    while (JC_intentos < 3) {
        printf("Intento %d: ", JC_intentos + 1);
        scanf("%s", JC_intento);

        if (JC_esAnagrama(JC_palabra, JC_intento) && strcmp(JC_intento, JC_anagrama) == 0) {
            printf("¡Correcto, JC!\n");
            return 0;
        }

        JC_intentos++;
    }

    printf("Fallaste, JC. La respuesta era: %s\n", JC_anagrama);
    return 0;
}


int main() {
    char JC_palabra[] = "amor";
    char JC_anagrama[] = "roma";
    char JC_intento[50];
    int JC_intentos = 0;

    printf("Adivina un anagrama de: %s\n", JC_palabra);

    do {
        printf("Intento %d: ", JC_intentos + 1);
        scanf("%s", JC_intento);

        if (JC_esAnagrama(JC_palabra, JC_intento) && strcmp(JC_intento, JC_anagrama) == 0) {
            printf("¡Correcto, JC!\n");
            return 0;
        }

        JC_intentos++;
    } while (JC_intentos < 3);

    printf("Fallaste, JC. La respuesta era: %s\n", JC_anagrama);
    return 0;
}

Adivina un anagrama de: amor
Intento 1: ramo
Intento 2: mora
Intento 3: roma
¡Correcto, JC!

Adivina un anagrama de: amor
Intento 1: ramo
Intento 2: mora
Intento 3: armo
Fallaste, JC. La respuesta era: roma


int main() {
    char JC_frase[] = "programar es divertido";
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
    return 0;
}


int main() {
    char JC_frase[] = "programar es divertido";
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
    return 0;
}


int main() {
    char JC_frase[] = "programar es divertido";
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
    return 0;
}

FOR -> PrOgRaMaR Es DiVeRtIdO
WHILE -> PrOgRaMaR Es DiVeRtIdO
DO-WHILE -> PrOgRaMaR Es DiVeRtIdO
