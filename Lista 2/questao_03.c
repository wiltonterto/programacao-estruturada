#include <stdio.h>

int somaDiv(int n, int d) {
    if (d == 1) {
        return 1;
    }
    if (n % d == 0) {
        return d + somaDiv(n, d - 1);
    } else {
        return somaDiv(n, d - 1);
    }
}

int ehPerfeito(int n) {
    if (n <= 1) {
        return 0;
    }

    return somaDiv(n, n / 2) == n;
}

int main() {
    int n;

    printf("Digite qualquer número: ");
    scanf("%d", &n);

    if (ehPerfeito(n)) {
        printf("%d é um número perfeito\n", n);
    } else {
        printf("%d Ops, não é um número perfeito\n", n);
    }

    return 0;
}