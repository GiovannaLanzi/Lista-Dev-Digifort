#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf("Digite a posi��o: ");
	scanf("%d", &n);
	
	int anterior=1, fibo=1, aux, i;
	if(n==1 || n==2){
			printf("O valor � 1");
	}
	else{
		 for(i=3; i<=n; i++){
		 		  aux= fibo;
		 		  fibo= anterior+fibo;
				  anterior=aux; 
		 }
	}
	printf("O termo �: %d", fibo);
	system("pause");
	return 0;
}
