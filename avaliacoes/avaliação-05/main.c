#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 50

//Este codigo cria um programa que recebe dados 
//via teclado e grava em um arquivo, dando um 
//conceito de persistencia.

int main() {
  char text[TAMANHO];
  FILE* fp;

  printf("Digite o texto que deseja gravar num arquivo? \n");
  fgets(text, TAMANHO, stdin);

  if((fp = fopen("arquivo.txt", "w"))==NULL){
  printf("O arquivo não pode ser aberto.\n");
  exit(1);
    
  }


  fputs(text, fp);
  fclose(fp);
  
  
  return 0;
}