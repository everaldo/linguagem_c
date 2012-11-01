#include "vetor.h"


void repetidos(vetor v, vetor *repetidos);

void repetidos(vetor v, vetor *repetidos){
  int i, j, k;

  repetidos->tam = 0;

  for(i = 0; i < v.tam - 1; i++){
    for(j = i + 1; j < v.tam; j++){
      if (v.elementos[i] == v.elementos[j]){
        //verifica se o número já está no vetor de repetidos
        for(k = 0; k < repetidos->tam; k++){
          if (repetidos->elementos[k] == v.elementos[i]){
            break; //o número já estava no vetor de repetidos. Não insere e sai do loop
          }
        }
        if (k == repetidos->tam){ //significa que o número não estava no vetor de repetidos. Insere-o
          repetidos->elementos[repetidos->tam] = v.elementos[i];
          (repetidos->tam)++;
        }
        break; //verifica proximo número
      }
    }
  }
}
