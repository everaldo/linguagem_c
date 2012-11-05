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


  //comparação manual - podia usar strcmp, mas não quis
  identicas = 1; //assume que as duas palavras são idênticas

  for(i = 0; i < tam; i++){
    if(palavra[i] != inverso[i]){
      identicas = 0;
      break; //sai do for - não precisa mais comparar. Não são palíndromos
    }
  }

  if(identicas){
    printf("A palavra %s é um palíndromo\n", palavra);
  }
  else{
    printf("A palavra %s não é um palíndromo\n", palavra);
  }

  return 0;
}





