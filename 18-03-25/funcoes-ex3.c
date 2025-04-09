#include <stdio.h>

int ehPrimo(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int somaPrimos(int arr[], int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        if (ehPrimo(arr[i])) {
            soma += arr[i];
        }
    }
    return soma;
}

int main() {
    int n;
    printf("Digite alguma quantidade de numero: ");
    scanf("%d", &n);

    int vetorNum[n];

    for (int i = 0; i < n; i++) {
        printf("Digite o valor do indice [%d]", i);
        scanf("%d", &vetorNum[i]);
    }

    int resul = somaPrimos(vetorNum, n);

    printf("A soma dos valores eh: %d\n", resul);

    return 0;
}