#include <stdio.h>

float media(int matriz[3][3]) {

    float soma = 0;
    int tamanho_total = 3 * 3;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
    }

    return soma / tamanho_total;
}

int main() {
    int matriz[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("[%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }



    float resultado = media(matriz);

    printf("A media da matriz eh: %.2f", resultado);

    return 0;
}