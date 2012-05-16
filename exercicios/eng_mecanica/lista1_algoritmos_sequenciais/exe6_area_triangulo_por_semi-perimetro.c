/* Everaldo Gomes - 16/05/2012

Construa um algoritmo que leia três valores
a, b, e c que são lados de um triângulo,
 e calcule a área deste triângulo
por meio do semi-perímetro.

s = (a + b + c)/2 e
Área = raiz_quadrada(s * (s – a) * (s – b) * (s – c))


Obs.: Esta fórmula é conhecida por fórmula de Heron ou Herão

Obs2.: Para compilar utilize -lm -> link com a biblioteca matemática

*/



#include <stdio.h>
#include <math.h>

int main(){

  float a, b, c, s, area;
  puts("Digite o tamanho dos lados do triangulo a, b,c (separados por espaço)");
  scanf("%f %f %f", &a, &b, &c);
  s = (a + b + c) / 2.0 ;
  area = sqrt(s * (s - a) * (s - b) * (s - c)); 
  printf("A área do triângulo é igual a %8.4f\n", area);
  return 0;
}
