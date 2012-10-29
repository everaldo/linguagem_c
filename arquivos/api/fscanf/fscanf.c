/* Everaldo Gomes - 29/10/2012

   A função fscanf() é muito parecida com a função scanf().
   Na verdade, scanf() é um caso específico de fscanf().

   scanf(<string de formato> , <lista de variáveis>)

   é o mesmo que

   fscanf(stdin, <string de formato>, <lista de variáveis>)


   A diferença é que com fscanf você pode ler de inúmeros arquivos



*/


#include <stdio.h>


int main(void){
  char cidade[50];
  float latitude, longitude; //a palavra long é reservada na linguagem C, então não é possível criar uma variável com o nome long
                                //uma alternativa seria usar y para latitude e x para longitude

  FILE* arquivo_coordenadas;

  arquivo_coordenadas = fopen("coordenadas_cidades.txt", "r");

  if (arquivo_coordenadas == NULL){
    puts("Erro ao abrir o arquivo");
    return 1;
  }


  puts("\n\n\nEste programa lê um arquivo que contém o nome e as coordenadas de várias cidades do mundo. Ele exemplifica "
      "o uso da função fscanf()\n\n\n\n");

  while(! feof(arquivo_coordenadas)){
    fscanf(arquivo_coordenadas, "%[^:]: %f %f\n",cidade, &latitude, &longitude);

    printf("A cidade de %s está na  coordenada: (%f, %f)\n", cidade, latitude, longitude);
  }


  fclose(arquivo_coordenadas);
}
