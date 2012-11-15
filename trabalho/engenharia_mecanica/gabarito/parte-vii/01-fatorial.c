/*

Escreva um programa para calcular o fatorial de um número. 
Se o usuário digitar um número maior que 13, o programa deve 
exibir uma mensagem dizendo que não é possível 
(pois esse é o valor máximo, com uma variável do tipo inteira).


*/


#include <stdio.h>

int main(){
  int i = 0, n = 0;
  int fatorial = 1;


  printf("Digite um número para cálculo de seu fatorial\n");
  scanf("%d", &n);

  if (n > 13){
    puts("Não é possível calcular o fatorial de um número maior"
         "que 13, com variáveis do tipo inteiro");
    return 1;
  }


  for(i = 2; i <= n; i++){
    fatorial *=  i;
  }
  printf("O fatorial de %d é %d\n", n, fatorial);

}
