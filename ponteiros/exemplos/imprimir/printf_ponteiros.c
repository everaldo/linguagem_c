#include <stdio.h>

/*
    Compile e depois execute várias vezes este programa.
    Observe que o endereço de x muda a cada vez.
    Se x tiver o mesmo endereço, trata-se apenas de coincidência.
    Mas a chance disso acontecer é muito baixa.


    O operador &x, retorna o endereço de x.

    O endereço de uma variável é a localização da memória onde seu valor é armazenado.

    Não é possível saber o endereço de uma variável em tempo de compilação


 */


int main(void){
  int x = 0;

  puts("Digite um valor para x");
  scanf("%d", &x);

  printf("O endereço de x é %p\n", &x);
  printf("O valor    d  x é %d\n", x);



  return 0;
}
