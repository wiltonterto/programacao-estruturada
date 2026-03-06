#include <stdio.h>
#include <stdlib.h>

int main() {

    int N;
    int *vetor;
    int maior, menor;
    int pos_maior = 0, pos_menor = 0;
    float media;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &N);

    vetor = (int*) malloc(N * sizeof(int));

    printf("Digite %d numeros inteiros:\n", N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for (int i = 1; i < N; i++) {

        if (vetor[i] > maior) {
            maior = vetor[i];
            pos_maior = i;
        }

        if (vetor[i] < menor) {
            menor = vetor[i];
            pos_menor = i;
        }

    }

    media = (maior + menor) / 2.0;

    printf("\nMaior valor: %d\n", maior);
    printf("Posicao do maior: %d\n", pos_maior);

    printf("\nMenor valor: %d\n", menor);
    printf("Posicao do menor: %d\n", pos_menor);

    printf("\nMedia entre o maior e o menor: %.2f\n", media);

    free(vetor);

    return 0;
}
