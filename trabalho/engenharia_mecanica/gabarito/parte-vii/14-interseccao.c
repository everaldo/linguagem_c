/*
Leia dois vetores de números inteiros de tamanho n.
Construa um terceiro vetor que é a intersecção dos dois primeiros.
Dica: a intersecção pode ser feita da seguinte forma: concatene os dois vetores. 
Depois, construa outro vetor formado somente pelos elementos repetidos do vetor concatenado. 
Esse vetor constitui a intersecção dos dois primeiros

*/

#include <stdio.h>

#define MAX 100

void le_vetor(int* x, int *n);
void interseccao(int *x, int n, int *y, int m, int *inter, int *tam_inter);
void concatenacao(int *x, int n, int *y, int m, int *cat, int *tam_cat);
void repetidos(int *x, int n, int *r, int *tam_repetidos);
void imprime_vetor(int *x, int n);


int main(){
  int x[MAX], n = 0,  y[MAX], m = 0,  inter[MAX], tam_inter = 0;

  le_vetor(x, &n);
  le_vetor(y, &m);
  interseccao(x, n, y, m, inter, &tam_inter);
  imprime_vetor(inter, tam_inter);
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


void interseccao(int *x, int n, int *y, int m, int *inter, int *tam_inter){
  int aux[MAX], tam_aux = 0;

  concatenacao(x, n, y, m, aux, &tam_aux);
  repetidos(aux, tam_aux, inter, tam_inter);

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

void repetidos(int *x, int n, int *r, int *tam_repetidos){
  int i, j, k;

  *tam_repetidos = 0;

  for(i = 0; i < n - 1; i++){
    for(j = i + 1; j < n; j++){
      if (x[i] == x[j]){
        //verifica se o número já está no vetor de repetidos
        for(k = 0; k < *tam_repetidos; k++){
          if (r[k] == x[i]){
            break; //o número já estava no vetor de repetidos. Não insere e sai do loop
          }
        }
        if (k == (*tam_repetidos)){ //significa que o número não estava no vetor de repetidos. Insere-o
          r[*tam_repetidos] = x[i];
          (*tam_repetidos)++;
        }
        break; //verifica proximo número
      }
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

