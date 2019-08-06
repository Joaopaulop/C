#include <stdio.h>

int main(){
	
	double t, f, d, ac, m, a, pi, pf;

	puts("Digite o ponto inicial:");
	scanf("%lf",&pi);
	puts("Digite o ponto final:");
	scanf("%lf",&pf);

	d = pf - pi;

	puts("Digite a massa do objeto:");
	scanf("%lf",&m);
	puts("Digite a aceleracao do objeto:");
	scanf("%lf",&a);

	f = m * a;

	printf("\nO trabalho é %.3lf", t = d * f);
}