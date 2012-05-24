/* Everaldo Gomes - 04/05/2012

Escreve um programa para determinar se um número é par ou impar. O programa deve ler o numero
e escrever par ou impar, de acordo com o numero lido.

*/


#include <stdio.h>



int main(){

  int n;

  printf("Digite um numero:\n");
  scanf("%d", &n);

  if (n % 2 == 0) printf("par\n");
  else printf("impar\n");

}
/*

O operador % (modulo) retorna o resto da divisão inteira.
Quando divide-se um número por 2, se o resto for igual a zero o número é par,
senão - se for igual a 1 - o número é ímpar.

Ex.:

2 / 2 = 1 e resto 0 - par
1 / 2 = 0 e resto 1 - ímpar
0 / 2 = 0 e resto 0 - par
119 / 2 = 59 e resto 1 - ímpar
1000 / 2 = 500 e resto 0 - par



*/
