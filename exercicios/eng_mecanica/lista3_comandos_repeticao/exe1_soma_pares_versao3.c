/* Everaldo Gomes - 14/05/2012


- Exercício número 1 da lista 3 - Comandos de Repetição

Ler números inteiros do teclado e calcular 
a soma dos que forem par. A leitura 
deve parar quando o valor 0 (zero) for digitado

versão 3

*/

#include <stdio.h>

int main(){

  int n, soma;

  soma = 0;
  n = 1; //inicializa n com 1 apenas para entrar no loop, evitando usar dois comandos scanf

  while( n != 0){ //soma números pares até ler o número zero
    scanf("%d", &n);
    if (n % 2 == 0) //se o resto da divisão por 2 é igual a zero o número é par
      soma += n; //não precisa colocar { e } porque é apenas um comando
  }
  printf("%d\n", soma);

  return 0;
}
