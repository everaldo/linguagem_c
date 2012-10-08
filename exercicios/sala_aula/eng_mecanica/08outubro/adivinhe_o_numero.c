/* Everaldo Gomes - 08/10/2012 
 *
 * Um número entre 0 e 99 é gerado aleatoriamente
 *
 * O usuário deve adivinhar qual é este número.
 * */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
  int segredo, palpite;

  srand(time(NULL)); //semente do número aleatório - para cada vez gerar um valor diferente. Utiliza a hora atual como semente

  segredo = rand() % 100; //A função rand() gera um número entre 0 e RAND_MAX. Módulo 100 permite que este número
                          // seja transformado em outro entre 0 e 99
  do{
    printf("Entre com um numero entre 0 e 99: ");
    scanf("%d", &palpite);
    if (palpite > segredo)
      printf("\n Eh menor!\n");
    else if (palpite < segredo)
      printf("\n Eh maior!\n");
  }while ( palpite != segredo);
  printf("\n Acertou! O segredo era %d\n", segredo);
}
