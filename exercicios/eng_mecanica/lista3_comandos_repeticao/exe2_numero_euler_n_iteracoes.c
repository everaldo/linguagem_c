/* Everaldo Gomes - 28/05/2012


Escrever um algoritmo que lê um valor N inteiro
e positivo e que calcula e 
escreve o valor de E.  

E = 1 + 1 / 1! + 1 / 2! + 1 / 3! +  ... + 1 / N!


Mais informações sobre o número de Euler:

http://pt.wikipedia.org/wiki/N%C3%BAmero_de_Euler


Valor aproximado: 2,71828182845904523530287

*/

#include <stdio.h>

int main(){
  double e, fat;
  int i, j, n;

  printf("Digite um número n para cálculo do número de Euler\n");
  scanf("%d", &n);

  e = 1.0;
  for(i = 1; i <= n; i++){
    //calculo de i!
    fat = 1.0;
    for(j = 2; j <= i; j++)
      fat = fat * j;
    e = e + (1.0 / fat);
  }
  printf("O valor de e eh = %.10lf\n", e); //lf = long float = para imprimir com precisão dupla e 10 casas decimais

  return 0;
}

/*
Obs.:

A partir de n = 15 o resultado não se altera. Ele "converge" para
e = 2.7182818285

porque a precisão do tipo double é de 10 casas decimais.

Lembrando que o número de euler é um número irracional .

*/

