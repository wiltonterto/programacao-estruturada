#include <stdio.h>

int somaDigitos(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + somaDigitos(n / 10);
}

int main() {
    int numero;
    printf("Digite um valor:\n");
    scanf("%d", &numero);
    printf("A soma dos dígitos escolhidos foi: %d\n", somaDigitos(numero));

    return 0;
}