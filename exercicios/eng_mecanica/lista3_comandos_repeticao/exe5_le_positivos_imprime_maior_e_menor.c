/* Everaldo Gomes - 28/05/2012

Ler valores positivos do teclado e dizer qual é o maior e qual é o menor deles.

Obs.: Assume que a leitura termina com zero
*/

#include <stdio.h>
//#include <limits.h>

int main(){
  unsigned int n, maior, menor; //unsigned garante que todos os valores serão interpretados
                                //como números positivos

  maior = 0;
  menor = 999999; //precisa ser iniciado com um número "grande"
                  //o mais correto seria inicializar com o maior valor inteiro

  //menor = UINT_MAX; # descomente esta linha e inclua a biblioteca limits.h INT_MAX é uma 
  //constante que armazena o maior valor inteiro

  puts("Digite uma sequência de números positivos, terminada por zero " 
       "para cálculo do maior e do menor"); //é possível continuar uma string na próxima linha - desta maneira

  scanf("%u", &n);
  while(n != 0){
    if (n >= maior) maior = n;
    if (n <= menor) menor = n;
    scanf("%u", &n);
  }
  printf("O maior valor é %u\n", maior);
  printf("O menor valor é %u\n", menor);

  return 0;
}
/*
Obs.:

Para refletir: se o usuário digitar 0, imprimirá 0 e 999999.

Isso é desejável? Aceitável?

*/



