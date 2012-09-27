/* Everaldo Gomes - 14/05/2012


Exercício resolvido em sala de aula 
(Eng. Mecânica - 14/05/2012 - 13h50 às 17h30)

- Exercício número 1 da lista 3 - Comandos de Repetição

Ler números inteiros do teclado e calcular 
a soma dos que forem pares. A leitura 
deve parar quando o valor 0 (zero) for digitado

*/

#include <stdio.h>

int main(){

  int n, soma;

  soma = 0;
  scanf("%d",&n);
  while( n != 0){ //soma números pares até ler o número zero
    if (n % 2 == 0) //se o resto da divisão por 2 é igual a zero o número é par
      soma += n; //não precisa colocar { e } porque é apenas um comando
    scanf("%d", &n); //leia o próximo número
  }
  printf("%d\n", soma);

  return 0;
}
