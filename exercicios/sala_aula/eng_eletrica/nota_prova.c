/* Everaldo Gomes - 10/05/2012

Tarefa passada pelo prof. Marlon

Escrever um algoritmo que lê um vetor G[20] (gabarito) de caracteres 
e a seguir lê um número não determinado de números de alunos (5)
e cada aluno terá um vetor R[20] (resposta) de caracteres, 
um número e um vetor R de cada vez. O número representa o número de um aluno 
e o vetor R representa o conjunto de respostas daquele aluno. 
Para cada aluno calcular o nº de acertos e calcular a nota.
nota = número de acertos * 0.5
Escrever o nº do aluno, sua nota e a mensagem "aprovado" 
se tiver nota maior ou igual a 5 ou "reprovado" se a nota for menor do que 5.

a resposta do vetor será 'A', 'B', 'C', 'D' e 'E'


*/


#include <stdio.h>


#define NUM_QUESTOES 5 //Trocar para 20 depois
#define MAX_ALUNOS 5
#define VALOR_QUESTAO 10.0 / NUM_QUESTOES


int main(){

  char gabarito[NUM_QUESTOES + 1], respostas[NUM_QUESTOES + 1];
  int i, j, cod_aluno, num_acertos;
  float nota;


  printf("Digite o gabarito da prova\n");
  scanf("%s", gabarito);

  for(i = 0; i < MAX_ALUNOS; i++){
    cod_aluno = 0;
    printf("Digite o código do aluno\n");
    scanf("%d", &cod_aluno);
    printf("Digite a nota do aluno %d\n", i + 1);
    scanf("%s", respostas);
    num_acertos = 0;
    for(j = 0; j < NUM_QUESTOES; j++){
      if (gabarito[j] == respostas[j])
         num_acertos++;
    }
    nota = num_acertos * VALOR_QUESTAO;
    printf("O aluno %d tirou nota %.2f e está ", cod_aluno, nota);
    if ( nota >= 5.0 )
      printf(" aprovado.\n");
    else
      printf(" reprovado.\n");

  }
  return 0;
}
