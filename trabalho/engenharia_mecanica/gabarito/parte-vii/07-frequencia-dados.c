/*  Desejamos verificar se um dado é viciado 
 *  (na verdade vamos apenas simular ;) ). 
 *  Escreva um programa que realize 600.000 lançamentos de dados 
 *  e conte as frequências de cada face. Use a geração de números aleatórios. 
 *  Lembre-se que o dado possui 6 faces, de 1 a 6. 
 *  Imprima a frequência de ocorrência de cada face do dado, 
 *  em forma de porcentagem com duas casas de precisão.
 *  */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int i, freq[6], r;

  srand(time(NULL));
  for(i = 0; i < 6; i++){
    freq[i] = 0;
  }
  for(i = 0; i < 600000; i++){
    r = (rand() % 6) + 1;
    freq[r - 1]++;
  }

  for(i = 0; i < 6; i++){
    printf("Face %d ocorreu %.2f %%\n", i + 1, 100.0 * (freq[i]/(float)600000));
  }
  return 0;
}
