/*
Escreva uma função que receba dois argumentos do tipo inteiro (int) e compara-os.
O nome da função é "compara" e o tipo de retorno é inteiro (int). 
Se os dois números são iguais, a função deve retornar zero. 
Se o primeiro argumento é menor que o segundo, a função retorna -1. 
Senão, se o primeiro argumento for maior que o segundo, a função retorna 1.
*/

int compara(int x, int y){
  if(x < y)   return -1;
  if(x == y)  return 0;
  else        return 1;
}
