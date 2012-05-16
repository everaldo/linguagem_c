/* Everaldo Gomes 04/05/2012

Preparar um algoritmo para ler os coeficientes 
a, b e c de uma equação do segundo grau da forma

ax^2 + bx + c = 0, calcular e imprimir 
o valor do discriminante dado por b^2 - 4ac


*/


#include <stdio.h>


int main(){
  float a, b, c, discriminante;

  printf("Digite os coeficientes a, b e c da equacao de segundo grau\n");
  scanf("%f %f %f", &a, &b, &c);
  discriminante = (b * b) - (4 * a * c);
  printf("O valor do discriminante é %f\n", discriminante);
}

