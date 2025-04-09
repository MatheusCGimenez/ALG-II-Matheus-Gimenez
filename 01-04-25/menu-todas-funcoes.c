#include <stdio.h>
#include "todas-funcoes.h"

int main() {
    int opcao;

    printf("\n======= MENU DE FUNCOES =======\n");
    printf("1. EXIBIR 'OI'\n");
    printf("2. IMPRIMIR\n");
    printf("3. IMPRIMIR E RETORNAR\n");
    printf("4. BHASKARA\n");
    printf("5. CONVERTER TEMPO\n");
    printf("6. SEM NADA AINDA, NÃO CLICAR\n");
    printf("7. NUMERO PERFEITO\n");
    printf("8. VERIFICAR CATEGORIA\n");
    printf("9. VERIFICAR SINAL NUMERO\n");
    printf("10. VERIFICAR PAR\n");
    printf("11. CONCEITO\n");
    printf("12. ORDENACAO CRESCENTE\n");
    printf("13. TRIANGULO\n");
    printf("14. MEDIA VALORES\n");
    printf("15. POTENCIA\n");
    printf("0. SAIR\n");
    printf("ESCOLHA ALGUMA OPCAO: ");
    scanf("%d", &opcao);

    printf("\n");

    switch (opcao) {
        
    case 1:
        function();
        break;

    case 2: {
        char texto[100];
        printf("DIGITE UM TEXTO: ");
        scanf(" %[^\n]", texto);
        print_text(texto);
        break;
    }

    case 3: {
        char texto[100];
        printf("DIGITE UM TEXTO: ");
        scanf(" %[^\n]", texto);
        char resultado = return_o_and_print(texto);
        printf("\nFUNCAO RETORNOU: %c\n", resultado);
        break;
    }

    case 4: {
        int a, b, c;
        printf("DIGITE OS COEFICIENTES A, B E C: ");
        scanf("%d %d %d", &a, &b, &c);
        bhaskara(a, b, c);
        break;
    }

    case 5: {
        int segundos;
        printf("DIGITE O TOTAL DE SEGUNDOS: ");
        scanf("%d", &segundos);
        converterTempo(segundos);
        break;
    }

    case 6: {
        printf("NAO FIZ ESSA AINDA");
        break;
    }

    case 7: {
        int num;
        printf("DIGITE UM NUMERO: ");
        scanf("%d", &num);
        if (verificarPerfeito(num)) {
            printf("PERFEITO\n");
        }
        else {
            printf("IMPERFEITO\n");
        }
        break;
    }

    case 8: {
        int idade;
        printf("DIGITE A IDADE: ");
        scanf("%d", &idade);
        verificarCategoria(idade);
        break;
    }

    case 9: {
        int num;
        printf("DIGITE UM NUMERO: ");
        scanf("%d", &num);
        int sinal = verificaSinal(num);
        printf("SINAL: %s\n", sinal > 0 ? "POSITIVO" : "NEGATIVO");
        break;
    }

    case 10: {
        int num;
        printf("DIGITE UM NUMERO: ");
        scanf("%d", &num);
        printf("%s\n", verPar(num) ? "E PAR" : "E IMPAR");
        break;
    }

    case 11: {
        float media;
        printf("DIGITE A MEDIA: ");
        scanf("%f", &media);
        printf("CONCEITO: %c\n", obterConceito(media));
        break;
    }

    case 12: {
        int a, b, c;
        printf("DIGITE TRES VALORES: ");
        scanf("%d %d %d", &a, &b, &c);
        ordenarCrescente(a, b, c);
        break;
    }

    case 13: {
        int l1, l2, l3;
        printf("DIGITE OS TRES LADOS DO TRIANGULO: ");
        scanf("%d %d %d", &l1, &l2, &l3);
        verificarTriangulo(l1, l2, l3);
        break;
    }

    case 14: {
        int qtd;
        printf("DIGITE A QUANTIDADE DE VALORES: ");
        scanf("%d", &qtd);
        float media = calcularMedia(qtd);
        printf("MEDIA: %.2f\n", media);
        break;
    }

    case 15: {
        int base, exp;
        printf("DIGITE BASE E EXPOENTE: ");
        scanf("%d %d", &base, &exp);
        printf("RESULTADO: %d\n", potencia(base, exp));
        break;
    }

    case 0:
        printf("SAINDO...\n");
        break;

    default:
        printf("OPCAO INVALIDA.\n");
        break;
    }

    return 0;
}