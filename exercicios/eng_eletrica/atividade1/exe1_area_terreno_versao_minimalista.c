/* Everaldo Gomes - 12/05/2012

A imobiliária Imóbilis vende apenas terrenos retangulares.
Faça um algoritmo para ler as dimensões de um terreno e
 depois exibir a área do terreno.

*/

#include <stdio.h>

/*
Versão minimalista - para quem não gosta de muito BLAH BLAH BLAH

Obs.: não faz validação se as medidas são maior que 0,
      pois presume que o usuário sabe usar o programa
*/


int main(){
  float largura, profundidade;
  
  scanf("%f %f", &largura, &profundidade);
  

  printf("%f\n", largura * profundidade);

  return 0;
}


