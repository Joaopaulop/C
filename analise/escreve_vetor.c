#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  FILE *pont_arq; // cria variável ponteiro para o arquivo
  int v[10000000000]; // variável do tipo string
  int i;
  //abrindo o arquivo com tipo de abertura w
  pont_arq = fopen("vetor.txt", "w");
  
  //testando se o arquivo foi realmente criado
  if(pont_arq == NULL)
  {
  printf("Erro na abertura do arquivo!");
  return 1;
  }
  
  //usando fclose para fechar o arquivo
  fclose(pont_arq);
  
  printf("Dados gravados com sucesso!");
  
  getch();
  return(0);
}