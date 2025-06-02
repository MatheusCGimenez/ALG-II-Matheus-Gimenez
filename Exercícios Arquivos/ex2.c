#include <stdio.h>

int main() {

    FILE* clientes = fopen("../../Clientes.csv", "a");

    if (clientes == NULL) {
        printf("Erro ao abrir arquivos de Clientes!");
        return 1;
    }

    int cod_cli;
    char nome[60], endereco[100], fone[20];
    char continuar;

    do
    {
        printf("Digite o codigo do cliente: \n");
        scanf("%d", &cod_cli);

        printf("Digite o nome do cliente: \n");
        scanf("%s", nome);

        printf("Digite o endereco do cliente: \n");
        scanf("%s", endereco);

        printf("Digite o telefone do cliente: \n");
        scanf("%s", fone);

        fprintf(clientes, "%d,%s,%s,%s", cod_cli, nome, endereco, fone);

        printf("Deseja cadastrar outro usuario? \n");

    } while (continuar == 's' || continuar == 'S');

    fclose(clientes);

    return 0;
}