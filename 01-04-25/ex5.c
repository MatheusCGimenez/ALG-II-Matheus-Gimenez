#include <stdio.h>

void converterTempo(int totalSegundos) {
    int horas, minutos, segundos;

    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;

    printf("%d horas, %d minutos, %d segundos\n", horas, minutos, segundos);
}

int main() {
    int tempo;

    printf("Digite algum valor em segundos: \n");
    scanf("%d", &tempo);

    converterTempo(tempo);

    return 0;
}
