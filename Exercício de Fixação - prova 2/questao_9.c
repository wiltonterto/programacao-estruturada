#include <stdio.h>
#include <string.h>

int main() {
    char p1[50], p2[50], maior_palavra[50];

    printf("Digite a primeira palavra: ");
    scanf("%49s", p1);
    printf("Digite a segunda palavra: ");
    scanf("%49s", p2);

    if (strlen(p1) > strlen(p2)) {
        strcpy(maior_palavra, p1);
    } else {
        strcpy(maior_palavra, p2);
    }

    printf("A maior palavra e: %s\n", maior_palavra);

    return 0;
}
