#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], limpa[100];
    int j = 0, eh_palindromo = 1;

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            limpa[j++] = tolower(str[i]);
        }
    }
    limpa[j] = '\0';

    int tam = strlen(limpa);
    for (int i = 0; i < tam / 2; i++) {
        if (limpa[i] != limpa[tam - 1 - i]) {
            eh_palindromo = 0;
            break;
        }
    }

    if (eh_palindromo) printf("Palindromo\n");
    else printf("Nao palindromo\n");

    return 0;
}
