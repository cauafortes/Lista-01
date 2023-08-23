#include <stdio.h>

double encontrarMaior(double vetor[], int n) {
    double maior = vetor[0];
    int i;
    for (i = 1; i < n; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

int main() {
    int n, i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    double vetor[n];
    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < n; i++) {
        scanf("%lf", &vetor[i]);
    }
    printf("Vetor informado:\n");
    for (i = 0; i < n; i++) {
        printf("%.2lf ", vetor[i]);
    }
    printf("\n");
    double maior = encontrarMaior(vetor, n);
    printf("O maior elemento do vetor e: %.2lf\n", maior);
    return 0;
}

