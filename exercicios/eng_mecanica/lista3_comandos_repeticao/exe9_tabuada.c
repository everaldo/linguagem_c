/* Everaldo Gomes - 14/06/2012

9) Escrever um algoritmo que leia 20 valores para uma variável n e, para cada um
deles, calcule a tabuada de 1 até n. Mostre a tabuada na forma:
1xn=n
2 x n = 2n
3 x n = 3n
.......
n x n = n2


*/

#include <stdio.h>

//#define TAM 20
//A leitura de 20 números toma muito tempo e dificulta a conferência da correção
//do algoritmo - logo testamos com apenas 4 valores
#define TAM 4



int main(){
  int i, j, n;  


  for(i = 0; i < TAM; i++){
    printf("Digite um número para o cálculo de sua tabuada de 1 a n x n\n");
    scanf("%d", &n);
    for(j = 1; j <= n; j++){
      printf("%d x %d = %d\n", j, n, j * n);

    }

  }


  return 0;
}

