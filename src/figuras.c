//Autor Juan Diego Jurado
//taller grupal Figuras 
#include <stdio.h>

void F1(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

void F2(int n) {
    char simbolos[2] = {'+', '*'};
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                printf("%c ", simbolos[(i + j) % 2]);
            else
                printf("  ");
        }
        printf("\n");
    }
}

void F3(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("* ");
        }
        printf("\n");
    }
}

void F4(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j)
            printf("  ");
        for (int j = 0; j <= i; ++j)
            printf("* ");
        printf("\n");
    }
}

void F5(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j)
            printf(" ");
        for (int j = 0; j < 2 * (n - i) - 1; ++j)
            printf("*");
        printf("\n");
    }
}

void F6(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j)
            printf(" ");
        for (int j = 0; j < 2 * i + 1; ++j)
            printf("*");
        printf("\n");
    }
}

void F7(int n) {
    printf("_\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i * 3; ++j)
            printf(" ");
        printf("|___\n");
    }
}

void F8(int n) {
    printf("    _\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < (n - 1 - i) * 3; ++j)
            printf(" ");
        printf("___|\n");
    }
}

void F9(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j)
            printf("   ");
        printf("__|");
        for (int j = 0; j < i * 2; ++j)
            printf("   ");
        if (i != 0)
            printf("|__");
        printf("\n");
    }
}

void F10(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i * 3; ++j)
            printf(" ");
        if (i % 2 == 0)
            printf("|_+_\n");
        else
            printf("|_-_\n");
    }
    for (int j = 0; j < n * 3; ++j)
        printf(" ");
    printf("|\n");
}

void F11(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int s = 0; s < (i - 1) * 4; ++s)
            printf(" ");
        printf("|");
        for (int j = 0; j < i; ++j)
            printf(" _");
        printf("\n");
    }
}

void F12(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j <= n - i; ++j)
            printf("%d", j);
        printf("\n");
    }
}

void F13(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j)
            printf("%d", j);
        printf("\n");
    }
}

void F14(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j)
            printf(" ");
        int num = 1;
        for (int j = 0; j <= i; ++j) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }
}

void F15(int n) {
    for (int i = 0; i < n; i++) {
        int numero = 1;
        for (int j = 0; j <= i; j++) {
            printf("%d ", numero);
            numero = numero * (i - j) / (j + 1);
        }
        printf("\n");
    }
}

void F16(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == 0 && (j == 0 || j == n - 1)) || (i == 2 && j == n / 2) || (i == 4 && (j == 0 || j == n - 1)))
                printf(" +   ");
            else if ((i == 1 || i == 3) && (j == n / 2 - 2 || j == n / 2 + 2))
                printf(" -");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void F17(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == 0 && (j == 0 || j == n - 1)) || (i == 2 && j == n / 2) || (i == 4 && (j == 0 || j == n - 1)))
                printf(" 1   ");
            else if ((i == 1 || i == 3) && (j == n / 2 - 2 || j == n / 2 + 2))
                printf(" 0");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void F18(int n) {
    for (int i = 0; i < n; i++) {
        int num = 1;
        printf("%d ", num);
        int suma = 2;
        for (int j = 1; j < i; j++) {
            printf("%d ", suma);
            suma = suma + suma - num;
            num = suma - num;
        }
        if (i > 0)
            printf("2");
        printf("\n");
    }
}

void F19(int n) {
    int valor = 3;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("*\n");
        } else {
            printf("+ ");
            for (int j = 0; j < i - 1; j++) {
                printf("%d ", valor);
                valor += j + 1;
            }
            printf("*\n");
        }
    }
}
void F20(int n) {
    int i, j;
    for (i = 0; i < n; ++i) {
        for (j = 0; j < i * 4; ++j)
            printf(" ");
        printf("|___     / 100%%\n");
    }
}
void F21(int n) {
    int i, j;

    // Parte de la escalera (desde abajo hacia arriba)
    for (i = n - 1; i >= 0; --i) {
        for (j = 0; j < i * 5; ++j)
            printf(" ");
        printf("___|\n");
    }

    // Base de la escalera
    for (j = 0; j < n * 5; ++j)
        printf(" ");
    printf("|\n");

    // Parte de carga: o0o 100%
    for (i = 0; i < n; ++i) {
        for (j = 0; j < i * 5; ++j)
            printf(" ");
        printf("o0o 100%%\n");
    }
}

void leaControladorFiguras() {
    int figura, niveles;
    printf("Selecciona la figura (1-21 ");
    scanf("%d", &figura);
    printf("Introduce el tamaño / niveles: ");
    scanf("%d", &niveles);

    switch (figura) {
        case 1: F1(niveles); break;
        case 2: F2(niveles); break;
        case 3: F3(niveles); break;
        case 4: F4(niveles); break;
        case 5: F5(niveles); break;
        case 6: F6(niveles); break;
        case 7: F7(niveles); break;
        case 8: F8(niveles); break;
        case 9: F9(niveles); break;
        case 10: F10(niveles); break;
        case 11: F11(niveles); break;
        case 12: F12(niveles); break;
        case 13: F13(niveles); break;
        case 14: F14(niveles); break;
        case 15: F15(niveles); break;
        case 16: F16(niveles); break;
        case 17: F17(niveles); break;
        case 18: F18(niveles); break;
        case 19: F19(niveles); break;
        case 20: F20(niveles); break;
        case 21: F21(niveles); break;
        default: printf("Figura no válida.\n");
    }

    return 0;
}
