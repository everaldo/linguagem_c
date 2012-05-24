/* Everaldo Gomes - 24/05/2012 */


#include <stdio.h>


int main(){
  
  printf("%d\n", 0 && 0);     //imprime 0
  printf("%d\n", 0 && 1);     //imprime 0
  printf("%d\n", 1 && 0);     //imprime 0 
  printf("%d\n", 1 && 1);     //imprime 1


  printf("%d\n", 1 && 1 && 1 && 1 && 0);     //imprime 0 -> todas as expressões tem que ser
                                             //verdadeiras

  printf("%d\n", 1 && printf("Verdadeiro\n"));     //imprime Verdadeiro e depois 1


  printf("%d\n", 0 && printf("Nunca vai imprimir\n"));  //imprime somente 0
                                                        //TESTE DE CURTO CIRCUITO
  /* Teste de curto circuito - se a primeira expressão é falsa não avalia as outras */


  return 0;
}

