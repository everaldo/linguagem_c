/* Everaldo Gomes - 24/05/2012 */

#include <stdio.h>

/*

Módulo - resto da divisão inteira

operador - %

*/



int main(){

  printf("%d\n", 1 % 10);                //imprime  1
  printf("%d\n", 2 % 10);                //imprime  2
  printf("%d\n", 3 % 10);                //imprime  3
  printf("%d\n", 4 % 10);                //imprime  4
  printf("%d\n", 5 % 10);                //imprime  5
  printf("%d\n", 6 % 10);                //imprime  6
  printf("%d\n", 7 % 10);                //imprime  7
  printf("%d\n", 8 % 10);                //imprime  8
  printf("%d\n", 9 % 10);                //imprime  9
  printf("%d\n", 10 % 10);               //imprime 0

/*
Verifica se um número é par ou ímpar

Um número é par quando o resto da divisão por 2 é igual a 0.


*/


  printf("%d\n", 0 % 2);        //imprime 0
  printf("%d\n", 1 % 2);        //imprime 1
  printf("%d\n", 2 % 2);        //imprime 0
  printf("%d\n", 3 % 2);        //imprime 1

/*
Obtem último dígito de um número

numero % 10

ex.:

1435673 % 10 = 3


*/

  printf("%d\n", 1435673 % 10); //imprime 3


/*

Para descobrir se um número é múltiplo de outro:

x é múltiplo de y se

x % y == 0
*/
  printf("%d\n", 15 % 5); //imprime 0 -> 15 é múltiplo de 5


}
