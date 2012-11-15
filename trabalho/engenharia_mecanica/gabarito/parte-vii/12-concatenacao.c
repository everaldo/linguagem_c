/*

Leia dois vetores de tamanho n. Construa um terceiro vetor que é a concatenação dos dois primeiros.



 *  *
 * Exemplo:
 *
 * n = 3
 * Vetor1: 1 2 3 
 *
 * Vetor2: 4 5 6
 *
 * Concatenação: 1 2 3 4 5 6
 */

#include <stdio.h>

#define MAX 100
#define MAX_CONCATENADO MAX * 2 //O tamanho do vetor concatenado deve ser suficiente para conter os outros dois vetores


int main(){
  int x[MAX], y[MAX], z[MAX_CONCATENADO];
  int i, n, tam_concatenado;

  puts("Digite o tamanho dos vetores");
  scanf("%d", &n);
  tam_concatenado = 2 * n;

  puts("Digite os elementos do vetor x");
  for(i = 0; i < n ; i++)
    scanf("%d", &x[i]);

  puts("Digite os elementos do vetor y");
  for(i = 0; i < n; i++)
    scanf("%d", &y[i]);

  for(i = 0; i < n; i++){
    z[i] = x[i];
  }

  for(i = 0; i < n; i++){
    z[i + n] = y[i];
  }

  /*
   *     Os dois fors acima poderiam ser reescritos em um só
   *
   *         for(i = 0; i < n; i++){
   *               z[i] = x[i];
   *                     z[i + n] = y[i];
   *                         }
   *
   *                         */



  puts("Resultado da operação de concatenação...");
  for(i = 0; i < tam_concatenado; i++){
    printf("%d ", z[i]);
  }
  puts("");


  return 0;
}
