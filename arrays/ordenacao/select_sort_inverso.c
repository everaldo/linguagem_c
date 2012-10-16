#include <stdio.h>

#define MAX 100

int main(){
  int v[MAX];
  int i, j, temp, n = 0, pos_menor;

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


  puts("Ordenando pelo método da Seleção (Select Sort)");

  for(i = n - 1; i >= 1; i--){
    pos_menor = i;
    for(j = i - 1 ; j >= 0 ; j--){
      if (v[j] > v[pos_menor] ){
        pos_menor = j;
      }
    }
    if (pos_menor != i){
      temp = v[pos_menor];
      v[pos_menor]  = v[i];
      v[i] = temp;
    }
  }


  puts("Imprimindo o vetor após a ordenação...");
  for(i = 0; i < n; i++){
    printf("%d ", v[i]);
  }
  puts("");




  return 0;
}
