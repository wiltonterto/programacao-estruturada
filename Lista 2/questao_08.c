#include <stdio.h>

void contaPositivosEMedia() {
    int i, count = 0;
    float x, soma = 0;

    for (i = 0; i < 6; i++) {
        scanf("%f", &x);

        if (x > 0) {
            soma += x;
            count++;
        }
    }

    printf("%d valores positivos\n", count);
    
    if (count > 0) {
        printf("%.1f\n", soma / count);
    }
}

int main() {
    contaPositivosEMedia();
    return 0;
}