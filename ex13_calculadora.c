#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, ad, sub, mult, div;
	
	printf("Digite dois n�meros: ");
	scanf("%d %d", &n1, &n2);
	
	ad= n1+n2;
	sub= n1-n2;
	mult=n1*n2;
	div=n1/n2;
	
	printf("Adi��o: %d\n", ad);
	printf("Subtra��o: %d\n", sub);
	printf("Multiplica��o: %d\n", mult);
	printf("Divis�o: %d", div);
	
	return 0; 
}
	
