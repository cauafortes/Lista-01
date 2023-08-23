 #include <stdio.h>

int calcularSomaVetor(int vetor[], int N) {
    int soma = 0, i;
    for (i = 0; i < N; i++) {
        soma += vetor[i];
    }
    return soma;
}

int main() {
    int N, i;
    printf("Digite o valor de N: ");
    scanf("%d", &N);
    N = (N > 100) ? 100 : N;  // Limitando N a 100, se for maior
    int vetor[N];
    
    for (i = 0; i < N; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    int soma = calcularSomaVetor(vetor, N);
    printf("A soma dos elementos do vetor e: %d\n", soma);
    
    return 0;
}

