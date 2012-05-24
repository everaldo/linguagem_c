/* Everaldo Gomes - 24/05/2012 */

#include <stdio.h>

int main(){

  printf("%d\n", 0 * 1);                //imprime 0
  printf("%d\n", 1 * 1);                //imprime 1
  printf("%f\n", 1 * 10.0);             //imprime 10.000000
  printf("%f\n", 127 * 1.0);            //imprime 127.000000
  printf("%f\n", (float)1 * 1);         //imprime 1.000000
  printf("%d\n", (int)1.0 * (int)1.0);  //imprime 1
  printf("%f\n", 0.33333333 * 3);       //imprime 1.000000 -> mas o valor não é 1!!
  printf("%.2f\n", 0.333333 * 3);       //imprime 1.00 -> mas o valor não é 1!!
  printf("%f\n", 1e1 - 1);              //imprime 9.000000 
  printf("%e\n", 1e3 * 1e6);            //imprime 1.000000e+09 -> 1 bilhão
  printf("%e\n", 1e6 * 1e-9);           //imprime 1.000000e-03
  printf("%f\n", 1e6 * 1e-9);           //imprime 0.001000 

  printf("%d\n", 11 * 6);               //imprime 66
  printf("%c\n", 11 * 6);               //imprime B
  printf("%d\n", 'A' * 2);              //130

}
