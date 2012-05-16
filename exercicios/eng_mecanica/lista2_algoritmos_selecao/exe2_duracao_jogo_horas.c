/* Everaldo Gomes - 16/05/2012

Construa um algoritmo que leia a hora de início de
um jogo e a hora de término
(considerando apenas horas inteiras),
 calcule e mostre a duração do jogo em horas,
 sabendo-se que o tempo máximo de duração do
 jogo é de 24 horas e que o jogo pode começar em um
dia e terminar no dia seguinte.


*/

#include <stdio.h>


int main(){
  int hora_inicio, hora_termino, duracao;

  puts("Digite a hora de inicio da partida");
  scanf("%d", &hora_inicio);
  puts("Digite a hora de término da partida");
  scanf("%d", &hora_termino);

  if (hora_termino > hora_inicio) //se o jogo terminou no mesmo dia
    duracao = hora_termino - hora_inicio;
  else //jogo que inicia num dia e termina no outro
    duracao = hora_termino + (24 - hora_inicio);

  printf("O jogo durou %d horas\n", duracao);

  return 0;
}
