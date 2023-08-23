#include <stdio.h>

int main() {
    int n, i;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);

    int vetor1[n], vetor2[n], vetorResultado[n];

    printf("Digite os elementos do primeiro vetor:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os elementos do segundo vetor:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &vetor2[i]);
    }

    printf("Vetor resultado:\n");
    for (i = 0; i < n; i++) {
        vetorResultado[i] = vetor1[i] * vetor2[i];
        printf("%d ", vetorResultado[i]);
    }
    printf("\n");

    return 0;
}


