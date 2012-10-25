/* Everaldo Gomes -25/10/2012
 *
 * Passagem de Arrays como argumento de uma função
 *
 *
 */

#define MAX 100

#include <stdio.h>


void imprime_vetor(int v[MAX], int n); //vetor passado como um array com tamanho definido (sized array)
void le_vetor(int v[], int* n);  //vetor passado como um array com tamanho indefinido (unsized array)
void imprime_inverso(int *v, int n);   //vetor passado como um ponteiro

int main(void){
  int v[MAX], n;
 
  le_vetor(v, &n);
  imprime_vetor(v, n);
  imprime_inverso(v, n);

  return 0;
}


void imprime_vetor(int v[MAX], int n){
  puts("Imprimindo o vetor...");
  int i;

  for(i = 0; i < n; i++) printf("%d ", v[i]);
  puts("");
}

void le_vetor(int v[MAX], int* n){
  puts("Leitura do vetor...");
  int i;

  puts("Digite o tamanho do vetor");
  scanf("%d", n); //IMPORTANTE - Não use &n, porque n já é um ponteiro

  puts("Digite os valores...");
  for(i = 0; i < *n; i++){ //necessário usar *n, porque n é um ponteiro e *n é o valor de n
    scanf("%d", &v[i]); 
  }
  puts("");
}

void imprime_inverso(int v[MAX], int n){
  puts("Imprimindo o vetor na ordem inversa...");
  int i;

  for(i = 0; i < n; i++) printf("%d ", v[n - i - 1]);
  puts("");
}
