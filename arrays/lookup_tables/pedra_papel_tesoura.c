/* Everaldo Gomes - 17/10/2012
 *
 *
 * Jogo Pedra, Papel ou Tesoura para demonstrar o uso de Lookup Tables
 *
 *
 * Essa técnica consiste em utilizar indireção, através de um array para evitar o uso
 * desnecessário de if-else-if ou switch-case
 *
 *
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PEDRA   0
#define PAPEL   1
#define TESOURA 2

#define GANHOU 2
#define EMPATE 1
#define PERDEU 0

int main(){

  char jogada[][8] = {"Pedra", "Papel", "Tesoura" };
  char mensagem[][7] = { "perdeu", "empate", "ganhou" };
  int resultado[3][3] =
  {
    {EMPATE, PERDEU, GANHOU},
    {GANHOU, EMPATE, PERDEU },
    {PERDEU, GANHOU, EMPATE },
  };

  int num_partidas = 0;
  int score[3] = { 0, 0, 0} ;

  int i, escolha, computador;

  srand(time(NULL));

  puts("****JOGO - PEDRA, PAPEL OU TESOURA***");
  puts("Digite 0 para Pedra, 1 para Papel, 2 para Tesoura ou 3 para Sair do jogo");
  for(;;){ //loop infinito
    printf("Digite: ");
    scanf("%d", &escolha);
    if(escolha > 2){
        break;
    }
    num_partidas++;   
    computador = rand() % 3;
    
    printf("Você jogou %s, o computador escolheu %s\n", jogada[escolha], jogada[computador]);

    printf("Resultado: %s\n", mensagem[resultado[escolha][computador]]);
    score[resultado[escolha][computador]]++;
  }

  puts("Resultado Final");
  printf("Total de Jogos %d\n", num_partidas);
  for(i = 0; i < 3; i++){
    printf("%s %d jogo(s)\n", mensagem[i], score[i]);
  }




  return 0;
}
