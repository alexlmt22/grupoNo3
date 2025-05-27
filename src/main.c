#include <stdio.h>
#include "portada.c"
#include "Loading.c"
#include "windows.h"
#include "cadenaCaracteres.c"
#include "serieNumericaCaracter.c"
#include "array.c"
#include "recursion.c"
#include "figuras.c"

int main()
{
  
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



    leaVerPortada();
    leaControladorSerie();
    llControladorArray();
    ControladorCadenaCaracteres();
    leaControladorFiguras();
    
    cargaRotativaForIM();
    cargaRotativawhileIM();
    cargaRotativadowhileIM();
    cargaBarraForIM();
    cargaBarraWhileIM();
    cargaBarraDoWhileIM();
    cargaMovimientoForIM();
    cargaMovimientoWhileIM();
    cargaMovimientoDoWhileIM();
   cargaWaitingForIM();
   cargaWaitingWhileIM();
   cargaWaitingDoWhileIM();
   cargaFlechaForIM();
   cargaFlechaWhileIM();
   cargaFlechadowhileIM();
   cargaDobleFlechaForIM();
   cargaDobleFlechawhileIM();
   cargaDobleFlechaDoWhileIM();
   cargaFlechaSpinnerForIM();
   cargaFlechaSpinnerWhileIM();
   cargaFlechaSpinnerDoWhileIM();
   cargaNombreForIM();
   cargaNombreWhileIM();
   cargaNombreDoWhileIM();
   cargaNombreSecuenciaForIM();
   cargaNombreSecuencialWhileIM();
   cargaNombreSecuencialdowhileIM();
   cargaescaleraSpinnerForIM();
   cargaescaleraSpinnerWhileIM();
   cargaescaleraSpinnerDoWhileIM();
   cargaescaleraWaitingForIM();
   cargaescaleraWaitingWhileIM();
   cargaescaleraWaitingDoWhileIM();
   cargaFigurasForIM();
   cargaFigurasWhileIM();
   cargaFigurasDoWhileIM();

    leaControladorRecursion();
    return 0;
}
