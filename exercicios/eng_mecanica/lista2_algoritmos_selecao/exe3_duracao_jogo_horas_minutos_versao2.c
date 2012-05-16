/* Everaldo Gomes 16/05/2012

Construa um algoritmo que leia a hora de início
e a hora de término de um jogo ambas
divididas em dois valores distintos: horas e minutos.
Calcular e escrever a duração do jogo também em horas e minutos,
sabendo-se que o tempo máximo de duração do jogo é de 24
horas e que o jogo pode começar em um dia e terminar 
no dia seguinte.


*/

#include <stdio.h>


int main(){
  int hora_inicio, minutos_inicio, hora_termino, minutos_termino, duracao_horas, duracao_minutos;

  puts("Digite a hora seguida dos minutos do inicio da partida");
  scanf("%d %d", &hora_inicio, &minutos_inicio);
  puts("Digite a hora seguida dos minutos do término da partida");
  scanf("%d %d", &hora_termino, &minutos_termino);

  duracao_horas = 0;
  duracao_minutos = 0;




  if (hora_termino > hora_inicio){ //se o jogo terminou no mesmo dia
    duracao_horas = hora_termino - hora_inicio;
  }
  else{
    if (minutos_termino < minutos_inicio)
      duracao_horas = hora_termino + (24 - hora_inicio);
    else
      duracao_horas = 0;
  }

  if (minutos_termino >= minutos_inicio){
    duracao_minutos = minutos_termino - minutos_inicio;
  }
  else{
    duracao_minutos = 60 - (minutos_inicio - minutos_termino);
    duracao_horas = duracao_horas - 1;
  }
  printf("O jogo durou %d horas e %d minutos\n", duracao_horas, duracao_minutos);

  return 0;
}
