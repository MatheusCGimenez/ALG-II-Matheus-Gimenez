#include <stdio.h>

void ordenarCrescente(int val1, int val2, int val3) {

    // tive que pedir ajuda ao ChatGPT aqui, ficou muito complexo entender essa lógica. 

    int temp;
    if (val1 > val2) { temp = val1; val1 = val2; val2 = temp; }
    if (val1 > val3) { temp = val1; val1 = val3; val3 = temp; }
    if (val2 > val3) { temp = val2; val2 = val3; val3 = temp; }
    
    printf("%d %d %d\n", val1, val2, val3);
}

int main() {
    int val1, val2, val3;
    printf("Digite 3 valores: \n");

    scanf("%d %d %d", &val1, &val2, &val3);

    ordenarCrescente(val1, val2, val3);

    return 0;
}

