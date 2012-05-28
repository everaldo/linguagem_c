/* Everaldo Gomes - 28/05/2012

Em uma eleição presidencial existem quatro candidatos. Os votos são informados 

através de códigos. Os dados utilizados para a contagem dos votos obedecem à 

seguinte codificação:  

- 1,2,3,4 = voto para os respectivos candidatos;

- 5 = voto nulo;

- 6 = voto em branco;

Elabore um algoritmo que leia o código do candidado em um voto. 

Calcule e escreva:

a) Total de votos para cada candidato;

b) Total de votos nulos;

c) Total de votos em branco;

Como finalizador do conjunto de votos, tem-se o valor 0.

*/

#include <stdio.h>

int main(){
  int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0, nulos = 0, brancos = 0, voto;

  printf("Entre com uma sequência de votos terminada pelo número 0\n");
  voto = 1;

  while(voto != 0){
    scanf("%d", &voto);
    if(voto == 1) candidato1++;
    else if(voto == 2) candidato2++;
    else if(voto == 3) candidato3++;
    else if(voto == 4) candidato4++;
    else if(voto == 5) nulos++;
    else if(voto == 6) brancos++;
  }
  
  puts("-----Contagem dos votos-------");
  printf("Candidato1 = %d\n", candidato1);
  printf("Candidato2 = %d\n", candidato2);
  printf("Candidato3 = %d\n", candidato3);
  printf("Candidato4 = %d\n", candidato4);
  printf("Votos nulos = %d\n", nulos);
  printf("Votos brancos = %d\n", brancos);

  return 0;
}
/*
Obs.:

O enunciado não considera que qualquer voto diferente seja nulo
então se houver um voto == 7, por exemplo, ele não será contado.

*/


