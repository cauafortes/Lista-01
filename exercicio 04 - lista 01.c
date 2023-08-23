#include <stdio.h>
#include "biblioteca.h"

int contaImpar(int vetor[], int n){
	int i, cont=0;
	for(i=0;i<n;i++)
		if(vetor[i]%2!=0)
			cont++;
			printf("Qtde de numeros impares: %d\n",cont);
	
	return cont;		
	
}

int main(){
	int vet[100], n;
	printf("Qtde de elementos do vetor: ");
	scanf("%d",&n);
	printf("Digite os dados para o vetor: ");
	leiaVetor(vet, n);
	printf("Vetor recebido:\n");
	escrevaVetor(vet, n);
	contaImpar(vet, n);
	return 0;	
}


