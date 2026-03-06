#include <stdio.h>

int main() {
    int matriz[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int soma_principal = 0, soma_secundaria = 0;

    for (int i = 0; i < 4; i++) {
        soma_principal += matriz[i][i];
        soma_secundaria += matriz[i][3 - i];
    }

    printf("Soma da Diagonal Principal: %d\n", soma_principal);
    printf("Soma da Diagonal Secundaria: %d\n", soma_secundaria);

    if (soma_principal == soma_secundaria) {
        printf("As somas sao iguais.\n");
    } else {
        printf("As somas sao diferentes.\n");
    }

    return 0;
}
