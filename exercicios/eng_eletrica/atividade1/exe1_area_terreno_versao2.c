/* Everaldo Gomes - 12/05/2012

A imobiliária Imóbilis vende apenas terrenos retangulares.
Faça um algoritmo para ler as dimensões de um terreno e
 depois exibir a área do terreno.

*/

#include <stdio.h>

int main(){
  float largura, profundidade;
  
  puts("***IMOBILIS***\n***CALCULO DA AREA DE UM TERRENO***\n");
  printf("Digite a largura do terreno (em metros): ");
  scanf("%f", &largura);
  printf("Digite a profundidade do terreno (em metros): ");
  scanf("%f", &profundidade);

  printf("A area do terreno e de %.2f m2\n", largura * profundidade);

  return 0;
}


