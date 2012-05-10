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

  int doente, doenca_fatal, malvado;

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

  printf("Responda 1 para sim ou 0 para não\n");

  printf("Você está doente?\n");
  scanf("%d", &doente);
  printf("Você vai morrer?\n");
  scanf("%d", &doenca_fatal);
  printf("Você vai para o inferno?\n");
  scanf("%d", &malvado);
  
  if (doente && doenca_fatal && malvado){
    printf("Você estava doente, morreu e foi para o inferno. Cumprimente os velhos amigos.\n");
  }
  printf("Não há com que se preocupar\n");

}
/*
Esta versão simplifica o código, utilizando apenas um comando if com uma expressão booleana
que avalia ao mesmo tempo se a pessoa estava doente, morreu e se foi para o inferno.

É importante notar que, apesar do código mais simples, a interação com o usuário foi
prejudicada, porque se o usuário não está doente não teria por que perguntar se ele vai morrer.

Logo, a versão anterior possui uma interface mais amigável.

Mas pedir que o usuário digite 1 ou 0 para "sim" ou "não" ainda não é o comportamento mais adequado.

Reflita.
*/






