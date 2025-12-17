#include <stdio.h>

void reduz(int *a, int *b) {
    int cont = 0;

    while (*a != *b) {
        if (*a > *b)
            *a = *a - *b;
        else
            *b = *b - *a;
        cont++;
    }

    printf("%d\n", cont);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    reduz(&a, &b);
    return 0;
}