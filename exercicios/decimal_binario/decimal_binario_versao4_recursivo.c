/* Everaldo Gomes - 22/05/2012

Conversão de binário para decimal

versão 4

Recursiva

Ex.:

25 ==> 11001 = 16 + 8 + 1 = 25

Obs.:

Só funciona até 1023

*/

#include <stdio.h>


int binario_decimal(int decimal){
  int aux, resto;
  if (decimal == 0){
    return 0;
  }
  else if (decimal == 1){
    return 1;
  }
  else{
    aux = decimal;
    resto = aux % 2;
    aux = aux / 2;
    return (binario_decimal(aux) * 10) + resto;
  }
}

int main(){
  int decimal, binario, resto, aux, inverso, num_digitos_binarios;

  puts("Digite um número decimal para conversão em base binária");
  scanf("%d",&decimal);

  binario = binario_decimal(decimal);

  printf("Valor em binário= %d\n", binario);

  
  return 0;
}

