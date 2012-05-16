/* Everaldo Gomes - 16/05/2012

Construa um algoritmo que leia 3 valores inteiros
 e mostre-os em ordem crescente.


*/

#include <stdio.h>


int main(){
  int a, b, c, n1, n2, n3;

  printf("Digite três números inteiros\n");
  scanf("%d %d %d", &a, &b, &c);


  if (a <= b){
    if (a <= c){
      n1 = a;
      if (b <= c){
        n2 = b;
        n3 = c; //a, b, c
      } else {
        n2 = c;
        n3 = b; //a, c,b
      }
    } else{
      n1 = c;
      n2 = a;
      n3 = b; //c, a, b
    }
  }
  else{
    if (b <= c){
      n1 = b;
      if (c <= a){
        n2 = c;
        n3 = a; //b, c, a
      } else{
        n2 = a;
        n3 = c; //b, a, c
      }
    } else{
      n1 = c;
      n2 = b;
      n3 = a; //c, b, a
   }
  } 

  printf("A ordem crescente é %d  %d  %d\n", n1, n2, n3);


}
