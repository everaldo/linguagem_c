/* Everaldo Gomes 16/05/2012


Construa um algoritmo que calcule os sucessivos
valores de E usando a série abaixo e 
considerando primeiro três termos,
depois quatro termos e depois cinco termos:

      E = 1 + 1/1! + 1/2! + 1/3! + 1/4!+ 1/5!


1! = 1
2! = 2
3! = 6
4! = 24
5! = 120
6! = 720

Mais informações sobre o número de Euler:

http://pt.wikipedia.org/wiki/N%C3%BAmero_de_Euler


Valor aproximado: 2,71828182845904523530287

*/

#include <stdio.h>

int main(){
  double e;

  e = 1.0 + 1.0 + (1.0/2.0); //três termos
  printf("e com tres termos: %f\n", e); 
  e = e + (1.0/6.0); //quatro termos
  printf("e com quatro termos: %f\n", e); 
  e = e + (1.0/24.0); //cinco termos
  printf("e com cinco termos: %f\n", e); 
  e = e + (1.0/120.0); //seis termos
  printf("e com seis termos: %f\n", e); 
  e = e + (1.0/720.0); //sete termos
  printf("e com sete termos: %f\n", e);


  return 0;
}
