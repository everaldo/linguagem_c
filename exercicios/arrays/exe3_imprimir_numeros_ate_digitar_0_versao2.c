/* Everaldo Gomes - 11/10/2012
 *
 *  Leia uma sequência de números, terminada pela leitura do número 0 e, em seguida, imprima-os
 *
 *
 */
#include <stdio.h>

#define MAX 100

int main(){
  int i, tam = 0;
  int v[MAX];

  puts("Digite os elementos do array");

  for(scanf("%d", &v[tam]) ; v[tam++] != 0; scanf("%d", &v[tam]));
  tam--;


  if (tam) puts("Imprimindo...");

  for(i = 0; i < tam; i++) printf("%d ", v[i]);
  puts("");

  return 0;
}
