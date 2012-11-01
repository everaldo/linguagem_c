#include "vetor.h"


void frequencia_elementos(vetor v, vetor *elementos, vetor *frequencias);


void frequencia_elementos(vetor v, vetor *elementos, vetor *frequencias){
  
  int i, j, repetido;

  elementos->tam = 0;
  frequencias->tam = 0;

  for(i = 0; i < v.tam ; i++){
    repetido = 0;
    for(j = 0; j < elementos->tam; j++){
      if (v.elementos[i] == elementos->elementos[j]){
        (frequencias->elementos[j])++;
        repetido = 1;
        break;
      }
    }
    if (! repetido){
      elementos->elementos[elementos->tam] = v.elementos[i];
      frequencias->elementos[frequencias->tam] = 1;
      (elementos->tam)++;
      (frequencias->tam)++;
    }
  }
}
