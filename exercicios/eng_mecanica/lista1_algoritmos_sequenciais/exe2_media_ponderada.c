/* Everaldo Gomes - 16/05/2012

Construa um algoritmo que leia 3 notas de um aluno
e calcule a média final deste aluno.

Considere que a média é ponderada
e que os pesos são 2, 3 e 5 respectivamente.

*/

#include <stdio.h>


int main(){
  int nota1, nota2, nota3;
  float media;

  printf("Digite as três notas do aluno\n");
  scanf("%d %d %d", &nota1, &nota2, &nota3);
  media = ((nota1 * 2.0) + (nota2 * 3.0) + (nota3 * 5.0)) / 10.0;
  printf("A média final do aluno foi %.2f\n", media);

  return 0;
}

/*
Observações:

- Os parênteses da equação não são necessários, mas
a tornam mais legível

- %.2f - imprime somente duas casas depois do ponto

- Necessário dividir por 10.0 - porque é média ponderada

*/

