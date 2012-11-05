/* Everaldo Gomes - 05/11/2012
 *
 * Programa verifica se uma string é palíndromo
 *
 *
 */

#include <stdio.h>
#include <string.h>

#define MAX 100

void le_string(char* palavra); //Essa função lê a string
int palindromo(char* palavra); //Verifica se a palavra é palíndromo
void imprime_resultado(char* palavra, int identicas);


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



int palindromo(char* palavra){
  int palindromo = 1; //assume que é palindromo
  int inicio = 0;
  int fim = strlen(palavra) - 1;

  while(fim != -1 && palavra[inicio] == palavra[fim] && inicio <= fim ){
    inicio++;
    fim--;
  }

  if (inicio < fim) return 0; //não são palíndromos - não "consumiu" toda string
  else  return 1;

}

void imprime_resultado(char* palavra, int identicas){
  if(identicas){
    printf("A palavra %s é um palíndromo\n", palavra);
  }
  else{
    printf("A palavra %s não é um palíndromo\n", palavra);
  }
}

