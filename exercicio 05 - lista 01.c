#include <stdio.h>

int contarOcorrencias(int vetor[], int n, int valor) {
    int ocorrencias = 0, i;
    for (i = 0; i < n; i++) {
        if (vetor[i] == valor) {
            ocorrencias++;
        }
    }
    return ocorrencias;
}

int main() {
    int n, i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];
    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    int valor;
    printf("Digite o valor a ser buscado: ");
    scanf("%d", &valor);

    printf("Vetor informado:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    int ocorrencias = contarOcorrencias(vetor, n, valor);
    printf("O valor %d aparece %d vezes no vetor.\n", valor, ocorrencias);

    return 0;
}


