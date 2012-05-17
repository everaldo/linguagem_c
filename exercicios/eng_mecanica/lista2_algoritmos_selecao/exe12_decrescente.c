/* Everaldo Gomes - 16/05/2012

Construa um algoritmo que leia 3 valores
inteiros em ordem crescente e um quarto número não
necessariamente na ordem . Mostre os 4 números em ordem decrescente.

*/

#include <stdio.h>


int main(){
  int a, b, c, d;

  printf("Digite 3 valores em ordem crescente e um quarto"
         " não necessariamente nesta ordem\n");
  scanf("%d %d %d %d", &a, &b, &c, &d);

  if (d > c){
    printf("%d %d %d %d\n",d,c,b,a);
  }
  else if (d > b){
    printf("%d %d %d %d\n",c,d,b,a);
  }
  else if ( d > a){
    printf("%d %d %d %d\n",c,b,d,a);
  }
  else{
    printf("%d %d %d %d\n",c,b,a,d);
  }
  return 0;
}
