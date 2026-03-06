#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 3

typedef struct {
    float x;
    float y;
} Ponto;

int main() {
    
    printf("Digite as %d coordenadas (x y):\n", N);

    Ponto pontos[N];
    
    for (int i = 0; i < N; i++) {
        printf("Ponto %d: ", i + 1);
        scanf("%f %f", &pontos[i].x, &pontos[i].y);
    }

    float **distancias = (float**) malloc(N * sizeof(float*));
    for (int i = 0; i < N; i++) {
        distancias[i] = (float*) malloc(N * sizeof(float));
    }

    printf("\nMatriz de Distancias Euclidianas:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            distancias[i][j] = sqrt(pow(pontos[i].x - pontos[j].x, 2) + pow(pontos[i].y - pontos[j].y, 2));
            printf("%6.2f ", distancias[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < N; i++) free(distancias[i]);
    free(distancias);
    
    return 0;
}