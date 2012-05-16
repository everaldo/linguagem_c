/* Everaldo Gomes - 16/05/2012

Construa um algoritmo que receba o valor
do raio de uma esfera e calcule o volume desta
esfera.

Volume_esfera = 4/3 * PI * r^3

*/
#include <stdio.h>

#define PI 3.141592

int main(){
  float raio, volume;

  puts("Digite o raio de uma esfera para o cálculo de seu volume");
  scanf("%f", &raio);

  volume = (4.0 / 3.0) * PI * raio * raio * raio;

  printf("O volume da esfera de raio %f é %f\n", raio, volume);

  return 0;
}
/*

Observações:

É necessário fazer 4.0 / 3.0 para fazer a divisão de números reais
se fizéssemos 4 / 3 - o resultado seria inteiro (igual a 1)

No caso o resultado foi 1.3333333

Para fazer raio ao cubo usamos raio * raio * raio.

Mas para potenciação é possível usar a função pow() incluindo a biblioteca math.h
e compilando com a opção -lm

*/


