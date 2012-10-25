/* Everaldo Gomes - 25/10/2012
 *
 * Imprime endereços das variáveis dentro e fora das funções
 *
 */


#include <stdio.h>


void passagem_por_valor(int x, int y);

void passagem_por_referencia(int *x, int *y);

int main(void){
  int x, y;

  puts("Digite valores para x e y");
  scanf("%d %d", &x, &y);

  printf("Endereço de x: %p\n", &x); //o operador & retorna o endereço de uma variável
  printf("Endereço de y: %p\n", &y); 
  printf("Valor de x: %d\n", x); 
  printf("Valor de y: %d\n", y); 

  passagem_por_valor(x, y);
  passagem_por_referencia(&x, &y);

  return 0;
}



void passagem_por_valor(int x, int y){
  puts("Passagem de parâmetros por valor - endereços e valores de x e y");
  printf("Endereço de x: %p\n", &x); 
  printf("Endereço de y: %p\n", &y); 
  printf("Valor de x: %d\n", x); 
  printf("Valor de y: %d\n", y); 
}

void passagem_por_referencia(int *x, int *y){
  puts("Passagem de parâmetros por referência - endereços e valores de x e y");
  printf("Endereço de x: %p\n", &x); 
  printf("Endereço de y: %p\n", &y); 
  printf("Valor de x: %p\n", x); 
  printf("Valor de y: %p\n", y); 

}
