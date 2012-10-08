/* Everaldo Gomes - 08 de Outubro de 2012 - Multiplicação por Somas
 * Apostila de Algoritmos UFPR - Página 54 - Exercício 29

****OBSERVAÇÃO**** O enunciado da apostila está errado. Abaixo a versão correta *********

Na apostila, onde se lê:

Multiplique o primeiro por 2 e divida o segundo por 2 até que o primeiro seja reduzido a 1

Leia-se:

Divida o primeiro por 2 e multiplique o segundo por 2 até que o primeiro seja reduzido a 1

*****************


29. Aqui temos uma forma peculiar de realizar uma multiplicação entre dois números:
divida o primeiro por 2 e multiplique o segundo por 2 até ́ que o primeiro seja
reduzido a 1. Toda vez que o primeiro for impar, lembre-se do segundo. Não
considere qualquer fração durante o processo. O produto dos dois números  ́
é igual a soma dos números que foram lembrados. Exemplo: 53 × 26 =

 
53    26     13     6     3     1
26    52    104   208   416   832

26 +        104 +       416 + 832 = 1378

*/

#include <stdio.h>


int main(void){
  int x, y, multiplicacao;
  multiplicacao = 0;


  puts("Digite dois números inteiros:");
  scanf("%d %d", &x, &y);

  while( x != 0){
    if (x % 2) //se o primeiro número é ímpar
      multiplicacao += y; //lembre-se do segundo

    x = x / 2; //podia ser reescrito como x /= 2;
    y = y * 2; //podia ser reescrito como y *= 2;
  }

  printf("O resultado da multiplicação é %d\n", multiplicacao);


}

/*

Curiosidade: A condição de parada deve ser x != 0, porque se for x != 1
ele não realiza a última soma

*/



