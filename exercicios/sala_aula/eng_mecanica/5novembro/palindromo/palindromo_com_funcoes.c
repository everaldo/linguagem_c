/* Everaldo Gomes - 05/11/2012
 *
 * Programa verifica se uma string é palíndromo
 *
 *
 *  Versão que utiliza funções
 *
 */

#include <stdio.h>
#include <string.h>

#define MAX 100

void le_string(char* palavra); //Essa função lê a string
int palindromo(char* palavra); //Verifica se a palavra é palíndromo
void inverso(char* palavra, char* inv); //Produz o inverso da palavra e armazena em inv

int main(void){
  char palavra[MAX + 1];
  int identicas;
  palavra[0] = '\0';

  le_string(palavra);

  identicas = palindromo(palavra);

  imprime_resultado(palavra, identicas);

  return 0;
}

void le_string(char* palavra){
  puts("Digite uma palavra para verificar se ela é um palíndromo");
  scanf("%s", palavra);
}

void inverso(char* palavra, char* inv){
  int i, tam;

  tam = strlen(palavra);
  for(i = 0; i < tam; i++){ //copia o inverso da palavra em inv
    inv[tam - 1 - i] = palavra[i];
  }
  inv[tam] = '\0'; //terminador de string
}


int palindromo(char* palavra){
  char inv[MAX + 1];

  inverso(palavra, inv); //produz o inverso da palavra e armazena em inv

  if(! strcmp(palavra, inv)) //se a palavra é igual ao seu inverso, então é palíndromo
    return 1;
  else
    return 0; //senão, não é palíndromo

}

imprime_resultado(char* palavra, int identicas){
  if(identicas){
    printf("A palavra %s é um palíndromo\n", palavra);
  }
  else{
    printf("A palavra %s não é um palíndromo\n", palavra);
  }
}

