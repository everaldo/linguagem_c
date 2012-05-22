/* Everaldo Gomes - 22/05/2012

Conversão de decimal para binário

versão 3 - conversão por soma de potências

Usa biblioteca matemática


Ex.:

25 ==> 11001 = 16 + 8 + 1 = 25

Obs.:

Só funciona até 1023 e para valores positivos

*/

#include <stdio.h>
#include <math.h> //compilar com -lm

int main(){
  int decimal, binario, aux_bin, i, aux, expoente, pot2;

  puts("Digite um número decimal para conversão em base binária");
  scanf("%d",&decimal);
  aux = decimal;
  binario = 0;

  while(aux != 0){
    expoente = floor(log2(aux));
    pot2 = pow(2, expoente);
    
    aux = aux - pot2;
    aux_bin = pow(10, expoente);

    binario += aux_bin;
  }

  printf("Valor em binário= %d\n", binario);

  
  return 0;
}

