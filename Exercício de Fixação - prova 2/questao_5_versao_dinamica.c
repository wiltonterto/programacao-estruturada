#include <stdio.h>
#include <stdlib.h>

typedef enum { REPROVADO, RECUPERACAO, APROVADO } Situacao;

typedef struct {
    char nome[50];
    float nota;
    Situacao sit;
} Aluno;

Situacao avalia(float nota) {
    if (nota >= 8.0) return APROVADO;
    if (nota >= 6.0) return RECUPERACAO;
    return REPROVADO;
}

float calcular_media_turma(Aluno *alunos, int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) soma += alunos[i].nota;
    return soma / n;
}

int main() {
    int n;
    int aprovados = 0, reprovados = 0;

    printf("Quantidade de alunos: ");
    scanf("%d", &n);

    Aluno *alunos = (Aluno*) malloc(n * sizeof(Aluno));

    for (int i = 0; i < n; i++) {
        getchar();
        printf("\nNome do aluno %d: ", i + 1);
        scanf("%49[^\n]", alunos[i].nome);
        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
        
        alunos[i].sit = avalia(alunos[i].nota);
        
        if (alunos[i].sit == APROVADO) aprovados++;
        if (alunos[i].sit == REPROVADO) reprovados++;
    }

    printf("\n--- Relatorio ---\n");
    printf("Percentual de Aprovados: %.2f%%\n", (aprovados * 100.0) / n);
    printf("Percentual de Reprovados: %.2f%%\n", (reprovados * 100.0) / n);
    printf("Media da turma: %.2f\n", calcular_media_turma(alunos, n));

    free(alunos);
    return 0;
}
