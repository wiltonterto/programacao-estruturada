#include <stdio.h>

#define N 3

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

    int pos_maior = 0;

    printf("Digite os dados de %d alunos:\n", N);

    Aluno alunos[N];

    for (int i = 0; i < N; i++) {

        printf("\nAluno %d:\n", i + 1);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        getchar();

        printf("Nome: ");
        scanf("%49[^\n]", alunos[i].nome);

        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
    }

    for (int i = 1; i < N; i++) {
        if (alunos[i].nota > alunos[pos_maior].nota) {
            pos_maior = i;
        }
    }

    imprimir_alunos(alunos, N);

    printf("\nAluno com maior nota:\n");
    printf("Nome: %s\n", alunos[pos_maior].nome);
    printf("Nota: %.2f\n", alunos[pos_maior].nota);

    return 0;
}
