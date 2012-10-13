/* Everaldo Gomes 13/10/2012
 *
 * Leia dois vetores de tamanho n, e calcule soma de seus elementos.
 * Exemplo:
 * Vetor1 - 3 4 5
 * Vetor2 - 6 7 8
 *
 * Soma - 9 11 13
 *
 */

#include <stdio.h>

#define MAX 10


int main(){
  int x[MAX], y[MAX], soma[MAX];
  int i, n;

  puts("Digite o tamanho dos vetores");
  scanf("%d", &n);

  puts("Digite os elementos do vetor x");
  for(i = 0; i < n ; i++)
    scanf("%d", &x[i]);

  puts("Digite os elementos do vetor y");
  for(i = 0; i < n; i++)
    scanf("%d", &y[i]);

  //calculo da soma dos vetores x e y

  for(i = 0; i < n; i++)
    soma[i] = x[i] + y[i];

  puts("O resultado é:");
  for(i = 0; i < n; i++)
    printf("%d ", soma[i]);
  puts("");

  return 0;
  
}
