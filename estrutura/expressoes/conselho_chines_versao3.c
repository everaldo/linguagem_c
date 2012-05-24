/* Everaldo Gomes - 10/05/2012

Conselho Chinês:

Há apenas duas coisas com que você deve se preocupar:
se você está bem ou se está doente.
Se você está bem, não há nada com que se preocupar.
Se você está doente, há duas coisas com que se preocupar:
se você vai se curar ou se vai morrer.
Se você vai morrer, há duas coisas com que se preocupar:
se você vai para o céu ou para o inferno.
Se vai para o céu, não há nada com que se preocupar.
Agora, se você vai para o inferno, estará tão ocupado em
cumprimentar velhos amigos que nem terá tempo de se preocupar.
Então, para que se preocupar?

*/

#include <stdio.h>



int main(){

  char doente, doenca_fatal, malvado;

  //Apesar de estar dividida em múltiplas linhas o texto abaixo forma apenas uma string!!!
  printf("Há apenas duas coisas com que você deve se preocupar:\n"
          "se você está bem ou se está doente.\n"
          "Se você está bem, não há nada com que se preocupar.\n"
          "Se você está doente, há duas coisas com que se preocupar:\n"
          "se você vai se curar ou se vai morrer.\n"
          "Se você vai morrer, há duas coisas com que se preocupar:\n"
          "se você vai para o céu ou para o inferno.\n"
          "Se vai para o céu, não há nada com que se preocupar.\n"
          "Agora, se você vai para o inferno, estará tão ocupado em\n"
          "cumprimentar velhos amigos que nem terá tempo de se preocupar.\n"
          "Então, para que se preocupar?\n\n");

  printf("Responda s para sim ou n não\n");

  printf("Você está doente?\n");
  doente = getchar();
  while (getchar() != '\n'); /* limpa o buffer - necessário quando se lê 1 char */
  if (doente == 's') {
    printf("Você vai morrer?\n");
    doenca_fatal = getchar();
    while (getchar() != '\n');
    if (doenca_fatal == 's'){
        printf("Você vai para o inferno?\n");
        malvado = getchar();
        while (getchar() != '\n');
        if (malvado == 's'){
          printf("Você estava doente, morreu e foi para o inferno. Cumprimente os velhos amigos.\n");
        }
    }
  }
  printf("Não há com que se preocupar.\n");
}
