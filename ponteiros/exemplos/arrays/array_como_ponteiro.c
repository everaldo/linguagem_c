#include <stdio.h>

#define MAX 100

int main(void){
  int v[MAX], i, n;
  int* p;

  puts("Digite o tamanho do vetor");
  scanf("%d", &n);

  p = v; //p é um ponteiro. Um vetor também é um ponteiro, então v é um ponteiro. p aponta para o início do vetor
  puts("Digite os elementos do vetor");
  for(i = 0; i < n; i++){
    scanf("%d", p + i); //mesma coisa que &p[i] ou &v[i]
  }

  puts("Imprimindo o vetor");
  for(i = 0; i < n; i++){
    printf("%d ", *(p + i)); // *(p + i) é a mesma coisa que p[i] ou v[i]
  }
  puts("");



  return 0;
}

/* Observações:
 *
 *  utilizamos o ponteiro p para demonstrar que v também é um ponteiro
 *
 *  As seguintes operações são equivalentes:
 *
 *
 *  v     <--->   &v[0]
 *  v[i]  <--->  *(v + i)
 *  &v[i] <--->  v + i
 *
 *
 */

