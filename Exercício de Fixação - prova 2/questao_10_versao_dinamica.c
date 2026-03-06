#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Ponto;

int main() {
    int n;

    printf("Digite o numero de coordenadas (N): ");
    scanf("%d", &n);

    Ponto *pontos = (Ponto*) malloc(n * sizeof(Ponto));
    for (int i = 0; i < n; i++) {
        printf("Ponto %d (x y): ", i + 1);
        scanf("%f %f", &pontos[i].x, &pontos[i].y);
    }

    float **distancias = (float**) malloc(n * sizeof(float*));
    for (int i = 0; i < n; i++) {
        distancias[i] = (float*) malloc(n * sizeof(float));
    }

    printf("\nMatriz de Distancias Euclidianas:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            distancias[i][j] = sqrt(pow(pontos[i].x - pontos[j].x, 2) + pow(pontos[i].y - pontos[j].y, 2));
            printf("%6.2f ", distancias[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) free(distancias[i]);
    free(distancias);
    free(pontos);

    return 0;
}
