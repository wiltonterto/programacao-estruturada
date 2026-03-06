#include <stdio.h>
#include <string.h>

int main() {
    char senha[50];

    printf("Digite a senha: ");
    scanf("%49s", senha);

    if (strcmp(senha, "abc123") == 0) {
        printf("Acesso permitido\n");
    } else {
        printf("Senha incorreta\n");
    }

    return 0;
}
