/*

Escreva um programa que simule uma calculadora: imprima um menu com as operações disponíveis.
Depois, leia os operandos, caso a operação escolhida não tenha sido SAIR,
e realize o cálculo escolhido pelo usuário. Imprima o resultado, 
mas evite os casos de divisão por zero. 
O programa só acaba quando o usuário digitar a opção 0.
Se ele digitar uma opção inválida, exiba na 
tela a mensagem "Opção inválida" e imprima novamente o menu.

Operações:

1 - Soma

2 - Subtracao

3 - Multiplicacao

4 - Divisao

0 - Sair

*/

#include <stdio.h>

int main(){
  /* Declaração de variáveis */
  int x, y, resultado, operacao;


  do{
    puts("****Calculadora****");
    puts("1 - Soma"); 
    puts("2 - Subtração"); 
    puts("3 - Multiplicação"); 
    puts("4 - Divisão"); 
    puts("0 - Sair");
 

    scanf("%d", &operacao);

    if(operacao <= 0 || operacao > 4){
     return 0;
    }

    /* Leitura dos operandos*/
    puts("Digite os dois operandos");
    scanf("%d %d", &x, &y);

    /* Execução da operação (cálculo)*/
    switch (operacao){
      case 1:
        resultado = x + y;
        break;
      case 2:
        resultado = x - y;
        break;
      case 3:
        resultado = x * y;
        break;
      case 4:
        if (y) resultado = x / y;
        else {
          puts("Divisao por zero");
          continue;
        }
    }
    /* Impressão do resultado */
    if(operacao) printf("Resultado = %d\n", resultado);

  } while (operacao != 0);

  return 0;
}
