#include <stdio.h>

#define MAX 100

int main(){
  int v[MAX], i, n = 0;
  int posicao;
  int x; //elemento x a ser inserido

  puts("**Insere um elemento em um vetor, pelo índice**");

  puts("Digite o tamanho do vetor");
  scanf("%d", &n);

  puts("Digite os elementos do vetor");
  for(i = 0; i < n; i++){
    scanf("%d", &v[i]);
  }

  printf("Digite o valor do elemento x que deseja buscar\n");
  scanf("%d", &x); 

  posicao = n;

  for(i = 0; i < n; i++){
    if (v[i] == x){
      posicao = i;
      break; //termina a busca, posição de x foi encontrada
    }
  }


  if (posicao == n) puts("O valor não foi encontrado");
  else printf("x está na posição %d\n", posicao);


  puts("Imprimindo vetor destacando posição de x");
  for(i = 0; i < n; i++){
    if (i != posicao) printf("%d ", v[i]);
    else              printf("**%d** ", v[i]);
  }
  puts("");

  return 0;
}
