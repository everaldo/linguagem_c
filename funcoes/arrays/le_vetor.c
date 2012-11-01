#include "vetor.h"

void le_vetor(vetor *v);


void le_vetor(vetor *v){
  int i;

  puts("Digite o tamanho do vetor");
  scanf("%d", &(v->n));

  puts("Digite os elementos do vetor");
  for(i = 0; i < v->n; i++){
    scanf("%d", &(v->elementos[i]));
  }
}
