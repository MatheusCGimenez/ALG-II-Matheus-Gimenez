#include <stdio.h>

int main() {
    int matriz[8][8];
    float normalizada[8][8];
    int valor = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            matriz[i][j] = valor;
            valor += 4;
        }
    }

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            normalizada[i][j] = matriz[i][j] / 255.0;
        }
    }

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%.2f", normalizada[i][j]);
            if (!(i == 7 && j == 7)) {
                printf(" ");
            }
        }
    }

    printf("\n");

    return 0;
}