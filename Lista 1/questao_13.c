#include <stdio.h>

int main() {
    int numero;
    int maior_valor;
    int posicao_maior;

    for (int i = 1; i <= 10; i++) {
        scanf("%d", &numero);


        if (i == 1) {
            maior_valor = numero;
            posicao_maior = 1;
        } 
        else if (numero > maior_valor) {
            maior_valor = numero;
            posicao_maior = i; 
        }
    }

    printf("%d\n", maior_valor);
    printf("%d\n", posicao_maior);

    return 0;
}