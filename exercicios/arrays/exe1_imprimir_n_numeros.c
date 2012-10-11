/* Everaldo Gomes - 11/10/2012
 *
 *  Leia n números e imprima-os
 *
 *
 */


#define MAX 100

#include <stdio.h>


int main(){
  int i, n;
  int v[MAX];

  puts("Digite o tamanho do array");
  scanf("%d", &n);
  puts("Digite os elementos do array");

  for(i = 0; i < n; i++) scanf("%d", &v[i]);

  puts("Imprimindo...");

  for(i = 0; i < n; i++) printf("%d ", v[i]);
  puts("");

  return 0;
}
