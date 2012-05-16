/* Everaldo Gomes - 16/05/2012

Construa um algoritmo que leia a duração de
um evento expressa em um número de
segundos e mostre-a expressa em horas,
minutos e segundos


1 minuto = 60 segundos
1 hora = 60 minutos = 3600 segundos

*/

#include <stdio.h>

int main(){
  int duracao, horas, minutos, segundos;

  puts("Digite a duração do evento em segundos");
  scanf("%d", &duracao);

  horas = duracao / 3600;
  duracao = duracao % 3600;
  minutos = duracao / 60;
  segundos = duracao % 60;

  printf("O evento durou %02d:%02d:%02d\n", horas, minutos, segundos);

  return 0;
}
/*
Observações:

- %02d - para imprimir com no mínimo duas casas decimais e completar com zeros




*/



