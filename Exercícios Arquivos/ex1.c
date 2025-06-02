#include <stdio.h>

int main() {

    // Abertura dos arquivos

    FILE* clientes = fopen("../../Clientes.csv", "w");
    FILE* recebimentos = fopen("../../Recebimentos.csv", "w");

    // Verificação dos arquivos

    if (clientes == NULL || recebimentos == NULL) {
        printf("Erro ao abrir arquivo.");
        return 1;
    }

    // Escrita dentro dos arquivos

    fprintf(clientes, "Cod_Cli,Nome,Endereco,Fone\n");
    fprintf(recebimentos, "Num_doc,Valor_doc,Data Emissao,Data_Vencimento,Cod_Cli\n");


    // Fechamento dos arquivos

    fclose(clientes);
    fclose(recebimentos);

    return 0;
}