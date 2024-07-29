#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "Portuguese");
	int i;
	
	for(i=1; i<=100; i++){
			 if(i%2==0){
			 			printf("%d\n", i);
            			}
             else{ 
			 	   printf("");
             }
	}
	return 0;
}
