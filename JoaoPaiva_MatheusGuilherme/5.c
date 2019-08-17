#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int total, count;
    float valores, soma=0.0;

    printf("\n Digite a quantidade de números para fazer a média: ");
    scanf("%d",&total);

    for(count=1; count<=total; count++){

            printf("digite os números que você quer que tenham as médias:");
            scanf("%f",&valores);

    soma = soma + valores;
    }
    printf("Média artimética dos números: %.2f", soma/total);
}