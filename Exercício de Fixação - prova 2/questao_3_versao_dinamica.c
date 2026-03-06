#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    char nome[50];
    float nota;
} Aluno;

void imprimir_alunos(Aluno *alunos, int n) {

    printf("\n--- Lista de Alunos ---\n");

    for (int i = 0; i < n; i++) {
        printf("Matricula: %d | Nome: %s | Nota: %.2f\n",
               alunos[i].matricula,
               alunos[i].nome,
               alunos[i].nota);
    }
}

int main() {

    int n, pos_maior = 0;

    printf("Digite o numero de alunos: ");
    scanf("%d", &n);

    Aluno *alunos = malloc(n * sizeof(Aluno));

    for (int i = 0; i < n; i++) {

        printf("\nAluno %d:\n", i + 1);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        getchar();

        printf("Nome: ");
        scanf("%49[^\n]", alunos[i].nome);

        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
    }

    for (int i = 1; i < n; i++) {
        if (alunos[i].nota > alunos[pos_maior].nota) {
            pos_maior = i;
        }
    }

    imprimir_alunos(alunos, n);

    printf("\nAluno com maior nota:\n");
    printf("Nome: %s\n", alunos[pos_maior].nome);
    printf("Nota: %.2f\n", alunos[pos_maior].nota);

    free(alunos);

    return 0;
}
