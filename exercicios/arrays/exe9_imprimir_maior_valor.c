/* Everaldo Gomes - 13/10/2012
 *
 * Leia uma sequência de números, terminada pela leitura do número 0 e, em seguida, imprima o maior valor encontrado. 
 *
 *
 */
#include <stdio.h>

#define MAX 100

int main(){
  int i, tam = 0;
  int v[MAX];
  int maior = 0; //inicializamos com zero. Assumimos que só serão digitados números positivos.
                 //caso quiséssemos ler números negativos podíamos inicializar maior com o valor INT_MIN e incluir a biblioteca limits.h

  puts("Digite os elementos do array, terminando com zero, para encontrarmos o maior valor");

  scanf("%d", &v[tam]);
  while (v[tam] != 0){
    tam++;
    scanf("%d", &v[tam]);
  }



  for(i = 0; i < tam; i++)
    if (v[i] > maior)
      maior = v[i];

  printf("O maior valor encontrado foi %d\n", maior);


  return 0;
}
