/*Escreva um programa que gere aleatoriamente Um número entre 0 e 99. 
 * O usuário deve adivinhar qual é este número, mas ele tem somente 5 tentativas. 
 * Se ele conseguir, imprima "venceu". Senão, imprima "perdeu, tente novamente". 
 * A cada tentativa mal-sucedida, o programa deve imprimir uma dica. 
 * Se o número gerado for maior que o palpite, 
 * imprima "o número que eu pensei é maior". 
 * Senão, imprima "o número que eu pensei é menor".*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
  int segredo, palpite, num_tentativas = 0;

  srand(time(NULL)); //semente do número aleatório - para cada vez gerar um valor diferente. Utiliza a hora atual como semente

  segredo = rand() % 100; //A função rand() gera um número entre 0 e RAND_MAX. Módulo 100 permite que este número
  // seja transformado em outro entre 0 e 99
  do{
    num_tentativas++;
    printf("Entre com um numero entre 0 e 99: ");
    scanf("%d", &palpite);
    if (palpite > segredo)
      printf("/O número que eu pensei é menor!\n");
    else if (palpite < segredo)
      printf("O número que eu pensei é maior!\n");
  }while ( palpite != segredo && num_tentativas < 5);

  if (num_tentativas < 5){
    printf("\n Acertou! O segredo era %d\n", segredo);
  }
  else{
    printf("Perdeu, tente novamente. O segredo era %d\n", segredo);
  }
}
