/* Everaldo Gomes - 12/05/2012

A imobiliária Imóbilis vende apenas terrenos retangulares.
Faça um algoritmo para ler as dimensões de um terreno e
 depois exibir a área do terreno.

*/

#include <stdio.h>


/*
Esta versão é um pouco mais avançada - não permite que sejam digitados números menores
que 0.0 - mas serve como desafio aos alunos.

*/

int main(){
  float largura, profundidade;
  
  puts("***IMOBILIS***\n***CALCULO DA AREA DE UM TERRENO***\n");
  printf("Digite a largura do terreno (em metros): ");
  do{
    scanf("%f", &largura);
  } while ( largura <= 0.0 && puts("A largura do terreno deve ser um número maior que 0")); 
  printf("Digite a profundidade do terreno (em metros): ");
  do{
    scanf("%f", &profundidade);
  } while ( profundidade <= 0.0 && puts("A profundidade do terreno deve ser um número maior que 0"));

  printf("A area do terreno e de %.2f m2\n", largura * profundidade);

  return 0;
}


