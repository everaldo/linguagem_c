/* Everaldo Gomes - 18/05/2012

Faça um algoritmo para ler o salário de um funcionário 
e aumentá-Io em 15%. Após o aumento, desconte 8% de impostos. 
Imprima o salário inicial, o salário com o aumento e o salário final.


*/

#include <stdio.h>

#define AUMENTO 0.08
#define IMPOSTOS 0.15


int main(){
  float salario, salario_aumento, salario_liquido;

  printf("Digite o salário do funcionário\n");
  scanf("%f", &salario);

  salario_aumento = salario + (salario * AUMENTO);

  salario_liquido = salario_aumento - (salario_aumento * IMPOSTOS);

  printf("O salário inicial era de %.2f\n", salario);
  printf("Com o aumento de %.2f%% o salário foi para %.2f\n", AUMENTO * 100.0, salario_aumento);
  printf("Com o desconto de %.2f%%  de impostos o salário líquido ficou em %.2f\n", IMPOSTOS * 100.0, salario_liquido);

  return 0;

}
