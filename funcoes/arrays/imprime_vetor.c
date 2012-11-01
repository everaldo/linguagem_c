#include "vetor.h"


void imprime_vetor(vetor v);


void imprime_vetor(vetor v){
  int i;

  for(i = 0; i < v.tam; i++){
    printf("%d ", v.elementos[i]);
  }
  puts("");
}
