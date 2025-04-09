#include <stdio.h>

int verPar(int numero) {
    if (numero % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int valor, resultado;
    printf("Digite algum valor:\n");
    scanf("%d", &valor);

    resultado = verPar(valor);

    printf("%d\n", resultado);

    return 0;
}