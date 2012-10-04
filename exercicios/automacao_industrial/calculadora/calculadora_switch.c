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

    if(operacao <= 0 || operacao > 4){
     return 0;
    }

    puts("Digite os dois operandos");
    scanf("%d %d", &x, &y);

    switch(operacao){

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
        else puts("Divisao por zero");
        break;
      default:
        puts("Operacao invalida");    
    }  
    if(operacao) printf("Resultado = %d\n", resultado);

  } while (operacao != 0);



  /* Leitura dos operandos*/
 

  /* Execução da operação (cálculo)*/


  /* Impressão do resultado */

  return 0;
}

