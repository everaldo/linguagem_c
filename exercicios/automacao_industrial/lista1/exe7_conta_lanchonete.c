/* Everaldo Gomes - 04/05/2012

Obs.: Verificar nova versão com vetores, enums

O cardápio de uma lanchonete é dado abaixo. 
Escreva um programa para ler a quantidade de cada item comprado
e calcular a conta final.


Hamburger: R$3,00
Cheeseburger: R$4,00
Batatas Fritas: R$3,50
Refrigerantes: R$1,00
Milkshakes: R$1,50

*/

#include <stdio.h>

int main(){

  float custo_hamburger, custo_cheeseburger, 
  custo_fritas, custo_refrigerantes,
  custo_shakes, total;
  int qtd_hamburgers, qtd_cheeseburgers,
  qtd_fritas, qtd_refrigerantes, qtd_shakes;
  custo_hamburger = 3.0;
  custo_cheeseburger = 4.0;
  custo_fritas = 3.5;
  custo_refrigerantes = 1.0;
  custo_shakes = 1.5;
  total = 0.0;

  printf("------CAIXA-------\n");
  printf("Digite quantidade de hamburgeres\n");
  scanf("%d", &qtd_hamburgers);
  printf("Digite quantidade de cheeseburgeres\n");
  scanf("%d", &qtd_cheeseburgers);
  printf("Digite quantidade de batatas fritas\n");
  scanf("%d", &qtd_fritas);
  printf("Digite quantidade de refrigerantes\n");
  scanf("%d", &qtd_refrigerantes);
  printf("Digite quantidade de milk-shakes\n");
  scanf("%d", &qtd_shakes);


  total = custo_hamburger * qtd_hamburgers + 
    custo_cheeseburger * qtd_cheeseburgers
          + custo_fritas * qtd_fritas + 
          custo_refrigerantes * qtd_refrigerantes 
          + custo_shakes * qtd_shakes;

  printf("O custo total foi: %f\n", total);
}



