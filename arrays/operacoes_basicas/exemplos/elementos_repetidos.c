#include <stdio.h>

#define MAX 100

int main(){
  int v[MAX], i, j, k, n = 0;
  int repetidos[MAX];
  int tam_repetidos = 0;

  puts("**Retorna os elementos repetidos em um vetor**");

  puts("Digite o tamanho do vetor");
  scanf("%d", &n);

  puts("Digite os elementos do vetor");
  for(i = 0; i < n; i++){
    scanf("%d", &v[i]);
  }


  for(i = 0; i < n - 1; i++){
    for(j = i + 1; j < n; j++){
      if (v[i] == v[j]){
        //verifica se o número já está no vetor de repetidos
        for(k = 0; k < tam_repetidos; k++){
          if (repetidos[k] == v[i]){
            break; //o número já estava no vetor de repetidos. Não insere e sai do loop
          }
        }
        if (k == tam_repetidos){ //significa que o número não estava no vetor de repetidos. Insere-o
          repetidos[tam_repetidos] = v[i];
          tam_repetidos++;
        }
        break; //verifica proximo número
      }
    }
  }

  puts("Imprimindo elementos repetidos");
  for(i = 0; i < tam_repetidos; i++){
    printf("%d ", repetidos[i]);
  }
  puts("");

  return 0;
}
