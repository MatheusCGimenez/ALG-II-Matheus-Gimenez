#include <stdio.h>

int main() {

    int* p;
    int pa = 10;
    p = &pa;

    printf("ENDERECO DE MEMORIA DO p: %p \n", &p);
    printf("ENDERECO DE MEMORIA DA VARIAVEL ATRIBUIDA AO p: %p \n", &pa);
    printf("VALOR DO PONTEIRO p: %d \n", *p);

    printf("ENDERECO DE MEMORIA DE pa: %p \n", &pa);

    // ALTERE O VALOR DO PONTEIRO *pa e os valores e endereços de memória

    int* new_pointer;
    int b = 20;
    new_pointer = &b;
    p = new_pointer;

    printf("======================== \n");
    printf("ENDERECO DE MEMORIA DO p: %p \n", &p);
    printf("ENDERECO DO new_pointer: %p \n", new_pointer);
    printf("ENDERECO DE MEMORIA do b: %p \n", &b);
    printf("Valor do p: %d \n", *p);
    printf("Valor do new_pointer: %d \n", *new_pointer);

    return 0;
}