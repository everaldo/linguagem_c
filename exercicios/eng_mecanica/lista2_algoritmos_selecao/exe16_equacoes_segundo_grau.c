/* Everaldo - 17/05/2012

Faça um programa para resolver equações do segundo grau (encontrar as raízes da equação). 

ax^2 + bx + c =0 => ler os valores de a, b e c. 

A variável a não pode ser zero. Mostre quantas
raízes a equação tem e quais são elas. 

Lembrando: 

1. delta = b^2 - 4ac

2. delta < 0, não existe raiz real

3. delta = 0, existe uma raiz real

4. delta > 0 existem duas raízes reais

*/

#include <stdio.h>
#include <math.h> // compilar com -lm

int main(){
  float a, b, c, delta, x1, x2;

  puts("Digite os coeficientes a b c da equação de segundo grau");
  scanf("%f %f %f", &a, &b, &c);

  if (a == 0){
    puts("Coeficiente a não pode ser igual a zero");
    return 1; //retorna com status de erro - qualquer coisa diferente de 0 é erro
              //quando se trata do retorno do programa
  }

  delta = (b * b) - (4 * a * c);

  if (delta < 0){
    puts("Não existem raízes reais para esta equação");
    return 1;
  }
  else if (delta == 0){
    x1 = - b / (2.0 * a);
    printf("Existe apenas uma raiz que tem valor %f\n", x1);
  }
  else{
    x1 = (-b + sqrt(delta)) / (2.0 * a);
    x2 = (-b - sqrt(delta)) / (2.0 * a);
    printf("As raízes da equação são %f e %f\n", x1, x2);
  }
  return 0;
}
