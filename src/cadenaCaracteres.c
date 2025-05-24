#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Función para contar vocales
int jccontarVocales(char frasejc[]) {
    int contadorjc = 0;
    for (int i = 0; frasejc[i] != '\0'; i++) {
        char letrajc = tolower(frasejc[i]);
        if (letrajc == 'a' || letrajc == 'e' || letrajc == 'i' || letrajc == 'o' || letrajc == 'u') {
            contadorjc++;
        }
    }
    return contadorjc;
}

int main() {
    char frasejc[] = "hamburguesa";  // Frase fija
    printf("Frase: %s\n", frasejc);

    int totalVocalesjc = jccontarVocales(frasejc);
    printf("Tiene %d vocales\n", totalVocalesjc);
    return 0;
}

