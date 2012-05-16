/* Everaldo Gomes - 04/05/2012

Escreve um programa para fazer as seguintes conversoes:

a) Ler uma medida em polegadas e imprimir o equivalente em milímetros (25,4 mm = 1 polegada)

*/

#include <stdio.h>


int main(){
  float polegadas, milimetros;

  printf("Digite uma medida em polegadas\n");
  scanf("%f", &polegadas);
  milimetros = polegadas * 25.4 ; 
  printf("%.2f pol corresponde(m) a %.2f º mm\n", polegadas, milimetros);
}

