/* Everaldo Gomes - 22/05/2012

Conversão de binário para decimal

versão 2 - conversão por soma de potências

Ex.:

25 ==> 11001 = 16 + 8 + 1 = 25

Obs.:

Só funciona até 1023 e para valores positivos

*/

#include <stdio.h>


int main(){
  int decimal, binario, aux_bin, i, aux, expoente, pot2;

  puts("Digite um número decimal para conversão em base binária");
  scanf("%d",&decimal);
  aux = decimal;
  binario = 0;

  while(aux != 0){
    expoente = 0;
    pot2 = 1;
    while (aux >= pot2){
      expoente++;
      pot2 *= 2;
    }
    expoente--;
    pot2 /= 2;
    aux = aux - pot2;

    aux_bin = 1;
    for(i = 1; i <= expoente; i++)
      aux_bin *= 10;

    binario += aux_bin;
  }

  printf("Valor em binário= %d\n", binario);

  
  return 0;
}

