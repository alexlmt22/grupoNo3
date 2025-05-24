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

