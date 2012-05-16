/* Everaldo Gomes - 04/05/2012

Escreve um programa para calcular o fatorial de um numero. O programa deve ler o numero e escrever o valor do fatorial

0! = 1
1! = 1
2! = 2 * 1! = 2 * 1 = 2
3! = 3 * 2! = 3 * 2 * 1 = 6
n! = n * (n - 1)! = n * (n - 1) * (n - 2) ... * 1 


*/

#include <stdio.h>

int main(){
  int i = 0, n = 0;
  long long fatorial = 1;


  printf("Digite um número para cálculo de seu fatorial\n");
  scanf("%d", &n);
  for(i = 2; i <= n; i++){
    fatorial *=  i;
  }
  printf("O fatorial de %d é %lld\n", n, fatorial);

}
