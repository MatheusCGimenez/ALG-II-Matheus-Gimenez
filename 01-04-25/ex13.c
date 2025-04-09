#include <stdio.h>
#include <stdlib.h>

void verificarTriangulo(int lado1, int lado2, int lado3) {
    if ((((lado1 < lado2 + lado3) && (lado1 > abs(lado2 - lado3))) &&
        ((lado2 < lado1 + lado3) && (lado2 > abs(lado1 - lado3))) &&
        ((lado3 < lado1 + lado2) && (lado3 > abs(lado1 - lado2))))) {

        if (lado1 == lado2 && lado2 == lado3) {
            printf("Equilatero.\n");
        }
        else if (lado1 != lado2 && lado2 != lado3 && lado3 != lado1) {
            printf("Escaleno.\n");
        }
        else {
            printf("Isosceles.\n");
        }

    }
    else {
        printf("Não eh triângulo.\n");
    }
}

int main() {
    int lado1, lado2, lado3;

    printf("Digite o lado 1: ");
    scanf("%d", &lado1);
    printf("Digite o lado 2: ");
    scanf("%d", &lado2);
    printf("Digite o lado 3: ");
    scanf("%d", &lado3);

    verificarTriangulo(lado1, lado2, lado3);

    return 0;
}