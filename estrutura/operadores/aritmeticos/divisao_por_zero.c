/* Everaldo Gomes - 24/05/2012 */

#include <stdio.h>

int main(){

  printf("%d\n", 1 / 0);    // Impossível dividir por zero
  //printf("%d\n", 1 % 0);  //O operador módulo % também não aceita zero como operando
  printf("Esta instrução nunca será executada - isso não será escrito na tela\n");


/*
gera warning (aviso na compilação)
e erro em tempo de execução - programa termina e não executa
as próximas instruções

*/
                    

}
