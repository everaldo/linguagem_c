/* Everaldo Gomes - 12/05/2012

Faça um algoritmo para calcular quantas ferraduras 
são necessárias para equipar todos os cavalos comprados para um haras.


*/

#include <stdio.h>

int main(){

  int ferraduras, cavalos;
  printf("Quantos cavalos o haras possui?\n");
  scanf("%d", &cavalos);

  ferraduras = cavalos * 4 ; //cada cavalo precisa de quatro ferraduras, 
                             //uma para cada pata 


  printf("Serão necessárias %d ferraduras\n", ferraduras);



}


