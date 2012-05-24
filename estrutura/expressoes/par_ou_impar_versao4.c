/* Everaldo Gomes - 04/05/2012

Escreve um programa para determinar se um número é par ou impar. O programa deve ler o numero
e escrever par ou impar, de acordo com o numero lido.

*/


#include <stdio.h>



int main(){

  int n;

  printf("Digite um numero:\n");
  scanf("%d", &n);

  if ((n / 2) *2  == n) printf("par\n");
  else printf("impar\n");

}
/*

Versão mais ineficiente:

divide um número por dois (divisão inteira) e
multiplica o resultado por 2. Se for igual ao número original então é par.

Ex.:

7 div 2 = 3 * 2 = 6 != 7 ímpar
6 div 2 = 3 * 2 = 6 == 6 par

*/
