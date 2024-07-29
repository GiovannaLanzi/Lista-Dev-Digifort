#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "Portuguese");
	int n, fat =1;
	
	printf("Digite um número: /n");
	scanf("%d", &n);
	
	for(n=n; n>=1; n--){
			 fat = fat * n;
	}
	printf("O fatorial do número digitado é: %d", fat);
	
	return 0;
}
