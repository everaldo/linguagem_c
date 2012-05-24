/* Everaldo Gomes - 24/05/2012 */

#include <stdio.h>

int main(){

  printf("%d\n", 1 + 1);                //imprime 2
  printf("%f\n", 1.0 + 1.0);            //imprime 2.000000
  printf("%e\n", 1.0 + 1.0);            //imprime 2.000000e+00 -> notacao cientifica
  printf("%f\n",  1e0 + 1e0);            //imprime 2.000000
  printf("%f\n", 1 + 1.0);              //imprime 2.000000
  printf("%f\n", (float)1 + 1);         //imprime 2.000000
  printf("%d\n", (int)1.0 + (int)1.0);  //imprime 2
  printf("%.2f\n", 1.0 + 1.0);          //imprime 2.00



  printf("%d\n", 'A' + 1);              //imprime 66
  printf("%c\n", 'A' + 1);              //imprime B

}
