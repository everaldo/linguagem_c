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

  for(i = n - 1; i >= 1; i--){
    for(j = n - 1 ; j >= n  - i  ; j--){
      printf("Bolha %d %d\n", j,j - 1);
      if (v[j] < v[j - 1]){
        temp = v[j - 1];
        v[j - 1]  = v[j];
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
