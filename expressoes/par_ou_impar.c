/* Everaldo Gomes - 04/05/2012

Escreve um programa para determinar se um número é par ou impar. O programa deve ler o numero
e escrever par ou impar, de acordo com o numero lido.


*/


#include <stdio.h>



int main(){

  int n;

  printf("Digite um numero:\n");
  scanf("%d", &n);

  if (n % 2 == 0){
    printf("par\n");
  }
  else{
    printf("impar\n");
  }

}

