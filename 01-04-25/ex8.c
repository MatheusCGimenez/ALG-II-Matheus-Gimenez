#include <stdio.h>

void verificarCategoria(int num) {
    if (num > 4 && num < 8) {
        printf("INFANTIL A");
    }
    else if (num > 7 && num < 11) {
        printf("INFANTIL B");
    }
    else if (num > 10 && num < 14) {
        printf("JUVENIL A");
    }
    else if (num > 13 && num < 18) {
        printf("JUVENIL A");
    }
    else if (num < 4) {
        printf("CATEGORIA NÃO ENCONTRADA!");
    }

    else {
        printf("ADULTO");
    }
}

int main() {

    int idade;

    printf("Qual a sua idade? \n");
    scanf("%d", &idade);

    verificarCategoria(idade);

    return 0;
}