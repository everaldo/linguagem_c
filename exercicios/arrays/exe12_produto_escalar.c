/* Everaldo Gomes 13/10/2012
 *
 * Calcule o produto escalar entre dois vetores de números reais de tamanho n
 *
 * Baseado em:
 *
 * http://www.ime.usp.br/~macmulti/exercicios/vetores/4C.html
 */

#include <stdio.h>

#define MAX 10


int main(){
  int x[MAX], y[MAX], soma[MAX];
  int i, n, produto_escalar;

  produto_escalar = 0;
  puts("Digite o tamanho dos vetores");
  scanf("%d", &n);

  puts("Digite os componentes do vetor x");
  for(i = 0; i < n ; i++)
    scanf("%d", &x[i]);

  puts("Digite os componentes do vetor y");
  for(i = 0; i < n; i++)
    scanf("%d", &y[i]);

  //calculo do produto escalar

  for(i = 0; i < n; i++)
    produto_escalar = produto_escalar + x[i] * y[i];

  printf("O produto escalar é: %d\n", produto_escalar);

  return 0;
  
}
