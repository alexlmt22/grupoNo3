#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Función para contar vocales
int contarVocalesJC(char fraseJC[]) {
    int contadorJC = 0;
    for (int i = 0; fraseJC[i] != '\0'; i++) {
        char letraJC = tolower(fraseJC[i]);
        if (letraJC == 'a' || letraJC == 'e' || letraJC == 'i' || letraJC == 'o' || letraJC == 'u') {
            contadorJC++;
        }
    }
    return contadorJC;
}

int main() {
    char fraseJC[] = "hamburguesa";  // Frase fija
    printf("Frase: %s\n", fraseJC);

    int totalVocalesJC = JCcontarVocales(fraseJC);
    printf("Tiene %d vocales\n", totalVocalesJC);
    return 0;
}
Frase: hamburguesa
Tiene 5 vocales


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contarVocalesJC(char fraseJC[]) {
    int contadorJC = 0;
    int iJC = 0;
    char letraJC;

    do {
        letraJC = tolower(fraseJC[iJC]);
        if (letraJC == 'a' || letraJC == 'e' || letraJC == 'i' || letraJC == 'o' || letraJC == 'u') {
            contadorJC++;
        }
        iJC++;
    } while (fraseJC[iJC] != '\0');

    return contadorJC;
}

int main() {
    char fraseJC[] = "hamburguesa";
    printf("Frase: %s\n", fraseJC);

    int totalVocalesJC = contarVocalesJC(fraseJC);
    printf("Tiene %d vocales\n", totalVocalesJC);
    return 0;
}
Frase: hamburguesa
Tiene 5 vocales


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contarVocalesJC(char fraseJC[]) {
    int contadorJC = 0;
    int iJC = 0;
    char letraJC;

    while (fraseJC[iJC] != '\0') {
        letraJC = tolower(fraseJC[iJC]);
        if (letraJC == 'a' || letraJC == 'e' || letraJC == 'i' || letraJC == 'o' || letraJC == 'u') {
            contadorJC++;
        }
        iJC++;
    }

    return contadorJC;
}

int main() {
    char fraseJC[] = "hamburguesa";
    printf("Frase: %s\n", fraseJC);

    int totalVocalesJC = contarVocalesJC(fraseJC);
    printf("Tiene %d vocales\n", totalVocalesJC);
    return 0;
}
Frase: hamburguesa
Tiene 5 vocales


#include <stdio.h>
#include <string.h>

int contarLetrasJC_for(char fraseJC[]) {
    int contadorJC = 0;
    for (int iJC = 0; fraseJC[iJC] != '\0'; iJC++) {
        if (fraseJC[iJC] != ' ') {
            contadorJC++;
        }
    }
    return contadorJC;
}

int main() {
    char fraseJC[] = "hamburguesa";
    printf("Frase: %s\n", fraseJC);

    int totalLetrasJC = contarLetrasJC_for(fraseJC);
    printf("Tiene %d letras\n", totalLetrasJC);
    return 0;
}
Frase: hamburguesa
Tiene 11 letras


#include <stdio.h>
#include <string.h>

int contarLetrasJC_dowhile(char fraseJC[]) {
    int contadorJC = 0;
    int iJC = 0;
    if (fraseJC[0] == '\0') return 0;

    do {
        if (fraseJC[iJC] != ' ') {
            contadorJC++;
        }
        iJC++;
    } while (fraseJC[iJC] != '\0');

    return contadorJC;
}
int totalLetrasJC = contarLetrasJC_dowhile(fraseJC);
Frase: hamburguesa
Tiene 11 letras


#include <stdio.h>
#include <string.h>

int contarLetrasJC_while(char fraseJC[]) {
    int contadorJC = 0;
    int iJC = 0;
    while (fraseJC[iJC] != '\0') {
        if (fraseJC[iJC] != ' ') {
            contadorJC++;
        }
        iJC++;
    }
    return contadorJC;
}
int totalLetrasJC = contarLetrasJC_while(fraseJC);
Frase: hamburguesa
Tiene 11 letras


#include <stdio.h>
#include <string.h>
#include <ctype.h>

void eliminarVocalesJC_for(char palabraJC[]) {
    printf("Sin vocales (for): ");
    for (int iJC = 0; palabraJC[iJC] != '\0'; iJC++) {
        char letraJC = tolower(palabraJC[iJC]);
        if (letraJC != 'a' && letraJC != 'e' && letraJC != 'i' && letraJC != 'o' && letraJC != 'u') {
            printf("%c", palabraJC[iJC]);
        }
    }
    printf("\n");
}


#include <stdio.h>
#include <string.h>
#include <ctype.h>

void eliminarVocalesJC_dowhile(char palabraJC[]) {
    int iJC = 0;
    printf("Sin vocales (do-while): ");
    if (palabraJC[0] == '\0') return;

    do {
        char letraJC = tolower(palabraJC[iJC]);
        if (letraJC != 'a' && letraJC != 'e' && letraJC != 'i' && letraJC != 'o' && letraJC != 'u') {
            printf("%c", palabraJC[iJC]);
        }
        iJC++;
    } while (palabraJC[iJC] != '\0');
    printf("\n");
}


#include <stdio.h>
#include <string.h>
#include <ctype.h>

void eliminarVocalesJC_while(char palabraJC[]) {
    int iJC = 0;
    printf("Sin vocales (while): ");
    while (palabraJC[iJC] != '\0') {
        char letraJC = tolower(palabraJC[iJC]);
        if (letraJC != 'a' && letraJC != 'e' && letraJC != 'i' && letraJC != 'o' && letraJC != 'u') {
            printf("%c", palabraJC[iJC]);
        }
        iJC++;
    }
    printf("\n");
}

int main() {
    char palabraJC[] = "hamburguesa";
    printf("Palabra original: %s\n", palabraJC);

    eliminarVocalesJC_for(palabraJC);
    eliminarVocalesJC_while(palabraJC);
    eliminarVocalesJC_dowhile(palabraJC);

    return 0;
}

Palabra original: hamburguesa
Sin vocales (for): hmbrgs
Sin vocales (while): hmbrgs
Sin vocales (do-while): hmbrgs


#include <stdio.h>
#include <string.h>
#include <ctype.h>

void eliminarLetraJC_for(char fraseJC[], char letraEliminarJC) {
    printf("Frase sin '%c' (for): ", letraEliminarJC);
    for (int iJC = 0; fraseJC[iJC] != '\0'; iJC++) {
        if (tolower(fraseJC[iJC]) != tolower(letraEliminarJC)) {
            printf("%c", fraseJC[iJC]);
        }
    }
    printf("\n");
}


void eliminarLetraJC_dowhile(char fraseJC[], char letraEliminarJC) {
    int iJC = 0;
    printf("Frase sin '%c' (do-while): ", letraEliminarJC);

    if (fraseJC[0] == '\0') return;

    do {
        if (tolower(fraseJC[iJC]) != tolower(letraEliminarJC)) {
            printf("%c", fraseJC[iJC]);
        }
        iJC++;
    } while (fraseJC[iJC] != '\0');

    printf("\n");
}


void eliminarLetraJC_while(char fraseJC[], char letraEliminarJC) {
    int iJC = 0;
    printf("Frase sin '%c' (while): ", letraEliminarJC);
    while (fraseJC[iJC] != '\0') {
        if (tolower(fraseJC[iJC]) != tolower(letraEliminarJC)) {
            printf("%c", fraseJC[iJC]);
        }
        iJC++;
    }
    printf("\n");
}

int main() {
    char fraseJC[100];
    char letraEliminarJC;

    printf("Ingrese una frase: ");
    fgets(fraseJC, sizeof(fraseJC), stdin);
    fraseJC[strcspn(fraseJC, "\n")] = '\0'; // Eliminar salto de línea

    printf("Ingrese la letra que desea eliminar: ");
    scanf(" %c", &letraEliminarJC);

    eliminarLetraJC_for(fraseJC, letraEliminarJC);
    eliminarLetraJC_while(fraseJC, letraEliminarJC);
    eliminarLetraJC_dowhile(fraseJC, letraEliminarJC);

    return 0;
}

Frase sin 'u' (for): hambrgesa
Frase sin 'u' (while): hambrgesa
Frase sin 'u' (do-while): hambrgesa


#include <stdio.h>
#include <string.h>
#include <ctype.h>

void invertirConVocalesMayusJC_for(char palabraJC[]) {
    int longitudJC = strlen(palabraJC);
    printf("Invertida con vocales mayúsculas (for): ");
    for (int iJC = longitudJC - 1; iJC >= 0; iJC--) {
        char letraJC = palabraJC[iJC];
        char letraMinJC = tolower(letraJC);
        if (letraMinJC == 'a' || letraMinJC == 'e' || letraMinJC == 'i' || letraMinJC == 'o' || letraMinJC == 'u') {
            printf("%c", toupper(letraMinJC));
        } else {
            printf("%c", letraMinJC);
        }
    }
    printf("\n");
}


void invertirConVocalesMayusJC_dowhile(char palabraJC[]) {
    int iJC = strlen(palabraJC) - 1;
    printf("Invertida con vocales mayúsculas (do-while): ");

    if (iJC < 0) return;

    do {
        char letraJC = palabraJC[iJC];
        char letraMinJC = tolower(letraJC);
        if (letraMinJC == 'a' || letraMinJC == 'e' || letraMinJC == 'i' || letraMinJC == 'o' || letraMinJC == 'u') {
            printf("%c", toupper(letraMinJC));
        } else {
            printf("%c", letraMinJC);
        }
        iJC--;
    } while (iJC >= 0);

    printf("\n");
}


void invertirConVocalesMayusJC_while(char palabraJC[]) {
    int iJC = strlen(palabraJC) - 1;
    printf("Invertida con vocales mayúsculas (while): ");
    while (iJC >= 0) {
        char letraJC = palabraJC[iJC];
        char letraMinJC = tolower(letraJC);
        if (letraMinJC == 'a' || letraMinJC == 'e' || letraMinJC == 'i' || letraMinJC == 'o' || letraMinJC == 'u') {
            printf("%c", toupper(letraMinJC));
        } else {
            printf("%c", letraMinJC);
        }
        iJC--;
    }
    printf("\n");
}

int main() {
    char palabraJC[] = "hamburguesa";
    printf("Palabra original: %s\n", palabraJC);

    invertirConVocalesMayusJC_for(palabraJC);
    invertirConVocalesMayusJC_while(palabraJC);
    invertirConVocalesMayusJC_dowhile(palabraJC);

    return 0;
}

Palabra original: hamburguesa
Invertida con vocales mayúsculas (for): AsEUgrUbmAh
Invertida con vocales mayúsculas (while): AsEUgrUbmAh
Invertida con vocales mayúsculas (do-while): AsEUgrUbmAh


#include <stdio.h>
#include <string.h>
#include <ctype.h>

void invertirConsonantesMayusJC_for(char palabraJC[]) {
    int longitudJC = strlen(palabraJC);
    printf("FOR: ");
    for (int iJC = longitudJC - 1; iJC >= 0; iJC--) {
        char letraJC = tolower(palabraJC[iJC]);
        if (letraJC == 'a' || letraJC == 'e' || letraJC == 'i' || letraJC == 'o' || letraJC == 'u') {
            printf("%c", letraJC);  // vocal en minúscula
        } else {
            printf("%c", toupper(letraJC));  // consonante en mayúscula
        }
    }
    printf("\n");
}


void invertirConsonantesMayusJC_while(char palabraJC[]) {
    int iJC = strlen(palabraJC) - 1;
    printf("WHILE: ");
    while (iJC >= 0) {
        char letraJC = tolower(palabraJC[iJC]);
        if (letraJC == 'a' || letraJC == 'e' || letraJC == 'i' || letraJC == 'o' || letraJC == 'u') {
            printf("%c", letraJC);
        } else {
            printf("%c", toupper(letraJC));
        }
        iJC--;
    }
    printf("\n");
}


void invertirConsonantesMayusJC_dowhile(char palabraJC[]) {
    int iJC = strlen(palabraJC) - 1;
    printf("DO-WHILE: ");
    if (iJC < 0) return;

    do {
        char letraJC = tolower(palabraJC[iJC]);
        if (letraJC == 'a' || letraJC == 'e' || letraJC == 'i' || letraJC == 'o' || letraJC == 'u') {
            printf("%c", letraJC);
        } else {
            printf("%c", toupper(letraJC));
        }
        iJC--;
    } while (iJC >= 0);
    printf("\n");
}

int main() {
    char palabraJC[] = "hamburguesa";

    printf("Palabra original: %s\n", palabraJC);

    invertirConsonantesMayusJC_for(palabraJC);
    invertirConsonantesMayusJC_while(palabraJC);
    invertirConsonantesMayusJC_dowhile(palabraJC);

    return 0;
}

Palabra original: hamburguesa
Invertida con consonantes mayúsculas (for): aSeuGRuBMaH
Invertida con consonantes mayúsculas (while): aSeuGRuBMaH
Invertida con consonantes mayúsculas (do-while): aSeuGRuBMaH


#include <stdio.h>
#include <string.h>
#include <ctype.h>


void eliminarLetraS_JC_for(char fraseJC[]) {
    printf("FOR: ");
    for (int iJC = 0; fraseJC[iJC] != '\0'; iJC++) {
        char letraJC = toupper(fraseJC[iJC]);
        if (letraJC != 'S') {
            printf("%c", letraJC);
        }
    }
    printf("\n");
}


void eliminarLetraS_JC_while(char fraseJC[]) {
    int iJC = 0;
    printf("WHILE: ");
    while (fraseJC[iJC] != '\0') {
        char letraJC = toupper(fraseJC[iJC]);
        if (letraJC != 'S') {
            printf("%c", letraJC);
        }
        iJC++;
    }
    printf("\n");
}


void eliminarLetraS_JC_dowhile(char fraseJC[]) {
    int iJC = 0;
    printf("DO-WHILE: ");
    if (fraseJC[0] == '\0') return;

    do {
        char letraJC = toupper(fraseJC[iJC]);
        if (letraJC != 'S') {
            printf("%c", letraJC);
        }
        iJC++;
    } while (fraseJC[iJC] != '\0');
    printf("\n");
}


int main() {
    char fraseJC[100];

    printf("Ingrese una frase: ");
    fgets(fraseJC, sizeof(fraseJC), stdin);

    // Eliminar salto de línea si lo hay
    size_t lenJC = strlen(fraseJC);
    if (lenJC > 0 && fraseJC[lenJC - 1] == '\n') {
        fraseJC[lenJC - 1] = '\0';
    }

    eliminarLetraS_JC_for(fraseJC);
    eliminarLetraS_JC_while(fraseJC);
    eliminarLetraS_JC_dowhile(fraseJC);

    return 0;
}

Palabra original: Perlas
Presentarla la palabra con mayusculas sin la letra s (for): PERLA
Presentarla la palabra con mayusculas sin la letra s (while): PERLA
Presentarla la palabra con mayusculas sin la letra s (do-while): PERLA


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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


#include <stdio.h>
#include <ctype.h>
#include <string.h>

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


#include <stdio.h>
#include <ctype.h>
#include <string.h>

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


#include <stdio.h>
#include <ctype.h>
#include <string.h>

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
