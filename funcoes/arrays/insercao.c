#include "vetor.h"


void insercao(vetor *v, int posicao, int x);


void insercao(vetor *v, int posicao, int x){
  int i;

  (v->tam)++;
  for(i = v->tam - 1;  i > posicao; i--){
    v->elementos[i] = v->elementos[i - 1];
  }
  v->elementos[i] = x;

}
