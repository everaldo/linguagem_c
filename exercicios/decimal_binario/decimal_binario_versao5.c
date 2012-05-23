/* Everaldo Gomes - 22/05/2012

Conversão de decimal para binário

versão 5

Otimização da versão 1

Não precisa espelhar (inverter os digitos) do número,
pois cada dígito binário já é posto em sua posição
correta

Ex.:

25 ==> 11001 = 16 + 8 + 1 = 25

Obs.:

Só funciona até 1023

*/

#include <stdio.h>


int main(){
  int decimal, binario, resto, aux, pot;

  puts("Digite um número decimal para conversão em base binária");
  scanf("%d",&decimal);
  aux = decimal;
  binario = 0;

  pot = 1;
  while(aux != 0){
    resto = aux % 2;
    aux = aux / 2;
    binario = binario + (resto * pot);
    pot *= 10;
  }

  printf("Valor em binário= %d\n", binario);

  
  return 0;
}

