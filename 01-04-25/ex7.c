#include <stdio.h>

int verificarPerfeito(int numero) {
    int soma = 0;

    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            soma += i;
        }
    }

    if (soma == numero) {
        return 1; 
    }
    else {
        return 0; 
    }
}

int main() {

    int num;

    printf("Digite algum valor: \n");
    scanf("%d", &num);

    if (verificarPerfeito(num)) {
        printf("%d eh perfeito.\n", num);
    }
    else {
        printf("%d nao eh perfeito.\n", num);
    }

    return 0;
}
