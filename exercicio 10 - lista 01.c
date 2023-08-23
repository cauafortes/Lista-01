#include <stdio.h>
#include <string.h>

int main() {
    char DNA[51]; 
    printf("Digite a sequencia de DNA (ate 50 bases): ");
    scanf("%s", DNA);

    char complementar[51];
    int tamanho = strlen(DNA), i;

    for (i = 0; i < tamanho; i++) {
        switch (DNA[i]) {
            case 'A':
                complementar[i] = 'T';
                break;
            case 'T':
                complementar[i] = 'A';
                break;
            case 'C':
                complementar[i] = 'G';
                break;
            case 'G':
                complementar[i] = 'C';
                break;
            default:
                printf("Caractere invalido na sequencia de DNA.\n");
                return 1; 
        }
    }
    complementar[tamanho] = '\0'; 

    printf("Vetor complementar:\n%s\n", complementar);

    return 0; 
}

