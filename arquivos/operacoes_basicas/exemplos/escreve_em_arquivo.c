#include <stdio.h>
#include <string.h>

#define TAM 255

int main(void){
  FILE* fp;
  char buffer[255];

  puts("Exemplo de escrita em arquivo");
  puts("Digite um texto, ele será salvo no arquivo escreve_em_arquivo.txt");
  puts("Quando quiser terminar, digite fim (em uma nova linha) e aperte enter");


  fp = fopen("escreve_em_arquivo.txt", "w");

  if (fp == NULL){
    puts("Ocorreu um erro ao tentar abrir o arquivo");
    return 1;
  }

  buffer[0] = '\0' ;
  while( strcmp(buffer, "fim\n")) {
    if (strlen(buffer)){
      fputs(buffer, fp);
    }
    fgets(buffer, TAM, stdin);
  }

  fclose(fp);

  return 0;
}
