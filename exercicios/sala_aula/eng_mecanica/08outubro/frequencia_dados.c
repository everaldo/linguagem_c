/* Everaldo Gomes - 08/10/12
 *
 * Verifique se um dado é viciado:
 *
 * Realize 600.000 lançamentos e conte as frequências.
 *
 * Imprimir a frequência de ocorrência de cada face do dado
 *
 * (primeira versão)
 */


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
    printf("Face %d ocorreu %.4f %%\n", i + 1, 100.0 * (freq[i]/(float)600000));
  }
  return 0;
}
