#include <stdio.h>

char obterConceito(float media) {
    if (media >= 0.0 && media <= 4.9) {
        return 'D';
    }
    else if (media >= 5.0 && media <= 6.9) {
        return 'C';
    }
    else if (media >= 7.0 && media <= 8.9) {
        return 'B';
    }
    else if (media >= 9.0 && media <= 10.0) {
        return 'A';
    }
    else {
        return 'O';
    }
}

int main() {
    float media;
    char conceito;

    printf("Digite algum valor:\n");
    scanf("%f", &media);

    conceito = obterConceito(media);

    printf("%c\n", conceito);
    
    return 0;
}