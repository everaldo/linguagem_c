/* Everaldo Gomes - 05/11/2012
 *
 * Programa verifica se uma string é palíndromo
 *
 *
 *  Versão que não utiliza funções
 *
 */

#include <stdio.h>
#include <string.h>

#define MAX 100


int main(void){
  char palavra[MAX + 1], inverso[MAX + 1];
  int i, tam, identicas;
  palavra[0] = '\0';
  inverso[0] = '\0';

  puts("Digite uma palavra para verificar se ela é um palíndromo");
  scanf("%s", palavra);

  tam = strlen(palavra);
  for(i = 0; i < tam; i++){
    inverso[tam - 1 - i] = palavra[i];
  }
  inverso[tam] = '\0';


  if(strcmp(palavra, inverso) == 0) { //a função strcmp retorna 0 quando as strings são iguais. 
                                      //Podia ter usado ! strcmp(palavra, inverso) - operador NOT
    identicas = 1;
  }
  else{
    identicas = 0;
  }


  if(identicas){
    printf("A palavra %s é um palíndromo\n", palavra);
  }
  else{
    printf("A palavra %s não é um palíndromo\n", palavra);
  }

  return 0;
}





