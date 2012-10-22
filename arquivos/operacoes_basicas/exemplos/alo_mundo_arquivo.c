#include <stdio.h>


#define TAM 255

int main(void){
  FILE* fp;
  char buffer[255];
  buffer[0] = '\0';

  fp = fopen("alo_mundo.txt", "r");

  if (fp == NULL){
    puts("Ocorreu um erro ao tentar abrir o arquivo");
    return 1;
  }

  fgets(buffer, TAM, fp);

  printf("%s", buffer);

  fclose(fp);

  return 0;
}
