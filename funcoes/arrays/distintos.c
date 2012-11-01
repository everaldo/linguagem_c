#include "vetor.h"

void distintos(vetor v, vetor *distintos);

void distintos(vetor v, vetor *distintos){
  int i, j, repetido;

  distintos->tam = 0;

  for(i = 0; i < v.tam ; i++){
    repetido = 0;
    for(j = 0; j < distintos->tam; j++){
      if (v.elementos[i] == distintos->elementos[j]){
        repetido = 1;
        break;
      }
    }
    if (! repetido){
      distintos->elementos[distintos->tam] = v.elementos[i];
      (distintos->tam)++;
    }
  }
}
