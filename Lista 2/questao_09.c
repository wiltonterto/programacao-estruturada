#include <stdio.h>

int somaImpares(int x, int y) {
    int soma = 0, i;

    if (x > y) {
        int aux = x;
        x = y;
        y = aux;
    }

    for (i = x + 1; i < y; i++) {
        if (i % 2 != 0)
            soma += i;
    }

    return soma;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    printf("%d\n", somaImpares(x, y));
    return 0;
}