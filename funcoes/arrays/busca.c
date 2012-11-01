#include "vetor.h"

int busca(vetor v, int x);

int busca(vetor v, int x){
  int i;

  for(i = 0; i < v.tam; i++){
    if (v.elementos[i] == x){
      return i; //termina a busca e sai da função: posição de x foi encontrada
    }
  }
  return v.tam; //x não foi encontrado. Retorna n (lembrando que a última posição válida é n - 1)

}





