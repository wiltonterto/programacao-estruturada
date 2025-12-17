#include <stdio.h>

void fatoresPrimos(int n, int divisor) {
    if (n == 1)
        return;

    if (n % divisor == 0) {
        printf("%d ", divisor);
        fatoresPrimos(n / divisor, divisor);
    } else {
        fatoresPrimos(n, divisor + 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    fatoresPrimos(n, 2);
    return 0;
}