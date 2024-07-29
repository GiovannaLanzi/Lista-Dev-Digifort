#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	int cat1, cat2, hip;
	
	printf("Digite o lado do cateto 1: ");
	scanf("%d", &cat1);
	
	printf("Digite o lado do cateto 2: ");
	scanf("%d", &cat2);
	
	hip=sqrt((cat1*cat1)+(cat2*cat2));
	printf("O valor da hipotenusa é: %d", hip);
	
	return 0;
}
