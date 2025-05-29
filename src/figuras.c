#include <stdio.h>

void jjF1(int n) 
{
    printf("\nFigura 1:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    printf("\n");
    printf("---------------------------------");
}

void jjF2(int n) 
{
    printf("\nFigura 2:\n");
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
    printf("\n");
    printf("---------------------------------");
}

void jjF3(int n)
{
    printf("\nFigura 3:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    printf("---------------------------------");
}

void jjF4(int n)
{
    printf("\nFigura 4:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j)
            printf("  ");
        for (int j = 0; j <= i; ++j)
            printf("* ");
        printf("\n");
    }
    printf("\n");
    printf("---------------------------------");
}

void jjF5(int n)
{
    printf("\nFigura 5:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j)
            printf(" ");
        for (int j = 0; j < 2 * (n - i) - 1; ++j)
            printf("*");
        printf("\n");
    }
    printf("\n");
    printf("---------------------------------");
}

void jjF6(int n) 
{
    printf("\nFigura 6:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j)
            printf(" ");
        for (int j = 0; j < 2 * i + 1; ++j)
            printf("*");
        printf("\n");
    }
    printf("\n");
    printf("---------------------------------");
}

void jjF7(int n) 
{
    printf("\nFigura 7:\n");
    printf("_\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i * 3; ++j)
            printf(" ");
        printf("|___\n");
    }
    printf("\n");
    printf("---------------------------------");
}

void jjF8(int n) 
{
    printf("\nFigura 8:\n");
    printf("    _\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < (n - 1 - i) * 3; ++j)
            printf(" ");
        printf("___|\n");
    }
    printf("\n");
    printf("---------------------------------");
}

void jjF9(int n) 
{
    printf("\nFigura 9:\n");
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
    printf("\n");
    printf("---------------------------------");
}

void jjF10(int n) 
{
    printf("\nFigura 10:\n");
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

    printf("\n");
    printf("---------------------------------");
}

void jjF11(int n) 
{
    printf("\nFigura 11:\n");
    for (int i = 1; i <= n; ++i) {
        for (int s = 0; s < (i - 1) * 4; ++s)
            printf(" ");
        printf("|");
        for (int j = 0; j < i; ++j)
            printf(" _");
        printf("\n");
    }
    printf("\n");
    printf("---------------------------------");
}

void jjF12(int n) 
{
    printf("\nFigura 12:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j <= n - i; ++j)
            printf("%d", j);
        printf("\n");
    }
    printf("\n");
    printf("---------------------------------");
}

void jjF13(int n) 
{
    printf("\nFigura 13:\n");
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j)
            printf("%d", j);
        printf("\n");
    }
    printf("\n");
    printf("---------------------------------");
}

void jjF14(int n)
{
    printf("\nFigura 14:\n");
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
    printf("\n");
    printf("---------------------------------");
}

void jjF15(int n)
{
    printf("\nFigura 15:\n");
    for (int i = 0; i < n; i++) {
        int numero = 1;
        for (int j = 0; j <= i; j++) {
            printf("%d ", numero);
            numero = numero * (i - j) / (j + 1);
        }
        printf("\n");
    }
    printf("\n");
    printf("---------------------------------");
}

void jjF16(int n)
{
    printf("\nFigura 16:\n");
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
    printf("\n");
    printf("---------------------------------");
}

void jjF17(int n)
{
    printf("\nFigura 17:\n");
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
    printf("\n");
    printf("---------------------------------");
}

void jjF18(int n)
{
    printf("\nFigura 18:\n");
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
    printf("\n");
    printf("---------------------------------");
}

void jjF19(int n)
{
    printf("\nFigura 19:\n");
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
    printf("\n");
    printf("---------------------------------");
}

void llControladorFiguras()
{
    int niveles;
    printf("\nFiguras:\n");
    printf("Introduce el tamano / niveles: ");
    scanf("%d", &niveles);
    jjF1(niveles); 
    jjF2(niveles); 
    jjF3(niveles);
    jjF4(niveles); 
    jjF5(niveles); 
    jjF6(niveles); 
    jjF7(niveles); 
    jjF8(niveles); 
    jjF9(niveles); 
    jjF10(niveles); 
    jjF11(niveles); 
    jjF12(niveles); 
    jjF13(niveles); 
    jjF14(niveles); 
    jjF15(niveles); 
    jjF16(niveles); 
    jjF17(niveles); 
    jjF18(niveles); 
    jjF19(niveles); 
    printf("\n");
}
