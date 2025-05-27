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
    void f1 (niveles);
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
