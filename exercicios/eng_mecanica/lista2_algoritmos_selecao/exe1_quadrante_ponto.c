/* Everaldo Gomes - 16/05/2012

Construa um algoritmo que leia as coordenadas
de um ponto e determine o quadrante em
que ele está situado.

Obs.: Esta versão não considera se o ponto está na origem, 
 no eixo das ordenadas ou no das abscissas.

                  ^
                  |
                  |
Segundo quadrante | Primeiro quadrante
                  |
                  |
<------------------------------------>
                  |
                  |
Terceiro quadrante| Quarto quadrante
                  |
                  |
                  v

*/

#include <stdio.h>


int main(){
  float x, y;

  puts("Digite as coordenadas x (abscissa) e y (ordenada) de um ponto");
  scanf("%f %f", &x, &y);

  if (x >= 0)
    if (y >= 0)
      puts("Primeiro quadrante");
    else
      puts("Quarto quadrante");
  else
    if (y >= 0)
      puts("Segundo quadrante");
    else
      puts("Terceiro quadrante");

  return 0;
}
