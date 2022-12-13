#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 10000

//Este codigo cria um programa que armazena os dados na memória
//(usando um array) 
//depois grava os dados em um arquivo

int e_primo(int numero) {
  int i;
  int raiz = sqrt(numero);
  if(numero < 2) {
    return 0;
    }else if(numero == 2) {
    return 1;
      } else if(numero % 2 == 0) {
      return 0;
    }
  for(i = 3 ; i <= raiz ; i += 2){
    if(numero % i == 0){
      return 0;
    }
    }
  return 1;
    
  }
  

int main() {
  int i;
  int cont = 0;
  int primo [ TAM ];
  FILE* fp;

  for(i = 0 ; cont <=  TAM ; i++){
    if(e_primo(i)){
      primo[ cont ] = i;
      cont++;
    }
    
  }

  if((fp = fopen("arquivo.txt", "w"))==NULL){
    printf("O arquivo não pode ser aberto.\n");
    exit(1);
  }

  for( i = 0 ; i < TAM ; i++ ){
    fprintf(fp, "%d\n", primo[i]);
  }

  fclose(fp);
 
  return 0;
}