 #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Inicializar a semente do gerador de números aleatórios

    int n;
    printf("Digite a quantidade de numeros a serem sorteados: ");
    scanf("%d", &n);

    int vetor[n], i;
    for (i = 0; i < n; i++) {
        vetor[i] = rand() % 100; // Sorteio de números entre 0 e 99
    }

    int num;
    printf("Digite um numero para verificar se esta no vetor: ");
    scanf("%d", &num);

    printf("Vetor sorteado:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    int posicao = -1;
    for (i = 0; i < n; i++) {
        if (vetor[i] == num) {
            posicao = i;
            break;
        }
    }

    if (posicao != -1) {
        printf("O numero %d esta no vetor, na posicao %d.\n", num, posicao);
    } else {
        printf("O numero %d nao esta no vetor.\n", num);
    }

    return 0;
}

