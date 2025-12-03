#include <stdio.h>

int main() {
    int M, N;

    while (1) {
        scanf("%d %d", &M, &N);

        if (M <= 0 || N <= 0) {
            break;
        }

        int menor, maior;
        if (M < N) {
            menor = M;
            maior = N;
        } else {
            menor = N;
            maior = M;
        }

        int soma = 0;

        for (int i = menor; i <= maior; i++) {
            printf("%d ", i);
            soma += i;
        }

        printf("Soma=%d\n", soma);
    }

    return 0;
}