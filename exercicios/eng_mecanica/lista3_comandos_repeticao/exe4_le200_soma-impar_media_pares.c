/* Everaldo Gomes - 28/05/2012

Ler 200 números inteiros e calcular a soma dos que forem ímpares e a média dos 
pares.

*/

#include <stdio.h>

//#define TAM 200
//A leitura de 200 números toma muito tempo e dificulta a conferência da correção
//do algoritmo - logo testamos com apenas 10 valores
#define TAM 10

int main(){
  int soma, i, n, num_pares;
  float media = 0.0;  

  soma = 0;
  num_pares = 0;
  for(i=0; i < TAM; i++){
    scanf("%d", &n);
    if (n % 2){//número é ímpar
      soma += n;    
    }
    else{ //par
      media += n;
      num_pares++;
    }
  }
  if (num_pares) media = media / (float)num_pares ;
  printf("A soma dos ímpares é %d\n", soma);
  printf("A média dos pares é %.2f\n", media);

  return 0;
}
