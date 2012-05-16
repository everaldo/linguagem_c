/* Everaldo Gomes - 16/05/2012

Construa um algoritmo que leia um número inteiro
e mostre uma mensagem indicando se
este número é par ou impar, e se é positivo, negativo ou nulo

positivo > 0
nulo == 0
negativo < 0
par n % 2 == 0
impar n % 2 == 1 ou de outra forma n % 2 != 0 

*/

#include <stdio.h>


int main(){
  int n;

  printf("Digite um numero inteiro\n");
  scanf("%d", &n);

  printf("O número %d é ", n);
  if (n % 2 == 0){
    printf("par e ");
  }
  else{
    printf("ímpar e ");
  }

  if (n > 0){
    printf("positivo\n");
  }
  else if (n < 0){
    printf("negativo\n");
  }
  else{
    printf("nulo\n");
  }
  return 0;
}
