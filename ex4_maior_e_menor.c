#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, n3, maior, menor;
	
	printf("Digite o primeiro valor: \n");
	scanf("%d", &n1);
	
	printf("Digite o segundo valor: \n");
	scanf("%d", &n2);
	
	printf("Digite o terceiro valor: \n");
	scanf("%d", &n3);
	
	maior = n1;
	menor= n1;
	
	if(n2>maior){
        maior = n2;
    }
    else if(n3>maior){
        maior = n3;
    }

    if(n2<menor){
        menor = n2;
    }
    else if(n3<menor){
        menor = n3;
    }

	printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d", menor);

    return 0;

}
    
