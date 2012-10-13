/* Everaldo Gomes - 11/10/2012
 *
 * Um professor deseja calcular a média da turma em uma avaliação. 
 * Leia um conjunto de notas num array de números reais e calcule sua média, com 4 casas decimais de precisão. 
 *
 *
 */
#include <stdio.h>

#define MAX 100

int main(){
  int i, num_alunos = 0;
  float v[MAX];
  float soma = 0.0; //inicializa a soma das notas
  float media = 0.0;

  puts("Digite a quantidade de alunos");
  scanf("%d", &num_alunos);

  for(i = 0; i < num_alunos; i++){
    printf("Digite a nota do aluno %d\n", i + 1);
    scanf("%f", &v[i]);
    soma += v[i];
  }

  if (num_alunos) media = soma / num_alunos;

  printf("A media das notas da turma é %.4f\n", media);

  return 0;
}
