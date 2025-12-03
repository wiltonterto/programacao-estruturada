#include <stdio.h>

int main() {
    double dist;
    
    scanf("%lf", &dist);

    double tempo_horas = dist / 150.0;
    
    double minutos = tempo_horas * 60.0;

    printf("%.0lf minutos\n", minutos);
    
    return 0;
}