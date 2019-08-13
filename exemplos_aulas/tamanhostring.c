#include<stdio.h>

int main(){
	char s[50];
	int c;

	puts("Digite uma string:");
	scanf("%[^\n]s​", s);

	while(s[c] != '\0') c++;

	printf("tamanho = %d",c);

}