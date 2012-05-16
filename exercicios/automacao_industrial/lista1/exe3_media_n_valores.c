/* Everaldo Gomes - 04/05/2012


Escreva um programa para calcular a média de um 
conjunto de valores numéricos. O programa deve ler 
os valores um a um, acumular os valores lidos e
calcular a média do número de valores lidos.

Ex. n = 3

4
5
6
media =  5.00

Ex2. n = 4

2
4
6
8
media = 5.00


*/

#include <stdio.h>

int main(){
  int i, n, total;
  float media = 0.0;

  printf("Digite o número de valores\n");
  scanf("%d", &total);
  for(i = 0; i < total; i++){
    printf("Digite o %d número:", i + 1);
    scanf("%d", &n);
    media += n;
  }
  if (total) printf("Média = %.2f\n", media / total);

}
