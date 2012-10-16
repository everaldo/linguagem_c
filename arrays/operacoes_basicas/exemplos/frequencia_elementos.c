#include <stdio.h>

#define MAX 100

int main(){
  int v[MAX], i, j, n = 0;
  int elementos[MAX];
  int frequencias[MAX];
  int tam_elementos = 0;
  int repetido;

  puts("**Retorna a frequencia dos elementos em um vetor**");

  puts("Digite o tamanho do vetor");
  scanf("%d", &n);

  puts("Digite os elementos do vetor");
  for(i = 0; i < n; i++){
    scanf("%d", &v[i]);
  }



  for(i = 0; i < n ; i++){
    repetido = 0;
    for(j = 0; j < tam_elementos; j++){
      if (v[i] == elementos[j]){
        frequencias[j]++;
        repetido = 1;
        break;
      }
    }
    if (! repetido){
      elementos[tam_elementos] = v[i];
      frequencias[tam_elementos] = 1;
      tam_elementos++;
    }
  }

  puts("Imprimindo frequencia dos elementos");
  printf("Elemento\t\tFrequencia\n");
  for(i = 0; i < tam_elementos; i++){
    printf("%d\t%d\n", elementos[i], frequencias[i]);
  }
  puts("");

  return 0;
}
