#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char palavra[50];
    int i, j;
    int palind = 1;  
   
    printf("Digite uma palavra: \n");
    for (i = 0; i < sizeof(palavra) - 1; i++) {
        palavra[i] = getchar();
        if (palavra[i] == '\n') {
            break;
        }
    }
    palavra[i] = 0;

    int tamanho = 0;
    while (palavra[tamanho] != '\0') {
        tamanho++;
    }

    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        if (palavra[i] != palavra[j]) {
            palind = 0;
            break;
        }
    }

    if (palind) {
        printf("A palavra digitada é um palíndromo", palavra);
    } else {
        printf("A palavra digitada não é um palíndromo", palavra);
    }

    return 0;
}

