#include <stdio.h>

#define MAX 100

int main(){
  int v[MAX], i, j, n = 0;
  int distintos[MAX];
  int tam_distintos = 0;
  int repetido;

  puts("**Retorna os elementos distintos em um vetor**");

  puts("Digite o tamanho do vetor");
  scanf("%d", &n);

  puts("Digite os elementos do vetor");
  for(i = 0; i < n; i++){
    scanf("%d", &v[i]);
  }


  for(i = 0; i < n ; i++){
    repetido = 0;
    for(j = 0; j < tam_distintos; j++){
      if (v[i] == distintos[j]){
        repetido = 1;
        break;
      }
    }
    if (! repetido){
      distintos[tam_distintos] = v[i];
      tam_distintos++;
    }
  }

  puts("Imprimindo elementos distintos");
  for(i = 0; i < tam_distintos; i++){
    printf("%d ", distintos[i]);
  }
  puts("");

  return 0;
}
