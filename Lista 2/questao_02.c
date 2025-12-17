#include <stdio.h>

int somaMultiplos(int inicio, int fim, int k) {
    int soma = 0;
    
    for (int i = inicio; i <= fim; i++) {
        if (k != 0 && i % k == 0) { 
            soma += i;
        }
    }
    return soma;
}

int main() {
    int inicio, fim, k;

    printf("Digite o valor inicial do intervalo: ");
    scanf("%d", &inicio);

    printf("Digite o valor final do intervalo: ");
    scanf("%d", &fim);

    printf("Digite o valor de K: ");
    scanf("%d", &k);

    printf("Soma de todos os multiplos de %d no intervalo escolhido [%d, %d]: %d\n", k, inicio, fim, somaMultiplos(inicio, fim, k));

    return 0;
}