/* Everaldo Gomes 16/05/2012

Construa um algoritmo que receba o valor de 
três variáveis a, b e c. O algoritmo deve trocar
o valor das variáveis de forma que 
a fique com o valor de b,
b fique com o valor de c e
c fique com o valor de a. 

Mostre o valor das variáveis após a troca

*/
#include <stdio.h>


int main(){
  int a, b, c, temp;

  puts("Digite os valores de a, b e c");
  scanf("%d %d %d", &a, &b, &c);

  temp = a; //temp armazena o valor original de a
  a = b; //a fica com o valor de b
  b = c; //b fica com o valor de c
  c = temp; //c fica com o valor original de a


  printf("a = %d, b = %d, c =%d\n",a,b,c);

  return 0;
}
