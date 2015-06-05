/* Everaldo Gomes - 17/05/2012

Construa um algoritmo que leia a medida de um ângulo em graus.
Calcule e mostre o quadrante em que se localiza esse ângulo.

Considere os quadrantes trigonometria e para
ângulos maiores do que 360º ou menores que -360º,
 reduzi-los, mostrando também o nº de
voltas e o sentido da volta (horário ou anti-horário).

*/


#include <stdio.h>
#include <stdlib.h>


#define HORARIO 0
#define ANTIHORARIO 1


int main(){
  int angulo, sentido = ANTIHORARIO, num_voltas = 0; 


  printf("Digite um ângulo, em graus\n");
  scanf("%d", &angulo);

  num_voltas = abs(angulo / 360);
  angulo = angulo % 360;

  if (angulo < 0){
    angulo = angulo + 360;
    sentido = HORARIO;
  }



  if (angulo < 90){
    printf("Primeiro quadrante, ");
  } else if (angulo < 180){
    printf("Segundo quadrante, ");
  } else if (angulo < 270){
    printf("Terceiro quadrante, ");
  } else if (angulo < 360){
    printf("Quarto quadrante, ");
  }
  
  printf("sentido ");
  if (sentido == HORARIO) printf("horário ");
  else printf("anti-horário ");

  printf("número de voltas igual a %d\n", num_voltas);

  return 0;
}





