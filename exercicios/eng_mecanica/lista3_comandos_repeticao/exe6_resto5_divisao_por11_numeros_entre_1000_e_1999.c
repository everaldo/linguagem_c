/* Everaldo Gomes - 28/05/2012

Dentre os números de 1000 a 1999 e escrever aqueles que divididos por 11 dão 
um resto igual a 5.

*/


#include <stdio.h>

int main(){
  int i;
  for(i = 1000; i <= 1999; i++){
    if( i % 11 == 5) printf("%d ", i);
  }
  printf("\n");



  return 0;
}
/*
Obs.:

Este programa não possui entrada de dados. Logo a saída será sempre a mesma


*/



