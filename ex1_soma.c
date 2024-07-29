#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, soma;
	
	printf("Digite dois números: ");
	scanf("%d %d", &n1, &n2);
	
	soma = n1 + n2;
	
	printf("A soma dos números digitados é = %d\n", soma);
	
	return 0;
}
