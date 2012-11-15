/*
Escreva uma função que receba dois argumentos do tipo inteiro (int)
e realize a troca desses dois valores.
O tipo de retorno da função é void. Use passagem de parâmetros por referência.

*/

void troca(int *x, int *y){
  int temp = *x;
  *x = *y;
  *y = temp;
}
