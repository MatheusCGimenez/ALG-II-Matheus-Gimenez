#include <stdio.h>

int main() {
    int quantidade_clientes;
    int quantidade_produtos;
    float total_compra;
    float preco_produto;
    float valor_pago;
    float pagamento;
    float troco;

    scanf("%d", &quantidade_clientes);

    for(int i = 0; i < quantidade_clientes; i++) {
        scanf("%d", &quantidade_produtos);

        total_compra = 0;

        for(int j = 0; j < quantidade_produtos; j++) {
            scanf("%f", &preco_produto);
            total_compra+= preco_produto;
        }

        valor_pago = 0;

        while(valor_pago < total_compra) {
            scanf("%f", &pagamento);
            valor_pago+= pagamento;

        }

        troco = valor_pago - total_compra;
        printf("%.2f %.2f ", total_compra,troco);
    }

    return 0;
}
