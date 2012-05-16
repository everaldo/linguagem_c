/* Everaldo Gomes - 04/05/2012

Escreva um programa para ler os comprimentos 
dos três lados de um triangulo (S1, S2 e S3) e calcular a área
do triângulo de acordo com a fórmula de Heron:
A = Raiz Quadrada(P * (P - S1) * (P - S2) * (P - S3) ), onde
P representa o semi perímetro do triângulo: P = S1 + S2 + S3 / 2


Nota: Compilar com -lm

*/

#include <stdio.h>
#include <math.h>

int main(){

  float x, y, z, p, area;
  printf("Digite o tamanho dos lados do triangulo (separado por espaço)\n");
  scanf("%f %f %f", &x, &y, &z);
  p = (x + y + z) / 2.0 ;
  area = sqrt(p * (p - x) * (p - y) * (p - z)); 
  printf("A área do triângulo é igual a %8.4f\n", area);
}

