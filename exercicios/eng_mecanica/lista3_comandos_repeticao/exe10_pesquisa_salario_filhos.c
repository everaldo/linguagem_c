/* Everaldo Gomes - 14/06/2012


10) A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando
dados sobre o salário e número de filhos. A prefeitura deseja saber:
a) média do salário da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até R$100,00.

Obs: A leitura deve parar quando o número de filhos digitado foi igual a -1

*/


#include <stdio.h>



int main(){
  int num_filhos, num_salarios, num_pessoas, pessoas_salarios_ate_100;
  float media_salario, media_filhos, salario, maior_salario, porcentagem_salarios_ate_100;

  num_filhos = 0, num_salarios = 0, num_pessoas = 0, pessoas_salarios_ate_100 = 0;
  maior_salario = 0.0, media_salario = 0.0,  media_filhos = 0.0;

  for(;;){ //loop infinito - termina com comando break quando num_filhos == -1
    printf("Digite o número de filhos e o salário. Digite -1 para numero de filhos quando desejar terminar\n");
    scanf("%d", &num_filhos);
    if(num_filhos == -1)
      break;
    scanf("%f", &salario);
    num_pessoas++;
    if (salario > maior_salario) maior_salario = salario;
    if (salario <= 100.0) pessoas_salarios_ate_100++;
    media_salario += salario;
    media_filhos += num_filhos;
    
  }
  if (num_pessoas)  media_salario = media_salario / num_pessoas;
  if (num_pessoas)  media_filhos = media_filhos / num_pessoas;
  if (num_pessoas) porcentagem_salarios_ate_100 = (pessoas_salarios_ate_100 / (float)num_pessoas) * 100.0;

  printf("A media do salario da populacao eh %.2f\n", media_salario);
  printf("A media do numero de filhos eh %.2f\n", media_filhos);
  printf("O maior salario eh %.2f\n", maior_salario);
  printf("O percentual de pessoas com salario ateh 100 reais eh de %.2f%%\n", porcentagem_salarios_ate_100);

  return 0;
}
