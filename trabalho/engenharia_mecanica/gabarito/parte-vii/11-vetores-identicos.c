/*
Leia dois vetores de tamanho n. 
Verifique se eles são idênticos. 
Imprima "são idênticos" ou "não são idênticos"
*/


#include <stdio.h>

#define MAX 100


int main(){
  int x[MAX], y[MAX], n;
  int i, identicos;

  puts("Digite o tamanho dos vetores");
  scanf("%d", &n);

  puts("Digite os elementos do vetor x");
  for(i = 0; i < n ; i++)
    scanf("%d", &x[i]);

  puts("Digite os elementos do vetor y");
  for(i = 0; i < n; i++)
    scanf("%d", &y[i]);

  identicos = 1;
  for(i = 0; i < n; i++){
    if (x[i] != y[i]){
      identicos = 0;
      break;
    }
  }

  if(identicos){
    puts("são idênticos");
  }
  else{
    puts("não são idênticos");
  }


  return 0;
}
