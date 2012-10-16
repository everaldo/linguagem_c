#include <stdio.h>

#define MAX 100

int main(){
  int v[MAX], i, n = 0;
  int ordenado;

  puts("**Verifica se um vetor esta ordenado**");

  puts("Digite o tamanho do vetor");
  scanf("%d", &n);

  puts("Digite os elementos do vetor");
  for(i = 0; i < n; i++){
    scanf("%d", &v[i]);
  }

  ordenado = 1;
  for(i = 0; i < n - 1; i++){
    if ( v[i] > v[i + 1]){
      ordenado = 0;
      break;
    }
  }

  if (ordenado) puts("O vetor esta ordenado");
  else puts("O vetor nao esta ordenado");


  for(i = 0; i < n; i++){
    printf("%d ", v[i]);
  }
  puts("");

  return 0;
}
