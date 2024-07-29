#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	int n, i, tabuada;
	printf("Digite um número que você deseja que seja feita a tabuada: ");
	scanf("%d", &n);
	
	for(i=1; i<=10; i++){
		tabuada = n*i;
		printf("\t%d", tabuada);	 
	}
	return 0;
}
