#include <stdio.h>

int media(int matriz[3][3]) {
    int soma = 0;
    int quantidade_elementos = 3 * 3;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
    }

    return soma / quantidade_elementos;
}

int main() {

    int matriz[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor de: [%d][%d] \n", i, j);
            scanf("%d", &matriz[i][j]);

        }
    }

    int resultado = media(matriz);

    printf("A media dos valores da matriz eh: %d", resultado);

    return 0;
}