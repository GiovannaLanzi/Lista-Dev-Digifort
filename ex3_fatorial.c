#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "Portuguese");
	int n, fat =1;
	
	printf("Digite um n�mero: /n");
	scanf("%d", &n);
	
	for(n=n; n>=1; n--){
			 fat = fat * n;
	}
	printf("O fatorial do n�mero digitado �: %d", fat);
	
	return 0;
}
