/* Everaldo Gomes - 24/05/2012 */


#include <stdio.h>

int main(){

  printf("%d\n", 0 != 0); //imprime 0
  printf("%d\n", 1 != 1); //imprime 0
  printf("%d\n", 1 != 1.0);//imprime 0
  printf("%d\n", 37 != 37); //imprime 0
  printf("%d\n", 'A' != 65); //imprime 0 -> letras (char) são armazenados como números inteiros de 1byte

  printf("%d\n", 'A' != 'a'); //imprime 1 -> letras maiúsculas são diferentes de minúsculas
  printf("%d\n", 2 != 3); //imprime 1 -> retorna falso quando os operandos são diferentes




  return 0;
}
