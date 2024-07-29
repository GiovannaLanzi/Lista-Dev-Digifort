#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    int sort, tent, continuar=1;
    srand(time(NULL));
    sort=rand()%100 + 1;

    while(continuar){
        printf("Tente advinhar o número escolhido entre 1 e 100: ");
        scanf("%d", &tent);
        if(tent<sort) {
            printf("O número sorteado é maior do que %d. Tente de novo.\n", tent);
        } else if(tent>sort){
            printf("O número sorteado é menor do que %d. Tente de novo.\n", tent);
        } else{
            printf("Parabéns! Você acertou o número %d.\n", sort);
            break;
        }
    }

    return 0;
}
