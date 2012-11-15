/*
Leia dois vetores de números inteiros de tamanho n. 
Construa um terceiro vetor que é a união dos dois primeiros. 
Dica: a união pode ser feita da seguinte forma: concatene os dois vetores. 
Depois, retire os elementos repetidos.
*/

#include <stdio.h>

#define MAX 100

void le_vetor(int* x, int *n);
void uniao(int *x, int n, int *y, int m, int *u, int *tam_uniao);
void concatenacao(int *x, int n, int *y, int m, int *cat, int *tam_cat);
void distintos(int *x, int n, int *d, int *tam_distintos);
void imprime_vetor(int *x, int n);


int main(){
  int x[MAX], n = 0,  y[MAX], m = 0,  u[MAX], tam_uniao = 0;

  le_vetor(x, &n);
  le_vetor(y, &m);
  uniao(x, n, y, m, u, &tam_uniao);
  imprime_vetor(u, tam_uniao);
  return 0;

}


void le_vetor(int* x, int *n){
  int i;

  puts("Digite o tamanho do vetor");
  scanf("%d", n);

  puts("Digite os elementos do vetor");
  for(i = 0; i < *n; i++){
    scanf("%d", &x[i]);
  }
}


void uniao(int *x, int n, int *y, int m, int *u, int *tam_uniao){
  int aux[MAX], tam_aux = 0;

  concatenacao(x, n, y, m, aux, &tam_aux);
  distintos(aux, tam_aux, u, tam_uniao);

}

void concatenacao(int *x, int n, int *y, int m, int *cat, int *tam_cat){
  int i;

  *tam_cat = n + m ;

  //copia primeiro array
  for(i = 0; i < n; i++){
    cat[i] = x[i];
  }

  //copia segundo array
  for(i = 0; i < m; i++){
    cat[n + i] = y[i];
  }

}

void distintos(int *x, int n, int *d, int *tam_distintos){
  int i, j, repetido;

  *tam_distintos = 0;

  for(i = 0; i < n ; i++){
    repetido = 0;
    for(j = 0; j < *tam_distintos; j++){
      if (x[i] == d[j]){
        repetido = 1;
        break;
      }
    }
    if (! repetido){
      d[*tam_distintos] = x[i];
      (*tam_distintos)++;
    }
  }
}


void imprime_vetor(int *x, int n){
  int i;
  printf("[");
  for(i = 0; i < n - 1; i++){
    printf("%d, ", x[i]);
  }
  if (n) printf("%d", x[i]);
  printf("]\n");
}

