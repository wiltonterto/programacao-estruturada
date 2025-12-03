#include <stdio.h>

int main() {
    int h_inicio, m_inicio, h_fim, m_fim;

    scanf("%d %d %d %d", &h_inicio, &m_inicio, &h_fim, &m_fim);

    int inicio_total = (h_inicio * 60) + m_inicio;
    int fim_total = (h_fim * 60) + m_fim;

    int duracao = fim_total - inicio_total;

    if (duracao <= 0) {
        duracao += 1440;
    }

    int horas = duracao / 60;
    int minutos = duracao % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);

    return 0;
}