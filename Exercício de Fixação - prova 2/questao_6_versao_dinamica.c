#include <stdio.h>
#include <stdlib.h>

typedef enum { ALIMENTO, BEBIDA, LIMPEZA } Categoria;

typedef struct {
    int codigo;
    char nome[50];
    Categoria cat;
    float preco;
} Produto;

int main() {
    int n;
    float total = 0;

    printf("Numero de produtos: ");
    scanf("%d", &n);

    Produto *prods = (Produto*) malloc(n * sizeof(Produto));

    for (int i = 0; i < n; i++) {
        printf("\nProduto %d\n", i + 1);
        printf("Codigo: "); scanf("%d", &prods[i].codigo);
        getchar();
        printf("Nome: "); scanf("%49[^\n]", prods[i].nome);
        printf("Categoria (0-Alimento, 1-Bebida, 2-Limpeza): ");
        int c; scanf("%d", &c); prods[i].cat = (Categoria)c;
        printf("Preco: "); scanf("%f", &prods[i].preco);
        
        total += prods[i].preco;
    }

    printf("\n--- Lista por Categoria ---\n");
    char *nomes_cat[] = {"Alimento", "Bebida", "Limpeza"};
    
    for (int c = 0; c <= 2; c++) {
        printf("\n[%s]\n", nomes_cat[c]);
        for (int i = 0; i < n; i++) {
            if (prods[i].cat == c) {
                printf("- %s (R$ %.2f)\n", prods[i].nome, prods[i].preco);
            }
        }
    }

    printf("\nValor total cadastrado: R$ %.2f\n", total);

    free(prods);
    return 0;
}
