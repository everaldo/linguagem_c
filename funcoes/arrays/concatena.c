#include "vetor.h"

void concatena(vetor a, vetor b, vetor *c);

void concatena(vetor a, vetor b, vetor *c){
  int i;

  c->tam = a.tam + b.tam;

  //copia primeiro array
  for(i = 0; i < a.tam ; i++){
    c->elementos[i] = a.elementos[i];
  }

  //copia segundo array
  for(i = 0; i < b.tam; i++){
    c->elementos[a.tam + i] = b.elementos[i];
  }
}
