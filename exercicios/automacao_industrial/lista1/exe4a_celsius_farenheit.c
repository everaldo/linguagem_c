/* Everaldo Gomes - 04/05/2012

Escreve um programa para fazer as seguintes conversoes:

a) Ler uma temperatura dada na escala Celsius e imprimir o equivalente em Fahrenheit sendo F = (9/5)C + 32

*/


#include <stdio.h>

int main(){

  float celsius, fahrenheit;

  printf("Digite uma temperatura em graus Celsius\n");
  scanf("%f", &celsius);
  fahrenheit = (9.0 / 5.0) * celsius + 32.0;
  printf("%.2f ºC corresponde a %.2f º F\n", celsius, fahrenheit);

}

