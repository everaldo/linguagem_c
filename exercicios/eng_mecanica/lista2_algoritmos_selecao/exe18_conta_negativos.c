/* Everaldo Gomes - 16/05/2012


Construa um algoritmo que leia 5 valores
para uma variável, um de cada vez, e conte
quantos destes valores são negativos, escrevendo esta informação


*/

#include <stdio.h>


int main(){
  int i, n, negativos = 0;

  puts("Digite cinco números inteiros");
  
  for(i = 0; i < 5; i++){
    scanf("%d", &n);
    if (n < 0) negativos++;
  }
  printf("Foram digitados %d números negativos\n", negativos);

  return 0;
}

