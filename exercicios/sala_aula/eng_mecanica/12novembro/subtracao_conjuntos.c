/* Everaldo Gomes - 12/11/2012
 * 
 * Subtração de Conjuntos - 
 *
 * [1, 2, 3] - [1, 2, 3, 4] = []
 *
 * [1, 2, 3, 4] - [1 , 2 , 3 ] = [4]
 *
 * [1, 2, 3, 4] - [2, 1, 4] = [3] 
 */
#include <stdio.h>

#define MAX 10

void le_vetor(int *v, int *n);
void imprime_vetor(int *v, int n);
void interseccao(int *x, int n, int *y, int m, int *inter, int *tam);
void remover(int* v, int *n, int x);
void subtracao(int *x, int n, int *y, int m, int* s, int* tam);
void copia(int* x, int n, int* c, int *tam);


int main(void){
  int a[MAX], b[MAX], sub[MAX], n, m, tam;

  le_vetor(a, &n);
  le_vetor(b, &m);
  subtracao(a, n, b, m, sub, &tam);
  imprime_vetor(sub, tam);

  return 0;
}


void le_vetor(int *v, int *n){
  int i;
  puts("Digite o tamanho do vetor");
  scanf("%d", n);

  puts("Digite os elementos do vetor");
  for(i = 0; i < *n; i++){
    scanf("%d", &v[i]);
  }

}



void imprime_vetor(int *v, int n){
  int i;
  printf("[");

  for(i = 0; i < n - 1; i++){
    printf("%d, ", v[i]);
  }
  printf("%d]\n", v[n - 1]);
}

void interseccao(int *v, int n, int* u, int m, int *inter, int *tam){

  int i, j;

  *tam = 0;

  for(i = 0; i < n; i++){
    for(j = 0 ; j < m; j++){
      if( v[i] == u[j]){
        inter[*tam] = v[i];
        *tam++;
        break;
      }
    }
  }

  imprime_vetor(inter, *tam);

}

void remover(int* v, int *n, int x){
  int i, posicao;

  for(i = 0; i < *n; i++){
    if( v[i] == x){
      posicao = i;
      break;
    }
  }


  for(i = posicao; i < *n - 1; i++){
    v[i] = v[i + 1];
  }
  (*n)--; //mesmo que n = n - 1;



}
void subtracao(int *x, int n, int *y, int m, int* s, int* tam){

  int inter[MAX], tam_inter;
  int aux[MAX], tam_aux;
  int i;

  interseccao(x, n, y, m, inter, &tam_inter);

  copia(x, n, aux, &tam_aux);

  for(i = 0; i < tam_inter; i++){

    remover(aux, &tam_aux, inter[i]);
  }

  copia(aux, tam_aux, s, tam);

}

void copia(int* x, int n, int* c, int *tam){
  int i;

  for(i = 0; i < n; i++){
    c[i] = x[i];
  }
  *tam = n;

}







