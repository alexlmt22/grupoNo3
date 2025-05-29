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
    leaVerPortada();
    leaControladorSerie();
    llControladorFiguras();
    ControladorCadenaCaracteres();
    llControladorArray();
    llControladorLoading();
    leaControladorRecursion();
    return 0;
}
