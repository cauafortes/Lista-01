 #include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char p1[40];
	char p2[40];
	int tamanho, i, j=0;
	printf("Entre com uma palavra 1:");
	gets(p1);
	printf("P1: %s \n",p1);
	tamanho = strlen(p1);
	for(i=tamanho-1;i>=0;i--){
		p2[j] = p1[i];
		j++;
	}
	p2[tamanho] = '\0'; //terminar string
	puts(p2);	
}


