/* Everaldo Gomes - 31/05/2012 

Calculadora

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

    if(operacao == 1){
      scanf("%d %d", &x, &y);
     resultado = x + y;
    } else if(operacao == 2){
     scanf("%d %d", &x, &y);
     resultado = x - y;
   } else if(operacao == 3){
     scanf("%d %d", &x, &y);
     resultado = x * y;
   } else if(operacao == 4){
     scanf("%d %d", &x, &y);
     if (y) resultado = x / y;
     else puts("Divisao por zero");
   } else if(operacao == 0){
     return 0;
   }
    
    if(operacao) printf("Resultado = %d\n", resultado);

  } while (operacao != 0);



  /* Leitura dos operandos*/
 

  /* Execução da operação (cálculo)*/


  /* Impressão do resultado */

  return 0;
}

