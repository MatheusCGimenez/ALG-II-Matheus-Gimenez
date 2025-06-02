#include <stdio.h>
#include "funcoeszinhas.h"

int main() {

    int matriz[2][2] = {
        {23, 48},
        {34, 68},
    };

    int resultado_mediano = mediano(matriz);

    printf("%d", resultado_mediano);

    return 0;
}
