#include <stdio.h>

int potencia(int base, int expoente) {
    int resultado = 1;

    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }

    return resultado;
}

int main() {
    int base, expoente, resultado;

    printf("Digite o valor da base: ");
    scanf("%d", &base);

    printf("Digite o valor do expoente: ");
    scanf("%d", &expoente);

    resultado = potencia(base, expoente);

    printf("Resultado: %d\n", resultado);

    return 0;
}