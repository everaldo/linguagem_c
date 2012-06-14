/* Everaldo Gomes - 14/06/2012

8) Faça um algoritmo que receba a idade e o peso de 100 pessoas, calcule e mostre:
- A quantidade de pessoas com mais de 90 quilos;
- A média das idades das pessoas.

*/

#include <stdio.h>


//#define PESSOAS 100
//A leitura de 100 valores toma muito tempo e dificulta a conferência da correção
//do algoritmo - logo testamos com apenas 4 valores
#define  PESSOAS 4


int main(){
  int acima_90kgs, idade, i;
  float peso, media_idade;

  acima_90kgs = 0;
  media_idade = 0;

  printf("Digite a idade e o peso de %d pessoas\n", PESSOAS);

  for(i = 1; i <= PESSOAS; i++){
    printf("Digite a idade e o peso da pessoa numero %d\n", i);
    scanf("%d %f", &idade, &peso);
    if (peso > 90) acima_90kgs++;
    media_idade += idade;
  }
  media_idade = media_idade /(float) PESSOAS;

  printf("Existem %d pessoas com peso acima de 90kgs\n", acima_90kgs);
  printf("E a media de idade de todas as pessoas eh %.2f\n", media_idade);

  return 0;
}


