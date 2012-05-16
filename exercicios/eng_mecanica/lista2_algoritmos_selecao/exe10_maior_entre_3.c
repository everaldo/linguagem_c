/* Everaldo Gomes - 16/05/2012

Construa um algoritmo que leia 3 valores
inteiros e mostre o maior deles

*/

#include <stdio.h>


int main(){
  int a, b, c, maior;

  puts("Digite os valores inteiros a, b e c");
  scanf("%d %d %d", &a, &b, &c);
  
  if (a >= b)
    if (a > c) maior = a;
    else maior = c;
  else
    if (b > c) maior = b;
    else maior = c;
      
  printf("O maior entre %d, %d e %d é %d\n", a, b, c, maior);

  return 0;
}

