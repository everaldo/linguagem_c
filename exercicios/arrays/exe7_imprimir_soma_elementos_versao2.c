/* Everaldo Gomes - 13/10/2012
 *
 *   Leia uma sequência de números, terminada pela leitura do número -1 e, em seguida, imprima a soma de todos os elementos 
 *
 *
 */
#include <stdio.h>

#define MAX 100

int main(){
  int i, tam = 0;
  int v[MAX];
  int soma = 0; //inicializa a soma

  puts("Digite os elementos do array");

  scanf("%d", &v[tam]);
  while (v[tam] != -1){
    tam++;
    scanf("%d", &v[tam]);
    soma += v[tam];
  }


  if (tam) puts("Imprimindo...");

  printf("A soma dos elementos do array é %d\n", soma);

  return 0;
}

//Nesta versão a soma dos elementos é realizada no mesmo loop (laço) em que o elemento é lido


