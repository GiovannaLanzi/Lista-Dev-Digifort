#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
 	char senha[50]; 
    int i=0, maisc=0, min=0, num=0, esp=0, tam=0;       

    printf("Digite a senha: ");
    gets(senha);
    
    while(senha[i] != 0){
        if(senha[i]>='A' && senha[i]<='Z') maisc=1;
        if(senha[i]>='a' && senha[i]<='z') min=1;
        if(senha[i]>='0' && senha[i]<='9') num=1;
        if(senha[i]=='@' || senha[i]=='$' || senha[i]== '#' || senha[i]=='&') esp=1;
        i++;
        tam++;
    }
    
    if(tam>=8 && maisc && min && num && esp) {
        printf("Senha válida!\n");
    } else {
        printf("Senha inválida! A senha deve ter:\n");
        if(tam<8) printf(" No mínimo 8 caracteres.\n");
        if(!maisc) printf(" Pelo menos uma letra maiúscula.\n");
        if(!min) printf(" No mínimo uma letra minúscula.\n");
        if(!num) printf(" Ao menos um número.\n");
        if(!esp) printf(" No mínimo um caractere especial (@, $, #, &).\n");
    }

    return 0;
}
