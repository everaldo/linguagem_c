/* Everaldo Gomes - 14/06/2012

A série de Fibonacci é uma seqüência de termos que tem como os 2 primeiros
termos, respectivamente, os números 0 e 1. A partir daí, os demais termos são
formados seguindo uma certa regra. A série de Fibonacci pode ser vista a seguir:
0 1 1 2 3 5 8 13 21...
Descubra a regra que gera a seqüência da série de Fibonacci e escreva um
algoritmo que gere os n (solicitados pelo usuário) primeiros termos desta série e
calcula e escreve a soma destes termos.


Observações:

A regra da série de fibonacci é a seguinte:

fib(0) = 0
fib(1) = 1
fib(n) = fib(n - 1) + fib(n - 2), para todo n > 1

logo

fib(2) = fib(1) + fib(0)
fib(2) = 1 + 0
fib(2) = 1


fib(3) = fib(2) + fib(1)
fib(3) = 1 + 1
fib(3) = 2

...


*/
#include <stdio.h>

int main(){
  int i, n, fib_n, fib_n_1, fib_n_2, soma;

  puts("Digite o enésimo termo da série de Fibonacci que deseja calcular");
  scanf("%d", &n);

  fib_n_2 = 0;
  fib_n_1 = 1;
  fib_n = 0;
  soma = 0;

  for(i = 2; i <= n; i++){
    fib_n = fib_n_1 + fib_n_2;
    fib_n_2 = fib_n_1;
    fib_n_1 = fib_n;
    soma += fib_n;
  }

  printf("A soma dos n primeiros termos da série de Fibonacci é: %d\n", soma);

  return 0;
}



