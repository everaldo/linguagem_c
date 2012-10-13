/* Everaldo Gomes 13/10/2012
 *
 * Leia dois vetores de tamanho n. 
 * Verifique se eles são idênticos. 
 * Imprima "são idênticos" ou "não são idênticos"
 *
 */

#include <stdio.h>

#define MAX 10


int main(){
  int x[MAX], y[MAX];
  int i, n, identicos;

  puts("Digite o tamanho dos vetores");
  scanf("%d", &n);

  puts("Digite os elementos do vetor x");
  for(i = 0; i < n ; i++)
    scanf("%d", &x[i]);

  puts("Digite os elementos do vetor y");
  for(i = 0; i < n; i++)
    scanf("%d", &y[i]);

  identicos = 1; //assume que são identicos
  for(i = 0; i < n; i++){
    if (x[i] != y[i]){
      identicos = 0; //se algum elemento for diferente, não são identicos
      break; //sai do loop, não é mais necessário comparar
    }
  }

  if (identicos)   puts("Os vetores são idênticos");
  else             puts("Os vetores não são idênticos");

  return 0;
}
