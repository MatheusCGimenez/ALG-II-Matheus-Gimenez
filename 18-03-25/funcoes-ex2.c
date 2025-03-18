#include <stdio.h>

int func(int v1, int v2) {

    int soma = 0;

    for (int i = v1; i <= v2; i++)
    {
        soma += i;
    }

    return soma;
}

int main() {


    printf("%d", func(2, 5));

    return 0;
}