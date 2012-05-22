/* Everaldo Gomes - 22/05/2012

Conversão de decimal para binário

versão 1

Ex.:

25 ==> 11001 = 16 + 8 + 1 = 25

Obs.:

Só funciona até 1023

*/

#include <stdio.h>


int main(){
  int decimal, binario, resto, aux, inverso, num_digitos_binarios;

  puts("Digite um número decimal para conversão em base binária");
  scanf("%d",&decimal);
  aux = decimal;
  binario = 0;
  num_digitos_binarios = 0;

  while(aux != 0){
    binario = binario * 10;
    resto = aux % 2;
    aux = aux / 2;
    binario = binario + resto;
    num_digitos_binarios++; //equivalente a num_digitos_binarios = num_digitos_binarios + 1;
  }
  //resultado sai invertido, precisa inverter o número para encontrar resultado

  aux = binario;
  inverso = 0;
  while(num_digitos_binarios){
    resto = aux % 10;
    aux = aux / 10;
    inverso = inverso * 10;
    inverso = inverso + resto;
    num_digitos_binarios--;
  }
  
  binario = inverso;
  printf("Valor em binário= %d\n", binario);

  
  return 0;
}

