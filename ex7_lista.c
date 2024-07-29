#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
 	int n, i, j, var;
    printf("Digite o número de elementos: ");
    scanf("%d", &n);

    int lista[n]; 
    printf("Digite os %d números:\n", n);
    for(i=0; i<n; i++){
        scanf("%d", &lista[i]);
    }
    
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(lista[j]>lista[j+1]){
                var=lista[j];
                lista[j]=lista[j+1];
                lista[j+1]=var;
            }
        }
    }

    printf("Lista: \n");
    for(i=0; i<n; i++){
        printf("%d\t", lista[i]);
    }
    return 0;
}
