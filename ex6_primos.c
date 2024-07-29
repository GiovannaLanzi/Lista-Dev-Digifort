#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    int i, j,primo;

    for (i=2; i<=100; i++){
        primo=1;
        for (j=2; j<=i/2; j++){
            if (i%j==0){
                primo=0; 
                break;
            }
        }
        if(primo){
            printf("%d ", i);
        }
    }
    return 0;
}
