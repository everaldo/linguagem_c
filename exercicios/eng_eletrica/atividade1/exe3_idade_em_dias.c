/* Everaldo Gomes - 12/05/2012

Escreva um algoritmo para ler o nome e a idade de uma pessoa,
 e exibir quantos dias de vida ela possui. Considere sempre 
anos completos, e que um ano possui 365 dias. 
Ex: uma pessoa com 19 anos possui 6935 dias de vida; 
veja um exemplo de saída:

MARIA, VOCÊ JÁ VIVEU 6935 DIAS


*/
#include <stdio.h>

#define TAM_NOME 80

int main(){

  /* é necessário colocar "+1" para armazenar o caracter
    terminador de strings '\0' */
  char nome[TAM_NOME + 1];
  int anos, dias;

  printf("Qual seu nome?\n");
  scanf("%s", nome);
  printf("Qual sua idade %s?\n",nome);
  scanf("%d", &anos); 

  dias = anos * 365; //cada ano tem 365 dias, desconsideramos anos bissextos

  printf("%s, você já viveu %d dias\n", nome,  dias);



  return 0; //retorno sucesso
}

