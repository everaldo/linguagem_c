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

void le_vetor(int *v, int *tam);
void imprime_vetor(int *v, int *n);
void interseccao(int *v, int n, int *inter, int *tam);
void remove(int* v, int *n, int x);
void subtracao(int *x, int n, int *y, int m, int* s, int* tam);


int main(void){
  int a[MAX], b[MAX], sub[MAX], n, m, tam;

  le_vetor(a, &n);
  le_vetor(b, &m);
  subtracao(a, n, b, m, sub, &tam);
  imprime_vetor(sub, tam);

  return 0;
}

