/* Everaldo Gomes - 24/05/2012 */

#include <stdio.h>

int main(){

  printf("%d\n", 1 / 1);                //imprime 1

  printf("%d\n", 1 / 2);                //imprime 0 - divisao inteira
  printf("%f\n", 1.0 / 2);              //imprime 0.500000 - divisao float
  printf("%f\n", 1 / 2.0);              //imprime 0.500000 - divisao float

  printf("%f\n", 1.0 / 1e6);            //imprime 0.000001

  printf("%f\n", 1.0 / 1e9);            //imprime 0.000000 -> mas o valor não é 0!!
  printf("%.10f\n", 1.0 / 1e9);         //imprime 0.0000000010

  printf("%f\n", 1.0 / 1e-9);           //imprime 1000000000.000000
  printf("%e\n", 1.0 / 1e-9);           //imprime 1.000000e+09

  printf("%d\n", (int)1.0 / (int)1.0);  //imprime 1


  printf("%f\n", 1.0 / 3.0);            //imprime 0.333333 -> mas o valor não é 1!!
  printf("%e\n", 1e3 / 1e6);            //imprime 1.000000e-03
  printf("%e\n", 1e6 / 1e-9);           //imprime 1.000000e+15
  printf("%f\n", 1e2 / 1e-4);           //imprime 1000000.000000

  printf("%d\n", 726 / 11);             //imprime 66
  printf("%c\n", 726 / 11);             //imprime B
  printf("%c\n", 650 / 10);             //imprime A

}
