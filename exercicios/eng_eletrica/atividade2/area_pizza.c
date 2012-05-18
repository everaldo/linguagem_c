/* Everaldo Gomes - 18/05/2012

Calcule a area de uma pizza que possui um raio R (pi=3.14).

*/



#include <stdio.h>


#define PI 3.141592


int main(){

  float area, raio;

  printf("Digite a area da pizza\n");
  scanf("%f", &raio);

  area = PI * raio* raio;

  printf("A área da pizza é %f\n", area);

  return 0;
}
