#include <stdio.h>

void minMax(int a, int b, int c, int *min, int *max) { 
    *min = a;
    *max = a;

    // Testa o b
    if (b < *min) {
        *min = b;
    }
    if (b > *max) {
        *max = b;
    }

    // Testa o c
    if (c < *min) {
        *min = c;
    }
    if (c > *max) {
        *max = c;
    }
}

int main() {
    int x, y, z;
    int menor, maior;

    printf("DIGITE OS TRÊS NÚMEROS:\n");
    scanf("%d %d %d", &x, &y, &z);

    minMax(x, y, z, &menor, &maior);

    printf("Menor = %d\n", menor);
    printf("Maior = %d\n", maior);

    return 0;
}