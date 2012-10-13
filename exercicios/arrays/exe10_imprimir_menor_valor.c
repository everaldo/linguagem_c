/* Everaldo Gomes - 13/10/2012
 *
 *  Leia uma sequência de números, terminada pela leitura do número 0 e, em seguida, imprima o menor valor encontrado.  
 *
 *
 */
#include <stdio.h>

#define MAX 100

int main(){
  int i, tam = 0;
  int v[MAX];
  int menor = 9999; //inicializamos com 9999. Assumimos que só será digitado no mínimo um número menor que 9999.
                 //caso quiséssemos fazer uma versão à prova dessa restrição podíamos inicializar menor com o valor INT_MAX e incluir a biblioteca limits.h

  puts("Digite os elementos do array, terminando com zero, para encontrarmos o menor valor");

  scanf("%d", &v[tam]);
  while (v[tam] != 0){
    tam++;
    scanf("%d", &v[tam]);
  }



  for(i = 0; i < tam; i++)
    if (v[i] < menor)
      menor = v[i];

  printf("O menor valor encontrado foi %d\n", menor);


  return 0;
}
