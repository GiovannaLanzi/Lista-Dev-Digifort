#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n, i;
    float soma = 0.0, media;
    printf("Digite a quantidade de notas: ");
    scanf("%d", &n);
    float lista[n];
    
    printf("Digite os %d n�meros:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &lista[i]);
    }

    for (i = 0; i < n; i++) {
        soma += lista[i];
    }
    media = soma / n;
    printf("A m�dia das notas �: %.2f\n", media);
    
    return 0;
}
