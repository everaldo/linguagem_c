/* Everaldo Gomes - 17/05/2012

Construa um algoritmo que leia 3 notas de uma aluno,
calcule e mostre a média aritmética e
uma mensagem que depende do valor da média como na tabela abaixo. 

Para alunos de exame, calcule e mostre a nota mínima que deverá
ser tirada no exame para aprovação, 
considerando que a média no exame é 6,0.

0,0 a 2,9 => "reprovado"

3,0 a 6,9 => "exame"

7,0 a 10,0 => "aprovado"


*/

#include <stdio.h>


int main(){
  float n1, n2, n3, media, exame;

  printf("Digite as três notas do aluno\n");
  scanf("%f %f %f", &n1, &n2, &n3);
  media = (n1 + n2 + n3) / 3.0;
  if (media < 3)
    printf("Reprovado, média %.2f\n", media);
  else if (media < 7){
    printf("Exame\n");
    exame = 12.0 - media;
    printf("A nota mínima no exame deverá ser %.2f\n", exame);
  }
  else
    printf("Aprovado, média %.2f\n", media);

  return 0;
}


