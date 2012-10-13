/* Everaldo Gomes - 11/10/2012
 *
 *  Leia uma sequência de números, terminada pela leitura do número 0 e, em seguida, imprima apenas os valores positivos.
 *
 *
 */
#include <stdio.h>

#define MAX 100

int main(){
  int i, tam = 0;
  int v[MAX];

  puts("Digite os elementos do array");

  scanf("%d", &v[tam]);
  while (v[tam] != 0){
    tam++;
    scanf("%d", &v[tam]);
  }


  if (tam) puts("Imprimindo...");

  for(i = 0; i < tam; i++)
    if (v[i] > 0)
      printf("%d ", v[i]);
  puts("");

  return 0;
}
