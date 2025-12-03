#include <stdio.h>

int main() {
    int distancia;
    double combustivel;

    scanf("%d %lf", &distancia, &combustivel);

    double consumo = distancia / combustivel;

    printf("%.3lf km/l\n", consumo);
    
    return 0;
}