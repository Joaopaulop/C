#include<stdio.h>
#include<stdlib.h>

int main(){
   int n, m, num, c,d,u;

   printf("digite o numero");
   scanf("%d", &num);

   m=num/1000;
   num=num % 1000;
   c=num/100;
   num=num%100;
   d=num/10;
   u=num%10;
                 //imprime centena
   switch(c){
          case 1: printf("Cento e "); break;
          case 2: printf("Duzentos "); break;
          case 3: printf("Trezentos "); break;
          case 4: printf("Quatrocentos "); break;
          case 5: printf("Quinhentos "); break;
          case 6: printf("Seiscentos "); break;
          case 7: printf("Setecentos "); break;
          case 8: printf("Oitocentos "); break;
          case 9: printf("Novecentos "); break;
          }
             //imprime dezena
   switch(d){
          case 2: printf("vinte "); break;
          case 3: printf("trinta "); break;
          case 4: printf("quarenta "); break;
          case 5: printf("cinquenta "); break;
          case 6: printf("sessenta "); break;
          case 7: printf("setenta "); break;
          case 8: printf("oitenta "); break;
          case 9: printf("noventa "); break;
          }
            //imprime a dezena
/*    switch(num){
          case 0: printf("dez "); break;
          case 1: printf("onze "); break;
          case 2: printf("doze "); break;
          case 3: printf("treze "); break;
          case 4: printf("quatorze "); break;
          case 5: printf("quinze "); break;
          case 6: printf("dezesseis "); break;
          case 7: printf("dezessete "); break;
          case 8: printf("dezoito "); break;
          case 9: printf("dezenove "); break;
          }*/
            // imprime a unidade
   switch(u){
          case 0: printf("zero"); break;
          case 1: printf("um"); break;
          case 2: printf("dois"); break;
          case 3: printf("três"); break;
          case 4: printf("quatro"); break;
          case 5: printf("cinco"); break;
          case 6: printf("seis"); break;
          case 7: printf("sete"); break;
          case 8: printf("oito"); break;
          case 9: printf("nove"); break;
          }

    if(num>1000){
                printf("Mil");
                n= n%1000;
                printf(" e ");
                }

                //imprime a centena
   if(num>100){
               m = n/100;
               n = n%100;
               printf(" e ");
               }

               //imprime a dezena
   if(num>10){
              m = n/10;
              n = n%10;
              printf(" e ");
              }

}