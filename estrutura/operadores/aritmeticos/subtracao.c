/* Everaldo Gomes - 24/05/2012 */

#include <stdio.h>

int main(){

  printf("%d\n", - 1);                  //imprime -1
  printf("%d\n", - 0);                  //imprime 0
  printf("%d\n", 1 - 1);                //imprime 0
  printf("%f\n", 1.0 - 1.0);            //imprime 0.000000
  printf("%f\n", 1 - 1.0);              //imprime 0.000000
  printf("%f\n", (float)1 - 1);         //imprime 0.000000
  printf("%d\n", (int)1.0 - (int)1.0);  //imprime 0
  printf("%.2f\n", 1.0 - 1.0);          //imprime 0.00
  printf("%d\n", 1 - 2);                //imprime -1
  printf("%f\n", 1e1 - 1);              //imprime 9.000000 
 

  printf("%d\n", 'B' - 1);              //imprime 65
  printf("%c\n", 'B' - 1);              //imprime A


}
