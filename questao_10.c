#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    if (A == 0) {
        printf("Impossivel calcular\n");
        return 0; 
    }

    double delta = B*B - 4*A*C;

    if (delta < 0) {
        printf("Impossivel calcular\n");
        return 0; 
    }

    double r1 = (-B + sqrt(delta)) / (2*A);
    double r2 = (-B - sqrt(delta)) / (2*A);

    printf("R1 = %.5lf\n", r1);
    printf("R2 = %.5lf\n", r2);

    return 0;
}