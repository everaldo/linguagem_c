/* Everaldo Gomes - 05/11/2012
 *
 * Programa verifica se uma string é palíndromo
 *
 *
 */

#include <stdio.h>
#include <string.h>

#define MAX 100

void  le_string(char **s);
void  eh_palindromo(char *s, char **r);
void  imprime_resultado(char *r);


int main(void){
  char palavra[MAX + 1], *r, *p;
  palavra[0] = '\0';
  p = &palavra[0];
  le_string(&p);
  eh_palindromo(p,&r);
  imprime_resultado(r);
  return 0;
}

void  le_string(char **s){
  puts("Digite uma palavra para verificar se é palíndromo");
  scanf("%s", *s);

}

void eh_palindromo(char *s, char**r){
  char *primeiro, *ultimo;
  int palindromo = 1;

  primeiro = &s[0];
  ultimo = &s[strlen(s) - 1];

  while( *primeiro == *ultimo ){
    primeiro++;
    ultimo--;

  }

  if (primeiro < ultimo) palindromo = 0;

  if (palindromo) *r = strdup("sim");
  else *r = strdup("não");




}


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

void  imprime_resultado(char *r){
  printf("%s\n", r);
}




