/* Everaldo Gomes - 17/05/2012

Construa um algoritmo que mostre o menu de opções a
seguir, receba a opção do usuário e
os dados necessários para executar cada operação.

Menu de opções:

1 – Somar dois números

2 – Raiz quadrada de um número

Digite a opção desejada:


*/

#include <stdio.h>
#include <math.h> //compilar com -lm


int main(){
  int opcao, x, y;
  float raiz_quadrada;

  puts("Menu de opções:");
  puts("1 - Somar dois números");
  puts("2 - Raiz quadrada de um número");
  puts("Digite a opção desejada:");
  scanf("%d", &opcao);

  if (opcao == 1){
    printf("Digite os dois números\n");
    scanf("%d %d", &x, &y);
    printf("A soma é %d\n", x + y);
  } else if (opcao == 2){
    printf("Digite o número\n");
    scanf("%d", &x);
    printf("A raiz quadrada é %.4f\n", sqrt(x));
  }
  else
    puts("Opção inválida");

  return 0;
}
