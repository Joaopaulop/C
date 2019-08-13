#include <stdio.h>
#define tam 10

int main(){
	
	int a,x[tam],qtd =0;

	puts("Digite 10 inteiros:");
	for(a = 0;a<tam;a++){
	scanf("%d",&x[a]);
	if(x[a]>0){
		qtd++;
	}
	}
	printf("%d numeros positivos",qtd);
	return 0;
}