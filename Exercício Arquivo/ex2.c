#include <stdio.h>

int main() {

    FILE* clientes = fopen("../../Clientes.csv", "a");

    if (clientes == NULL) {
        printf("Houve um erro ao abrir arquivo!");
        return 1;
    }

    int Cod_Cli;
    char nome[20], endereco[60], fone[20];

    printf("Digite o codigo do cliente (numeros): \n");
    scanf("%d", &Cod_Cli);

    if (Cod_Cli < 5) {
        printf("O codigo do cliente precisa ter no minimo 5 caracteres!");
        return 1;
    }

    printf("Digite o nome do cliente: \n");
    scanf("[^\n]", nome);

    printf("Digite o endereco do cliente: \n");
    scanf("[^\n]", endereco);

    printf("Digite o telefone do cliente: \n");
    scanf("[^\n]", fone);

    fprintf(clientes, "%d,%s,%s,%s,\n", Cod_Cli, nome, endereco, fone);

    printf("Cliente adicionado ao sistema! \n");


    return 0;
}