/* Everaldo Gomes - 16/05/2012

Construa um algoritmo que receba duas datas
e determine qual delas é a mais recente. Cada
data deve ser fornecida por três valores inteiros,
 onde o primeiro representa o dia, o segundo
o mês e o terceiro o ano.

*/
#include <stdio.h>

int main(){
  int dia1, mes1, ano1, dia2, mes2, ano2, menor;

  printf("Digite a primeira data - dia, mes, ano separados por espaço\n");
  scanf("%d %d %d", &dia1, &mes1, &ano1);
  printf("Digite a segunda data - dia, mes, ano separados por espaço\n");
  scanf("%d %d %d", &dia2, &mes2, &ano2);


  if (ano1 == ano2)
    if (mes1 == mes2)
      if (dia1 > dia2)      menor = 1;
      else if (dia1 < dia2) menor = 2;
      else  menor = 0;
    else if (mes1 > mes2) menor = 1;
    else  menor = 2;
  else if (ano1 > ano2) menor = 1;
  else menor = 2;
        

  if (menor == 0)
    printf("As duas datas são iguais %02d/%02d/%02d\n", dia1, mes1, ano1);
  else if (menor == 1)
    printf("A primeira data é a mais recente %02d/%02d/%02d\n", dia1, mes1, ano1);
  else if (menor == 2)
    printf("A segunda data é a mais recente %02d/%02d/%02d\n", dia2, mes2, ano2);








  return 0;
}


