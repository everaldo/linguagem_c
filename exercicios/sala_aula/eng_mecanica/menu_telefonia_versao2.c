/* Everaldo Gomes - 16/05/2012

Exercício resolvido em sala de aula
(Eng. Mecânica - 14/05/2012 - 13h50 às 17h30)


Durante a revisão para a prova, em relação à dúvidas de alguns alunos
sobre o uso da estrutura switch/case, foi proposto um
exemplo sobre um menu de atendimento ao usuário de
uma operadora telefonia (analogia).

Obs.: Confira as novas versões para acompanhar a 
evolução do exercício

*/


#include <stdio.h>

/*
Segunda versão: uso de switch case

*/
int main(){
  int opcao;
  puts("Tecle a opcao desejada:");
  puts("0 - Assinar Internet Banda larga");
  puts("1 - Falar com um(a) atendente");
  scanf("%d", &opcao);

  switch(opcao){ /* lembrete: switch-case só funciona para valores inteiros */

  case 0:  
    puts("Voce sera encaminhado para o departamento de novas assinaturas");
    break; //sem o break continua executando até o final
  case 1:  
    puts("Aguarde 40 minutos na linha para falar com um de nossos atendentes");
    break;
  default: // se não for 0 nem 1 executa default
    puts("Opcao invalida");
  }
  return 0;
}

