/* Everaldo Gomes - 16/05/2012

Construa um algoritmo que leia o valor de 3 variáveis,
 a, b e c, calcule e mostre o seguinte:

a) a área do triângulo que tem a por base e b por altura;

area_triangulo = (a * b) / 2.0

b) a área do trapézio que tem a e b por bases e c por altura;


area_trapezio = ((a + b) * c) / 2.0

c) a área do círculo de raio c;

area_circunferencia = PI * c^2 = PI * c * c

d) a área do quadrado de lado b;

area_quadrado = b^2 = b * b

e) a área do retângulo de lados a e b;

area_retangulo = a * b

*/

#include <stdio.h>

#define PI 3.141592

int main(){
  float a, b, c, area_triangulo, area_trapezio, area_circunferencia,
    area_quadrado, area_retangulo;

  puts("Digite os valores de a, b e c");
  scanf("%f %f %f", &a, &b, &c);

  area_retangulo = a * b;
  area_triangulo = area_retangulo / 2.0;
  area_quadrado = b * b;
  area_circunferencia = PI * c * c;
  area_trapezio = ((a + b) * c) / 2.0;

  puts("As áreas são:");
  printf("Triangulo a b c: %f\n", area_triangulo);
  printf("Trapezio bases a, b altura: c: %f\n", area_trapezio);
  printf("Circunferencia raio c: %f\n", area_circunferencia);
  printf("Quadrado lado b: %f\n", area_quadrado);
  printf("Retangulo lados a, b: %f\n", area_retangulo);

  return 0;
}
