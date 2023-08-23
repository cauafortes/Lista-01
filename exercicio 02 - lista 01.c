#include <stdio.h>

double encontrarMenor(double vetor[], int n) {
    double menor = vetor[0];
    int i;
    for(i = 1; i < n; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    return menor;
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

    double menor = encontrarMenor(vetor, n);
    printf("O menor elemento do vetor e: %.2lf\n", menor);

    return 0;
}

