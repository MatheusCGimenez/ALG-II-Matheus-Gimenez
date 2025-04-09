#include <stdio.h>

float calcularMedia(int quantidade) {
    int valores[100];
    int i, soma = 0;

    for (i = 0; i < quantidade; i++) {
        scanf("%d", &valores[i]);
        soma += valores[i];
    }

    return (float)soma / quantidade;
}

int main() {
    int n;
    float media;

    printf("Quantos valores deseja digitar? \n");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("QUANTIA INVALIDA.\n");
        return 1;
    }

    media = calcularMedia(n);
    printf("MEDIA: %.2f\n", media);

    return 0;
}