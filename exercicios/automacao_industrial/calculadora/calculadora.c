/* Inclusão de bibliotecas */
#include <stdio.h>

/* Definição de constantes */
#define SOMA 1
#define SUBTRACAO 2
#define MULTIPLICACAO 3
#define DIVISAO 4
#define SAIR 0



/* Programa Principal */

int main(){
/* Declaração de variáveis */
  int operacao, x, y, resultado;
  char cod_operacao[] = { '+', '-' , '*', '/' } ;


  do{
    /* Mensagem ao usuário*/
    puts("****Calculadora****");
    puts("1 - Soma"); 
    puts("2 - Subtração"); 
    puts("3 - Multiplicação"); 
    puts("4 - Divisão"); 
    puts("0 - Sair");

    /* Entrada de dados */
    scanf("%d", &operacao);
    
    if(operacao < 0 || operacao > 4){ //Reimprimir o menu quando a operacao é inválida
      puts("Operação inválida");
      continue;
    }
    if (!operacao){ //mesma coisa que operacao == 0
      return 0;
    }


    puts("Digite os dois operandos");
    scanf("%d %d", &x, &y);



    /* Cálculo (computação) */

    switch (operacao){
      case SOMA:
        resultado = x + y;
        break;
      case SUBTRACAO:
        resultado = x - y;
        break;
      case MULTIPLICACAO:
        resultado = x * y;
        break;
      case DIVISAO:
        if (y) resultado = x / y;
        else puts("Divisao por zero");
    }

          /* Saída de dados (Resultado) */
    if(operacao) printf("%d %c %d = %d\n", x, cod_operacao[operacao - 1] ,y, resultado);
  }while (operacao);

}


