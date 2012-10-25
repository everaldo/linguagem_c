/* Everaldo Gomes - 25/10/2012
 *
 * Programa que troca dois valores inteiros com o uso de funções
 *
 */


#include <stdio.h>


void troca(int* x, int* y);

void leia(int *x, int *y);

void imprime(int x, int y);


int main(void){
  int x, y;

  puts("Este programa lê dois valores e realiza a troca. Ou seja, a variável armazenou o primeiro valor termina com o segundo valor e vice-versa");
  leia(&x,&y);
  puts("Antes da troca");
  imprime(x,y);
  troca(&x, &y);
  puts("Depois da troca");
  imprime(x,y);

  return 0;
}



void troca(int* x, int* y){
  int temp;

  temp = *x;
  *x = *y;
  *y = temp;
}

void leia(int *x, int *y){
  puts("Digite valores para x e y");
  scanf("%d %d", x, y);
}


void imprime(int x, int y){
  printf("x = %d\t\ty = %d\n", x, y);
}

