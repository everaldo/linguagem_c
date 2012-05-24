/* Everaldo Gomes - 04/05/2012

Escreve um programa para determinar se um número é par ou impar. O programa deve ler o numero
e escrever par ou impar, de acordo com o numero lido.

*/
#include <stdio.h>

int main(){

  int n;

  printf("Digite um numero:\n");
  scanf("%d", &n);

  if (n & 0x1) printf("impar\n");
  else printf("par\n");

}
/*

O operador & (operador E bit-a-bit - bitwise-AND) aplica a função E em cada bit de seus operandos.
Um número inteiro, armazenado em formato binário, é par quando seu bit menos significativo é igual a zero
e ímpar quando seu bit menos significativo é igual a 1.

Então,

n % 0x1 é verdadeiro para números ímpares.

Ex: 3     -> 00000000000000000000000000000011 &
    0x1   -> 00000000000000000000000000000001 
            ---------------------------------
             00000000000000000000000000000001 -> 1 é verdadeiro

*/
