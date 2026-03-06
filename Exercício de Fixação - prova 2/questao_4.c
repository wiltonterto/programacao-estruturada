#include <stdio.h>

typedef enum { REPROVADO, RECUPERACAO, APROVADO } Situacao;

Situacao verificar_situacao(float nota) {
    if (nota >= 8.0) return APROVADO;
    if (nota >= 6.0) return RECUPERACAO;
    return REPROVADO;
}

int main() {
    int opcao;
    float nota;

    do {
        printf("\n1. Inserir nota\n0. Encerrar\nEscolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite a nota: ");
            scanf("%f", &nota);

            switch (verificar_situacao(nota)) {
                case APROVADO:
                    printf("Situacao: APROVADO\n");
                    break;
                case RECUPERACAO:
                    printf("Situacao: RECUPERACAO\n");
                    break;
                case REPROVADO:
                    printf("Situacao: REPROVADO\n");
                    break;
            }
        }
    } while (opcao != 0);

    return 0;
}
