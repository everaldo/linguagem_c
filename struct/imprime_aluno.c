/* Everaldo Gomes - 29/10/2012
 *
 * Primeiro exemplo struct
 *
 * */

#include <stdio.h>
#include <string.h>

#define MAX 80


typedef struct {
  int codigo;
  char nome[MAX + 1];
  float coeficiente;



} aluno;

void imprime_aluno(aluno a);


int main(){
  aluno joao, copia;

  puts("Digite o código, o nome e o coeficiente do João");
  scanf("%d %s %f", &joao.codigo, &joao.nome, &joao.coeficiente);

  imprime_aluno(joao);

  copia = joao;

  imprime_aluno(copia);

  return 0;

}

void imprime_aluno(aluno a){
  puts("Dados do Aluno");
  printf("Código: %d\n", a.codigo);
  printf("Nome: %s\n", a.nome);
  printf("Coeficiente: %.2f\n", a.coeficiente);
}





