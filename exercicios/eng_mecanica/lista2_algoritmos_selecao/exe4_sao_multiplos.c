/* Everaldo Gomes - 16/05/2012


Construa um algoritmo que leia 2 valores
e os escreva com a mensagens "são múltiplos" ou
"não são múltiplos"


*/

#include <stdio.h>

int main(){
  int m, n;

  printf("Digite dois números para verificação se são múltiplos\n");
  scanf("%d %d", &m, &n);

  if (m % n == 0 || n % m == 0)  puts("são múltiplos");
  else  puts("não são múltiplos");

  return 0;
}
/*
Obs.: Quando o if e o else possuem apenas um comando, pode-se escrever
na mesma linha - mas somente se os comandos são simples - senão prejudica
a legibilidade do código



*/

