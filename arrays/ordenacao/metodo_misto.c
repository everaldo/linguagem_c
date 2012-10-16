/* Everaldo Gomes - 15/10/2012

   Por engano apresentei este algoritmo como o Bubble Sort.
   Na verdade essa ordenação é uma mistura de Bubble Sort com Select Sort.


*/
#include <stdio.h>

#define MAX 100

int main(){
  int v[MAX];
  int i, j, temp, n = 0;

  puts("Digite o tamanho do vetor");
  scanf("%d", &n);

  puts("Digite os elementos do vetor");
  for(i = 0; i < n; i++){
    scanf("%d", &v[i]);
  }

  puts("Imprimindo o vetor antes da ordenação...");
  for(i = 0; i < n; i++){
    printf("%d ", v[i]);
  }
  puts("");


  puts("Ordenando o vetor pelo método misto (mistura de Bubble Sort com Select Sort)");
  for(i = 0; i <= (n - 2); i++){
    for(j = 0 ; j <= n - 2 - i  ; j++){
      if (v[j] > v[j + 1]){
        temp = v[j + 1];
        v[j + 1]  = v[j];
        v[j] = temp;
      }
    }
  }

  puts("Imprimindo o vetor após a ordenação...");
  for(i = 0; i < n; i++){
    printf("%d ", v[i]);
  }
  puts("");


  return 0;

}
