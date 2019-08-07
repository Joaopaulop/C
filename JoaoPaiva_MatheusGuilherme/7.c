/*
**	Crie um programa em c que implemente uma calculadora simples cujas operacoes sao soma subtracao 
**	divisao e multiplicacao. Para cada caractere digito digitado deve-se apertar enter
**
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x, y;
	char c = ' ';

	puts("Digite o valor de x:");
	scanf("%i",&x);
	getchar();
		

		puts("Digite a operacao:");
		scanf("%c",&c);

	while(c != '='){

		switch(c){
			case '+':
			puts("digite o segundo operando:");
			scanf("%d", &y);
			x = x + y;
			break;

			case '-':
			puts("digite o segundo operando:");
			scanf("%d", &y);
			x = x - y;
			break;

			case '*':
			puts("digite o segundo operando:");
			scanf("%d", &y);
			x = x * y;
			break;

			case '/':
			puts("digite o segundo operando:");
			scanf("%d", &y);
			x = x / y;
			break;

			default:
			puts ("Comando invalido!");

		}
		getchar();
		printf("Resposta: %d\n",x);
	}


}