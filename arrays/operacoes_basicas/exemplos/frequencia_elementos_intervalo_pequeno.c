/*
 *
 * Assume-se que todos os elementos do vetor pertencem à um intervalo numérico "pequeno"
 * e previamente conhecido. Exemplo: 0..10
 *
 *
 */


#include <stdio.h>

#define MAX 100

int main(){
  int v[MAX], i, j, n = 0;
  int frequencias[MAX];
  int tam_frequencias = 0;
  int repetido;
  int maior = 0;


  puts("**Retorna a frequencia dos elementos em um vetor**");

  puts("Digite o tamanho do vetor");
  scanf("%d", &n);

  puts("Digite os elementos do vetor");
  for(i = 0; i < n; i++){
    scanf("%d", &v[i]);
    if (v[i] > maior){
      maior = v[i];
    }
  }
  tam_frequencias = maior + 1;

  for(i = 0; i < tam_frequencias; i++){
    frequencias[i] = 0;
  }

  for(i = 0; i < n ; i++){
    frequencias[v[i]]++;
  }

  puts("Imprimindo frequencia dos elementos");
  printf("Elemento\t\tFrequencia\n");
  for(i = 0; i < tam_frequencias; i++){
    if(frequencias[i]) printf("%d\t%d\n", i, frequencias[i]);
  }
  puts("");

  return 0;
}
