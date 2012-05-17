/* Everaldo Gomes - 17/05/2012

Enunciado original (confira alterações abaixo):

Construa um algoritmo que leia 3 valores, a, b e c 
inteiros e positivos e verifique se eles
formam um triângulo ou não. 

Se formarem, calcular e mostrar a área deste triângulo. Se não
formarem mostrar a mensagem "não formam triângulo". 

Três valores formam um triângulo
se o maior lado (a hipotenusa) for menor que a 
soma dos outros dois lados (catetos).


Enunciado modificado:

- Se formar triângulo equilátero, imprimir "equilátero"
- Se formar triângulo isósceles, imprimir "isósceles"
- Se formar triângulo escaleno, imprimir "escaleno"


Condição para formação de triângulo:

Fonte: http://www.brasilescola.com/matematica/triangulo.htm

Para construir um triângulo não podemos utilizar qualquer medida, 
tem que seguir a condição de existência:
Para construir um triângulo é necessário que a medida de 
qualquer um dos lados seja menor que a soma das medidas dos 
outros dois e maior que o valor absoluto da diferença 
entre essas medidas.

| b - c | < a < b + c
| a - c | < b < a + c
| a - b | < c < a + b



*/

#include <stdio.h>
#include <math.h> //precisa compilar com -lm para usar a função abs()  

//abs(5) = 5
//abs(-5) = 5


typedef unsigned int natural;


float area_triangulo(natural a, natural b, natural c){
  float s, area;
  s = (a + b + c) / 2.0 ;
  area = sqrt(s * (s - a) * (s - b) * (s - c)); 
  printf("A área do triângulo é igual a %8.4f\n", area);
  return area;
}


void tipo_triangulo(natural a, natural b, natural c){
  
  if (a == b && a == c) // a = b, a = c, logo b = c => a = b = c
    printf("Triângulo equilátero\n");
  else if (a != b && b != c && a != c)
    printf("Triângulo escaleno\n");
  else
    printf("Triângulo isósceles\n");
}



int main(){
  natural a, b, c; //unsigned para utilizar somente valores inteiros

  printf("Digite o tamanho dos lados a b c do triângulo\n");
  scanf("%u %u %u", &a, &b, &c); // %u para ler valores unsigned int


  if ((abs(b - c) < a && a < b + c) &&
       (abs(a - c) < b && b < a + c) &&
       (abs(a - b) < c && c < a + b) ){

    area_triangulo(a, b, c); 
    tipo_triangulo(a, b, c);   
  }
  else{
    printf("Os lados %u %u %u não formam um triângulo\n", a, b, c);
  } 

  return 0;
}

