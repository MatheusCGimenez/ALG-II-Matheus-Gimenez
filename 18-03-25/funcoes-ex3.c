#include <stdio.h>

// int somarPrimos() {

// }

int verificarPrimo(int value) {
    int qntPrimos = 0;
    if ((value % 1 == 0) && (value % value == 0)) {
        qntPrimos++;
    }

    return qntPrimos;
}



int main()
{

    int sequencia = 0;

    printf("Quantos valores vc deseja adicionar? ");
    scanf("%d", &sequencia);

    int vetorNum[sequencia];

    for (int i = 0; i < sequencia; i++) {
        printf("Valor do indice %d", i);
        scanf("%d", &vetorNum[i]);
    }

    for (int i = 0; i < sequencia; i++) {
        verificarPrimo(vetorNum[i]);
    }


    // printf("%d", )
}