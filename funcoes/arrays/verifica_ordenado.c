#include "vetor.h"


int verifica_ordenado(vetor v){
  int i;
  int ordenado = 1;
  
  for(i = 0; i < v.tam - 1; i++){
    if ( v.elementos[i] > v.elementos[i + 1]){
      ordenado = 0;
      break;
    }
  }
  return ordenado;
}
