#include <stdio.h>

int main() {
    int n, i;
    printf("Digite o numero de lancamentos do dado: ");
    scanf("%d", &n);

    int resultadoDado[n];
    int ocorrencias[6] = {0}; // Inicializa com zeros

    printf("Digite os resultados dos lancamentos:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &resultadoDado[i]);
        
        if (resultadoDado[i] >= 1 && resultadoDado[i] <= 6) {
            ocorrencias[resultadoDado[i] - 1]++;
        }
    }

    printf("Ocorrencias de cada face do dado:\n");
    for (i = 0; i < 6; i++) {
        printf("Face %d: %d vezes\n", i + 1, ocorrencias[i]);
    }

    return 0;
}


