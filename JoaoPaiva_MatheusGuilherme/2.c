#include <stdio.h>

int main(){

	int a, x, y;	
	puts("Digite o primeiro valor:");
	scanf("%d",&a);
	puts("Digite o segundo valor:");
	scanf("%d",&y);
	 x = a;
	while(x < y){
		if(x%2 != 0){
			printf("%d impar entre %d e %d \n",x ,a, y);
		}
		x++;
	}
}