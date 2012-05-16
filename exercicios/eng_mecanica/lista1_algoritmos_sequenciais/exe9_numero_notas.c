/* Everaldo Gomes - 16/05/2012


Construa um algoritmo que leia um valor
em reais e calcule o menor número de notas de
100, 50, 20, 10, 5 e 1 que o valor pode ser
 decomposto. Escrever a relação das notas.

*/
#include <stdio.h>


/* Confira a segunda versão para uma solução mais avançada utilizando vetores */
int main(){
  int valor, n100 = 0,  n50 = 0, n20 = 0, n10 = 0, n5 = 0, n1 = 0;

  printf("Digite um valor em reais\n");
  scanf("%d", &valor);


  n100 = valor / 100;
  valor = valor % 100; //poderia ser: valor %= 100;
  n50 =  valor / 50;
  valor %= 50;
  n20 = valor / 20;
  valor %= 20;
  n10 = valor / 10;
  valor %= 10;
  n5 = valor / 5;
  valor %= 5;
  n1 = valor;


  puts("O menor número possível de notas é:");
  printf("%02d notas de 100\n", n100);
  printf("%02d notas de  50\n", n50);
  printf("%02d notas de  20\n", n20);
  printf("%02d notas de  10\n", n10);
  printf("%02d notas de   5\n", n5);
  printf("%02d notas de   1\n", n1);


  return 0;
}
/*
Observações:

O maior número de notas de   1 será 4;
O maior número de notas de   5 será 1;
O maior número de notas de  10 será 1;
O maior número de notas de  20 será 2;
O maior número de notas de  50 será 1;



*/

