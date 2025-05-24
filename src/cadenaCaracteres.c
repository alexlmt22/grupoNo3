#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Función para contar vocales
int contarVocalesCRIS(char fraseCRIS[]) {
    int contadorCRIS = 0;
    for (int i = 0; fraseCRIS[i] != '\0'; i++) {
        char letraCRIS = tolower(fraseCRIS[i]);
        if (letraCRIS == 'a' || letraCRIS == 'e' || letraCRIS == 'i' || letraCRIS == 'o' || letraCRIS == 'u') {
            contadorCRIS++;
        }
    }
    return contadorCRIS;
}

int main() {
    char fraseCRIS[] = "hamburguesa";  // Frase fija
    printf("Frase: %s\n", fraseCRIS);

    int totalVocalesCRIS = contarVocalesCRIS(fraseCRIS);
    printf("Tiene %d vocales\n", totalVocalesCRIS);
    return 0;
}

