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
        printf("Tente advinhar o n�mero escolhido entre 1 e 100: ");
        scanf("%d", &tent);
        if(tent<sort) {
            printf("O n�mero sorteado � maior do que %d. Tente de novo.\n", tent);
        } else if(tent>sort){
            printf("O n�mero sorteado � menor do que %d. Tente de novo.\n", tent);
        } else{
            printf("Parab�ns! Voc� acertou o n�mero %d.\n", sort);
            break;
        }
    }

    return 0;
}
