#include <stdio.h>

int main() {
    int numNotas = 5, i, j; // Número total de notas por agremiação

    float notas[numNotas];

    printf("Digite as %d notas da agremiacao:\n", numNotas);
    for (i = 0; i < numNotas; i++) {
        scanf("%f", &notas[i]);
    }

    // Ordenar as notas em ordem crescente
    for (i = 0; i < numNotas - 1; i++) {
        for (j = 0; j < numNotas - i - 1; j++) {
            if (notas[j] > notas[j + 1]) {
                float temp = notas[j];
                notas[j] = notas[j + 1];
                notas[j + 1] = temp;
            }
        }
    }

    // Calcular a nota final excluindo a maior e a menor nota
    float notaFinal = 0.0;
    for (i = 1; i < numNotas - 1; i++) {
        notaFinal += notas[i];
    }

    printf("A nota final da agremiacao e: %.2f\n", notaFinal);

    return 0;
}
