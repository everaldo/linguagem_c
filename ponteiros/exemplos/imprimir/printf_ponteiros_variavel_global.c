#include <stdio.h>

/*
    Compile e depois execute várias vezes este programa.
    Observe que o endereço de x muda a cada vez.
    Se x tiver o mesmo endereço, trata-se apenas de coincidência.
    Mas a chance disso acontecer é muito baixa.

    Note que o endereço de y é "vizinho" do endereço de x - um valor muito parecido.

    Mas o endereço da variável global é bem diferente, pois variáveis locais (x e y) são
    alocadas na pilha (stack), enquanto variáveis globais ficam em outra região da memória.


    O operador &x, retorna o endereço de x.

    O endereço de uma variável é a localização da memória onde seu valor é armazenado.

    Não é possível saber o endereço de uma variável em tempo de compilação


 */


int variavel_global; //uma variável pode ser declarada fora da função main. Ela é global (pode ser vista por todas as funções definidas neste arquivo)

int main(void){
  int x = 0, y = 0;

  puts("Digite um valor para x");
  scanf("%d", &x);

  puts("Digite um valor para y");
  scanf("%d", &y);

  puts("Digite um valor para a variável global");
  scanf("%d", &variavel_global);

  printf("O endereço de x é %p\n", &x);
  printf("O valor    de  x é %d\n", x);

  printf("O endereço de y é %p\n", &y);
  printf("O valor    de  y é %d\n", y);

  printf("O endereço da variável global é %p\n", &variavel_global);
  printf("O valor    da variável global é %d\n", variavel_global);

  return 0;
}
