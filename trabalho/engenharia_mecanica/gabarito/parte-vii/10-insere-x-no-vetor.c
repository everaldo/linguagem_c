/*Leia uma sequência de n números e armazene-os em um array. 
  Após, leia o valor de uma posição e de um valor x, 
  que será inserido na posição indicada. 
  No final imprima o vetor*/

#include <stdio.h>

#define MAX 100

int main(){
  int v[MAX], i, n = 0;
  int posicao;
  int x; //elemento x a ser inserido

  puts("**Insere um elemento em um vetor, pelo índice**");

  puts("Digite o tamanho do vetor");
  scanf("%d", &n);

  puts("Digite os elementos do vetor");
  for(i = 0; i < n; i++){
    scanf("%d", &v[i]);
  }

  printf("Digite o índice (posição) do elemento que deseja inserir - entre 0 e %d\n", n );
  scanf("%d", &posicao); //se o usuario digita um indice maior que n - 1, remove ultimo elemento

  printf("Digite o valor do elemento x que deseja inserir\n");
  scanf("%d", &x); 

  n++;
  for(i = n - 1;  i > posicao; i--){
    v[i] = v[i - 1];
  }
  v[i] = x;

  puts("Imprimindo vetor após o elemento ser inserido");
  for(i = 0; i < n; i++){
    printf("%d ", v[i]);
  }
  puts("");

  return 0;
}
