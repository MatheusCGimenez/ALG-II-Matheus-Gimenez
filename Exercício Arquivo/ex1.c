#include <stdio.h>

int main() {

    FILE* clientes = fopen("../../Clientes.csv", "w");
    FILE* recebimentos = fopen("../../Recebimentos.csv", "w");

    if (clientes == NULL || recebimentos == NULL) {
        printf("Houve um erro ao criar o arquivo.");
        return 1;
    }

    fprintf(clientes, "Cod_Cli,Nome,Endereco,Fone");
    fprintf(recebimentos, "Num_doc,Valor_doc,Data_Emissao,Data_Vencimento,Cod_Cli");

    fclose(clientes);
    fclose(recebimentos);

    return 0;
}