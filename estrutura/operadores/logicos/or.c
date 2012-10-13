/* Everaldo Gomes - 24/05/2012 */


#include <stdio.h>


int main(){
  
  printf("%d\n", 0 || 0);     //imprime 0
  printf("%d\n", 0 || 1);     //imprime 1
  printf("%d\n", 1 || 0);     //imprime 1 
  printf("%d\n", 1 || 1);     //imprime 1


  printf("%d\n", 0 || 0 || 0 || 0 || 1);     //imprime 1 -> apenas uma expressão tem que ser
                                             //verdadeira

  printf("%d\n", 0 || printf("Verdadeiro\n"));     //imprime Verdadeiro e depois 1

  return 0;
}

