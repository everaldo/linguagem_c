/* Everaldo Gomes - 11/10/2012
 *
 *  Leia uma sequência de números, terminada pela leitura do número 0 e, em seguida, imprima-os
 *
 *
 */


#define MAX 100

#include <stdio.h>


int main(){
  int i, tam = 0;
  int v[MAX];

  puts("Digite os elementos do array");

  while(scanf("%d", &v[tam]) != EOF &&  v[tam++] != 0);
  tam--;

  if (tam) puts("Imprimindo...");

  for(i = 0; i < tam; i++) printf("%d ", v[i]);
  puts("");

  return 0;
}
