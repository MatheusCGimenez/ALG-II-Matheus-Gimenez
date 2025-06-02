#include <stdio.h>

int main() {
    int matriz[3][3];
    int vetor[9]; // Vetor auxiliar para armazenar os elementos
    int k = 0;

    // Preenchendo a matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor de [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            vetor[k++] = matriz[i][j]; // Armazenando no vetor
        }
    }

    // Ordenando o vetor (usando Bubble Sort como exemplo)
    for (int i = 0; i < 9 - 1; i++) {
        for (int j = 0; j < 9 - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    for (int i; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = vetor[k++];
        }
    }

    printf("ordem! \n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }



    return 0;
}
