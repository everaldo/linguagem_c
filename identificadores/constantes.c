#include <stdio.h>


/*
Uma constante simbólica é definida com a diretiva #define

A forma é: #define <NOME_CONSTANTE> VALOR_CONSTANTE

A convenção é usar todas as letras maiúsculas para definir uma constante

Uma constante simbólica é substituída pelo seu valor durante a pré-compilação

*/
#define PI 3.141592


int main(){

  float perimetro, area, raio;

  /* 15.0 é uma constante literal - seu valor está definido diretamente no código-fonte*/
  raio = 15.0; 


  perimetro = 2 * PI * raio; //2 também é uma constante literal
  area = PI * raio* raio;


  /* A string "O perímetro da circunferência..." também é uma constante literal */
  printf("O perímetro da circunferência de raio %f é %f\n", raio, perimetro);
  printf("A área da circunferência de raio %f é %f\n", raio, area);

}
