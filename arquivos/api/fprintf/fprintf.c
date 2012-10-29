/* Everaldo Gomes - 29/10/2012

   A função fprintf() é muito parecida com a função printf().
   Na verdade, printf() é um caso específico de fprintf().

   printf(<string de formato> , <lista de variáveis>)

   é o mesmo que

   fprintf(stdout, <string de formato>, <lista de variáveis>)


   A diferença é que com fprintf você pode escrever em inúmeros arquivos,
   não apenas na saída padrão



*/


#include <stdio.h>


int main(void){
  char cidade[50];
  float latitude, longitude; //a palavra long é reservada na linguagem C, então não é possível criar uma variável com o nome long
                                //uma alternativa seria usar y para latitude e x para longitude

  FILE* arquivo_coordenadas;

  arquivo_coordenadas = fopen("coordenadas_cidades.txt", "a+"); //a+ cria o arquivo se ele não existe

  if (arquivo_coordenadas == NULL){
    puts("Erro ao abrir o arquivo");
    return 1;
  }


  puts("\n\n\nEste programa lê o nome de uma cidade e suas coordenadas e salva num arquivo chamado coordenadas_cidades.txt . Ele exemplifica "
      "o uso da função fprintf().\nO programa termina ao digitar fim, 0 0 como nome da cidade e coordenadas"
      "IMPORTANTE: Separe o nome da cidade das coordenadas com o caracter vírgula (,)\n"
      "Exemplo: Tóquio, 35.713066 139.695389\n\n\n");

  scanf("%[^,], %f %f", cidade, &latitude, &longitude);
  while( strcmp(cidade, "fim")){

    fprintf(arquivo_coordenadas, "%s: %f\t%f\n", cidade, latitude, longitude);

    printf("Digite o nome da próxima cidade ou fim como nome da cidade para terminar\n");
    while( getchar() != '\n'); //limpa buffer
    scanf("%[^,], %f %f", cidade, &latitude, &longitude);
  }


  fclose(arquivo_coordenadas);
}
