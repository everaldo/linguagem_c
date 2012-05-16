/* Everaldo Gomes - 16/05/2012


Construa um algoritmo que leia 2 valores inteiros 
e mostre o maior deles.

*/

#include <stdio.h>

int main(){
  int a, b, maior;

  puts("Digite dois números inteiros");
  scanf("%d %d", &a, &b);

  if (a > b) maior = a;
  else maior = b;


  printf("O maior número é %d\n",maior);

  return 0;
}
