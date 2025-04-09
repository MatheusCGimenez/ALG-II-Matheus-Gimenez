#include <stdio.h>
#include <math.h>

void bhaskara(int a, int b, int c) {
    int delta;

    int x1;
    int x2;

    delta = (b * b) - 4 * a * c;

    if (delta < 0) {
        printf("A funcao nao apresenta raizes reais!");
    }
    else {
        printf("%d \n", delta);

        x1 = (-b + sqrt(delta)) / 2 * a;

        x2 = (-b - sqrt(delta)) / 2 * a;

        printf("Valor do X1 = %d \n", x1);
        printf("Valor do X2 = %d \n", x2);
    }
}

int main() {
    bhaskara(1, -3, -54);

    return 0;
}