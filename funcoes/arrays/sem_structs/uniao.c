#include <stdio.h>

#define MAX 100

typedef struct {
  int elementos[MAX];
  int tam;
} vetor;


void le_vetor(vetor* v);
void uniao(vetor x, vetor y, vetor* r);
void concatenacao(vetor x, vetor y, vetor* r);
void distintos(vetor x, vetor* r);
void imprime_vetor(vetor x);


int main(){
  vetor x, y, r;

  le_vetor(&x);
  le_vetor(&y);
  uniao(x, y, &r);
  imprime_vetor(r);
  return 0;

}


void le_vetor(vetor* v){
  int i;
  
  puts("Digite o tamanho do vetor");
  scanf("%d", &v->tam);

  for(i = 0; i < v->tam; i++){
    scanf("%d", &v->elementos[i]);
  }
}


void uniao(vetor x, vetor y, vetor* r){
  vetor aux;

  concatenacao(x, y, &aux);
  distintos(aux, r);


}

void concatenacao(vetor x, vetor y, vetor* r){
  int i;

  r->tam = x.tam + y.tam;

  //copia primeiro array
  for(i = 0; i < x.tam; i++){
    r->elementos[i] = x.elementos[i];
  }

  //copia segundo array
  for(i = 0; i < y.tam; i++){
    r->elementos[x.tam + i] = y.elementos[i];
  }


}

void distintos(vetor x, vetor* r){
  int i, j, repetido;

  r->tam = 0;

  for(i = 0; i < x.tam ; i++){
    repetido = 0;
    for(j = 0; j < r->tam; j++){
      if (x.elementos[i] ==  r->elementos[j]){
        repetido = 1;
        break;
      }
    }
    if (! repetido){
      r->elementos[r->tam] = x.elementos[i];
      (r->tam)++;;
    }
  }



}


void imprime_vetor(vetor x){
  int i;
  
  for(i = 0; i < x.tam; i++){
    printf("%d ", x.elementos[i]);
  }
  puts("");
}




