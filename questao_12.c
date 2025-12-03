#include <stdio.h>

int main() {
    int numero;
    
    scanf("%d", &numero);

    for (int i = 1; i <= 20; i++) {

        printf("%d x %2d = %d\n", numero, i, numero * i);
    }

    return 0;
}