#include <stdio.h>

int main(){
	
	char s;

	puts("Digite uma letra minuscula ou maiuscula");
	scanf("%c",&s);

	if(s>64 && s<91){
		puts("Letra maiuscula");
	} else if(s>96 && s<123){
		puts("Letra minuscula");
	} else 
		puts("caractere invalido");
}