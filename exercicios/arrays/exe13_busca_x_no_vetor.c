/* Everaldo Gomes 13/10/2012
 *
 *  Leia uma sequência de n números e armazene-os em um array. 
 *  Após, leia um valor x e realize uma busca no vetor.
 *  Imprima a posição de x (somente a primeira posição, no caso de múltiplas ocorrências)
 *  ou "o valor não foi encontrado".
 */

#include <stdio.h>

#define MAX 10


int main(){
  int v[MAX] ;
  int i, n, x, pos;

  puts("Digite o tamanho da sequencia de números");
  scanf("%d", &n);

  puts("Digite os números");
  for(i = 0; i < n ; i++)
    scanf("%d", &v[i]);


  puts("Digite o valor x que deseja buscar no vetor");
  scanf("%d", &x);

  pos = n;
  for(i = 0; i < n; i++){
    if (v[i] == x){
      pos = i;
      break; //termina a busca, posição de x foi encontrada
    }
  }


  if (pos == n) puts("O valor não foi encontrado");
  else printf("x está na posição %d\n", pos);

  return 0;
  
}
