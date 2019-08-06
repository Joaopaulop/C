#include <stdio.h>

int main(){
	int val, n50, r50, n20, r20, n10, r10, n5, r5, n1;

	printf("Digite o valor para saque: \n");
	scanf("%d",&val);

	n50 = val/50;
	r50 = val%50;
	n20 = r50/20;
	r20 = r50%20;
	n10 = r20/10;
	r10 = r20%10;
	n5 = r10/5;
	r5 = r10%5;
	n1 = r5;
	

	printf("A quantidade de notas sao:\n");
	printf("%d notas de 50\n",n50);
	printf("%d notas de 20\n",n20);
	printf("%d notas de 10\n",n10);
	printf("%d notas de 5\n",n5);
	printf("%d notas de 1\n",n1);
	
	return 0;
}