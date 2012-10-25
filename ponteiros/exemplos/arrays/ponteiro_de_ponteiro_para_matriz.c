#include <stdio.h>

#define MAX 100

int main(void){
  int m[MAX][MAX], i, j, n;
  int** p;

  puts("Digite o número de linhas de uma matriz n x n" );
  scanf("%d", &n);

  p = (int **) m; //p é um ponteiro de ponteiros. Uma matriz pode ser representada como um vetor de ponteiros. P aponta para o início do matriz
  puts("Digite os elementos da matriz");
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      printf("elemento (%d,%d): ", i, j);
      scanf("%d", ((int *)p + (i * MAX) + j)); //mesma coisa que &p[i][j] ou &m[i][j]
    }
  }

  puts("Imprimindo o vetor com aritmética de ponteiros");
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      printf("%d ", *((int *) p + (i * MAX) + j)); // a mesma coisa que p[i][j] ou v[i][j]
    }
    puts("");
  }

  puts("Imprimindo o vetor com a notação tradicional");
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      printf("%d ", m[i][j]); // a mesma coisa que p[i][j] ou v[i][j]
    }
    puts("");
  }


  puts("");



  return 0;
}

/* Observações:
 *
 *  utilizamos o ponteiro de ponteiros p para demonstrar que m é um vetor de ponteiros.
 *
 *  As seguintes operações são equivalentes:
 *
 *
 *  v     <--->   &v[0][0]
 *  v[i][j]  <--->  *((int *) v + (i * MAX) + j)
 *  &v[i][j] <--->   ((int *) v + (i * MAX) + j)
 *
 *
 */

