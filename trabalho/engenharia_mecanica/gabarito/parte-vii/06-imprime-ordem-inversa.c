/* Everaldo Gomes - 11/10/2012
 *  *
 *   *  Leia n números e imprima-os na ordem inversa
 *    *
 *     *
 *      */
#include <stdio.h>

#define MAX 30

int main(){
  int i, n;
  int v[MAX];

  n = 30;
  puts("Digite os elementos do array");

  for(i = 0; i < n; i++) scanf("%d", &v[i]);

  puts("Imprimindo...");

  for(i = n - 1; i >= 0; i--) printf("%d ", v[i]);
  puts("");
          return 0;
}
