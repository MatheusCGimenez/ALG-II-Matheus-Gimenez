#ifndef funcoeszinhas
#define funcoeszinhas

static inline int mediano(int matriz[2][2]) {
    int tamanho_matriz = 4;
    int vetor[tamanho_matriz];
    int k = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            vetor[k++] = matriz[i][j];
        }
    }

    for (int i = 0; i < 4 - 1; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (vetor[i] > vetor[j]) {
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }

    // vetor[4] = {23, 34, 48, 68}

    if (tamanho_matriz % 2 == 0) {
        tamanho_matriz = tamanho_matriz / 2;

        int result = (vetor[tamanho_matriz] + vetor[tamanho_matriz - 1]) / 2;
        return result;
    }
    else {
        tamanho_matriz = tamanho_matriz / 2;
        return vetor[tamanho_matriz];
    }

}

#endif