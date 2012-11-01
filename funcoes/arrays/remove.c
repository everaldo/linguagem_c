#include "vetor.h"


void remove(vetor *v, int posicao);


void remove(vetor *v, int posicao){
  int i;

  for(i = posicao; i < v->tam - 1; i++){
    v->elementos[i] = v->elementos[i + 1];
  }
  (v->tam)--; //mesmo que v->tam = v->tam - 1;

}
