/* Everaldo Gomes - 22/05/2012

Conversão de decimal para binário

versão 4

Recursiva

Ex.:

25 ==> 11001 = 16 + 8 + 1 = 25

Obs.:

Só funciona até 1023

*/

#include <stdio.h>


int decimal_binario(int decimal){
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
    return (decimal_binario(aux) * 10) + resto;
  }
}

int main(){
  int decimal, binario, resto, aux, inverso, num_digitos_binarios;

  puts("Digite um número decimal para conversão em base binária");
  scanf("%d",&decimal);

  binario = decimal_binario(decimal);

  printf("Valor em binário= %d\n", binario);

  
  return 0;
}

