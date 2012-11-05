/* Everaldo Gomes - 05/11/2012
 *
 * Programa verifica se uma string é palíndromo
 *
 *
 * Utiliza Recursividade
 *
 */

#include <stdio.h>
#include <string.h>

#define MAX 100

void le_string(char* palavra); //Essa função lê a string
int palindromo(char* palavra, int inicio, int fim);
void imprime_resultado(char* palavra, int identicas);


int main(void){
  char palavra[MAX + 1];
  int identicas;
  palavra[0] = '\0';

  le_string(palavra);

  identicas = palindromo(palavra, 0, strlen(palavra) - 1);

  imprime_resultado(palavra, identicas);

  return 0;

}

void le_string(char* palavra){
  puts("Digite uma palavra para verificar se ela é um palíndromo");
  scanf("%s", palavra);
}



int palindromo(char* palavra, int inicio, int fim){
  if (inicio >= fim) return 1;

  return palavra[inicio] == palavra[fim] && palindromo(palavra, inicio + 1, fim - 1);


}

void imprime_resultado(char* palavra, int identicas){
  if(identicas){
    printf("A palavra %s é um palíndromo\n", palavra);
  }
  else{
    printf("A palavra %s não é um palíndromo\n", palavra);
  } 
}
