#include <stdio.h>

int somaDivisores(int n, int d) {
    if (d == 0)
        return 0;

    if (n % d == 0)
        return d + somaDivisores(n, d - 1);
    else
        return somaDivisores(n, d - 1);
}

int amigos(int a, int b) {
    if (somaDivisores(a, a / 2) == b && somaDivisores(b, b / 2) == a)
        return 1;
    else
        return 0;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d\n", amigos(a, b));
    return 0;
}