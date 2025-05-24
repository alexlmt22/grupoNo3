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
