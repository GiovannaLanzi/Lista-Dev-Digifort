#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, ad, sub, mult, div;
	
	printf("Digite dois números: ");
	scanf("%d %d", &n1, &n2);
	
	ad= n1+n2;
	sub= n1-n2;
	mult=n1*n2;
	div=n1/n2;
	
	printf("Adição: %d\n", ad);
	printf("Subtração: %d\n", sub);
	printf("Multiplicação: %d\n", mult);
	printf("Divisão: %d", div);
	
	return 0; 
}
	
