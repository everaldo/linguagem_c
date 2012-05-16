/* Everaldo Gomes - 16/05/2012

Construa um algoritmo que leia a altura de uma pessoa
em metros e o sexo desta pessoa ('M'
– masculino e 'F' – feminino) e calcule o seu peso ideal,
 utilizando a seguinte fórmula:

- para homens: (72,7 * altura) – 58

- para mulheres: (62,1 * altura) – 44,7


*/
#include <stdio.h>


/* Observações:

esta fórmula consiste apenas num exercício e 
não é nenhum indicativo de saúde ou doença.

Existem diversos fatores que influenciam o
peso e a saúde de uma pessoa.

Caso esteja interessado em saber seu peso
ideal e como vai sua saúde consulte um médico
e/ou nutricionista, endocrinologista etc.

*/

#include <stdio.h>
#include <ctype.h>

int main(){
  float peso_ideal, altura;
  char sexo;
  do{
    puts("Digite seu sexo (M)asculino ou (F)eminino");
    scanf("%c",&sexo);
    while (getchar() != '\n'); //limpa buffer - quando faz leitura de char pode ser necessário
    sexo = toupper(sexo);
  }while(sexo != 'M' && sexo != 'F');
  puts("Digite sua altura em metros");
  scanf("%f", &altura);
  
  if (sexo == 'M'){
    peso_ideal = (72.7 * altura) - 58.0;
  }else if (sexo == 'F'){
    peso_ideal = (62.1 * altura) - 44.7;
  } 
  printf("O peso ideal para seu sexo e altura é %.2f\n", peso_ideal);

  return 0;
}
