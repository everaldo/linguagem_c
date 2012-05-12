/* Everaldo Gomes - 12/05/2012

A imobiliária Imóbilis vende apenas terrenos retangulares.
Faça um algoritmo para ler as dimensões de um terreno e
 depois exibir a área do terreno.

*/

#include <stdio.h>


/*
Esta versão é um pouco mais avançada - não permite que sejam digitados números menores
que 0.0 - mas serve como desafio aos alunos.

A diferença para a versão 3 é que será utilizada uma função para ler as medidas,
diminuindo a repetição de código


*/


float le_medida(char* msg_medida){
  float medida;
  do{
    printf("Digite a %s do terreno (em metros): ", msg_medida);
    scanf("%f", &medida);
  } while ( medida <= 0.0 && printf("A %s do terreno deve ser um número maior que 0\n", msg_medida)); 
  return medida;
}


int main(){
  float largura, profundidade;
  
  puts("***IMOBILIS***\n***CALCULO DA AREA DE UM TERRENO***\n");
  largura = le_medida("largura");
  profundidade = le_medida("profundidade");  

  printf("A area do terreno e de %.2f m2\n", largura * profundidade);

  return 0;
}


