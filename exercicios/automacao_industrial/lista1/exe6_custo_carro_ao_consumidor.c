/* Everaldo Gomes - 04/05/2012


O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos
(aplicados ao custo de fábrica). Supondo que a percentagem do distribuidor seja de 12% e os impostos de 45%, escreva
um programa para ler o custo de fábrica do carro e imprimir o custo ao consumidor

*/

#include <stdio.h>


#define IMPOSTO 0.45
#define COMISSAO_DISTRIBUIDOR 0.12

int main(){
  float custo_fabrica, custo_final;

  printf("Digite o custo de fábrica do carro\n");
  scanf("%f", &custo_fabrica);
  custo_final = custo_fabrica + (custo_fabrica * COMISSAO_DISTRIBUIDOR) + (custo_fabrica * IMPOSTO);
  printf("O custo final do carro ao consumidor é: %.2f\n", custo_final);
}

