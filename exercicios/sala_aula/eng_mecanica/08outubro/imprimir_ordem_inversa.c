/* Everaldo Gomes - 08/10/2012
 * 
 *  Le um vetor com 10 posicoes e imprime na ordem inversa
 *
 *
 * */


#include <stdio.h>

#define TAM 100

int main(){
  int v[TAM], n, i;
  //puts("Digite o tamanho do vetor");
  n = 10;

  for(i = 0; i < n; i++) scanf("%d", &v[i]);
  //leitura dos numeros
  
  for(i = n - 1; i >= 0; i--) printf("%d ", v[i]);
  puts(""); //nova linha





  return 0;
}

