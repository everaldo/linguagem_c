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
  char *primeiro, *ultimo;
  int palindromo = 1;

  primeiro = palavra;
  ultimo = palavra + strlen(palavra) - 1; //mesmo que &palavra[strlen(palavra) - 1]

  while( *primeiro == *ultimo && primeiro < ultimo ){
    primeiro++;
    ultimo--;

  }

  if (primeiro < ultimo) return 0; //não são palíndromos - terminou a comparação antes de "consumir" toda string
  else return 1; //são palíndromos

}

void imprime_resultado(char* palavra, int identicas){
  if(identicas){
    printf("A palavra %s é um palíndromo\n", palavra);
  }
  else{
    printf("A palavra %s não é um palíndromo\n", palavra);
  }
}

/*int palindromo(char *s, int primeiro, int ultimo){

  if (primeiro > ultimo) return 1;

  return s[primeiro] == s[ultimo] && palindromo(s, primeiro + 1, ultimo - 1);


}
*/



/*void eh_palindromo(char *s, char**r){
  char *primeiro, *ultimo;
  int palindromo = 1;

  primeiro = &s[0];
  ultimo = &s[strlen(s) - 1];

  while( *primeiro == *ultimo ){
    primeiro++;
    ultimo--;

  }

  if (primeiro < ultimo) palindromo = 0;

  if (palindromo) strcpy(*r, "sim");
  else strcpy(*r, "não");




}
*/

/*void  eh_palindromo(char *s, char **r){
  int palindromo = 1; //assume que é palindromo
  int i = 0;
  int ultimo = strlen(s) - 1;

  while(ultimo != -1 &&
      s[i] == s[ultimo]
      && i <= ultimo ){
    i++;
    ultimo--;
  }

  if (i < ultimo) palindromo = 0;
  if(ultimo == -1) palindromo = 1;


  if (palindromo) *r = strdup("sim");
  else *r = strdup("não");

}*/

