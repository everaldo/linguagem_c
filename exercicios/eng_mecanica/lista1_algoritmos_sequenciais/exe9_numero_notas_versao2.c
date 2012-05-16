/* Everaldo Gomes - 16/05/2012


Construa um algoritmo que leia um valor
em reais e calcule o menor número de notas de
100, 50, 20, 10, 5 e 1 que o valor pode ser
 decomposto. Escrever a relação das notas.

*/
#include <stdio.h>


/* Esta é uma versão que utiliza recursos "mais avançados": vetores */
/* A vantagem é que há menos repetição de código e a solução
   se torna mais genérica - facilitando inclusão de novos valores -
   por exemplo - notas de 2 reais */
int main(){
  int i, valor;
  int notas[6] = {0, 0, 0, 0, 0, 0} ;
  int valores_notas[6] = {100, 50, 20, 10, 5 , 1};

  printf("Digite um valor em reais\n");
  scanf("%d", &valor);

  puts("O menor número possível de notas é:");
  for(i = 0; i < 6 ; i++){
    notas[i] = valor / valores_notas[i];
    valor %= valores_notas[i];
    printf("%02d notas de %d\n", notas[i], valores_notas[i]);
  }
  return 0;
}
/*
Observações:

O maior número de notas de   1 será 4;
O maior número de notas de   5 será 1;
O maior número de notas de  10 será 1;
O maior número de notas de  20 será 2;
O maior número de notas de  50 será 1;



*/

