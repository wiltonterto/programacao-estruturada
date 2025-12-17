#include <stdio.h>

int inverte(int n, int acumulador) {
    if (n == 0)
        return acumulador;
    return inverte(n / 10, acumulador * 10 + (n % 10));
}

int ehPalindromo(int n) {
    if (n == inverte(n, 0))
        return 1; 
    else
        return 0; 
}

int main() {
    int n;
    scanf("%d", &n);

    if (ehPalindromo(n))
        printf("1\n");
    else
        printf("0\n"); 

    return 0;
}