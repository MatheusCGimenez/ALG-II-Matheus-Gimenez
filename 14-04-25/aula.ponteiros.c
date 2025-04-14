#include <stdio.h>

int main() {

    int alguma_coisa = 10;
    int* ponteiro;
    ponteiro = &alguma_coisa;

    printf("ENDERECO DE MEMORIA: %p \n", &ponteiro);
    printf("ENDERECO DA VARIAVEL QUE FOI ATRIBUIDA AO PONTEIRO: %p \n", ponteiro);
    printf("VALOR DENTRO DO PONTEIRO: %d \n", *ponteiro);

    printf("O ENDERECO DA VARIAVEL alguma_coisa: %p \n", &alguma_coisa);

    return 0;
}