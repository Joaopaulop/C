#include <stdio.h>

int main(){
	
	float num;

	puts ("Digite um numero: ");
	scanf("%f", &num);

	if(num>0){
		puts("Positivo");
	} else if(num == 0){
		puts("Nulo");
	} else puts("Negativo");

	return 0;
}