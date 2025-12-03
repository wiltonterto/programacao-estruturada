#include <stdio.h>

int main() {
    double salario, novo_salario, reajuste;
    int percentual;

    scanf("%lf", &salario);

    if (salario < 1500.00) {
        percentual = 20;
    } 
    else if (salario < 5000.00) {
        percentual = 15;
    } 
    else {
        percentual = 10;
    }

    reajuste = salario * percentual / 100.0;
    novo_salario = salario + reajuste;

    printf("Novo salario: %.2lf\n", novo_salario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %d %%\n", percentual);

    return 0;
}