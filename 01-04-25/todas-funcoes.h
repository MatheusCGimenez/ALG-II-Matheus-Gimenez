#ifndef ALLFUNCTIONS_H
#define ALLFUNCTIONS_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// ex1
static inline void function() {
    printf("Oi");
}

// ex2
static inline void print_text(const char text[]) {
    printf("%s", text);
}

// ex3
static inline char return_o_and_print(const char text[]) {
    printf("%s", text);
    return 'o';
}

// ex4
static inline void bhaskara(int a, int b, int c) {
    int delta = (b * b) - 4 * a * c;

    if (delta < 0) {
        printf("A função não apresenta raízes reais!\n");
    } else {
        double x1 = (-b + sqrt(delta)) / (2.0 * a);
        double x2 = (-b - sqrt(delta)) / (2.0 * a);

        printf("Delta = %d\n", delta);
        printf("Valor do X1 = %.2lf\n", x1);
        printf("Valor do X2 = %.2lf\n", x2);
    }
}

// ex5
static inline void converterTempo(int totalSegundos) {
    int horas = totalSegundos / 3600;
    int minutos = (totalSegundos % 3600) / 60;
    int segundos = totalSegundos % 60;

    printf("%d horas, %d minutos, %d segundos\n", horas, minutos, segundos);
}

// ex7
static inline int verificarPerfeito(int numero) {
    int soma = 0;
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            soma += i;
        }
    }
    return soma == numero;
}

// ex8
static inline void verificarCategoria(int num) {
    if (num < 5) {
        printf("CATEGORIA NÃO ENCONTRADA!");
    } else if (num <= 7) {
        printf("INFANTIL A");
    } else if (num <= 10) {
        printf("INFANTIL B");
    } else if (num <= 13) {
        printf("JUVENIL A");
    } else if (num <= 17) {
        printf("JUVENIL B");
    } else {
        printf("ADULTO");
    }
}

// ex9
static inline int verificaSinal(int numero) {
    return (numero >= 0) ? 1 : -1;
}

// ex10
static inline int verPar(int numero) {
    return (numero % 2 == 0) ? 1 : 0;
}

// ex11
static inline char obterConceito(float media) {
    if (media >= 0.0 && media <= 4.9) return 'D';
    if (media <= 6.9) return 'C';
    if (media <= 8.9) return 'B';
    if (media <= 10.0) return 'A';
    return 'O';
}

// ex12
static inline void ordenarCrescente(int val1, int val2, int val3) {
    int temp;
    if (val1 > val2) { temp = val1; val1 = val2; val2 = temp; }
    if (val1 > val3) { temp = val1; val1 = val3; val3 = temp; }
    if (val2 > val3) { temp = val2; val2 = val3; val3 = temp; }

    printf("%d %d %d\n", val1, val2, val3);
}

// ex13
static inline void verificarTriangulo(int lado1, int lado2, int lado3) {
    if ((lado1 < lado2 + lado3 && lado1 > abs(lado2 - lado3)) &&
        (lado2 < lado1 + lado3 && lado2 > abs(lado1 - lado3)) &&
        (lado3 < lado1 + lado2 && lado3 > abs(lado1 - lado2))) {

        if (lado1 == lado2 && lado2 == lado3) {
            printf("Equilátero.\n");
        } else if (lado1 != lado2 && lado2 != lado3 && lado3 != lado1) {
            printf("Escaleno.\n");
        } else {
            printf("Isósceles.\n");
        }
    } else {
        printf("Não é triângulo.\n");
    }
}

// ex14
static inline float calcularMedia(int quantidade) {
    int valor, soma = 0;
    for (int i = 0; i < quantidade; i++) {
        scanf("%d", &valor);
        soma += valor;
    }
    return (float)soma / quantidade;
}

// ex15
static inline int potencia(int base, int expoente) {
    int resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

#endif