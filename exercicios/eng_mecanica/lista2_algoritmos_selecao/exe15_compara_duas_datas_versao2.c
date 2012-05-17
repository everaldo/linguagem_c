/* Everaldo Gomes - 16/05/2012

Construa um algoritmo que receba duas datas
e determine qual delas é a mais recente. Cada
data deve ser fornecida por três valores inteiros,
 onde o primeiro representa o dia, o segundo
o mês e o terceiro o ano.


VERSÃO 2

Transforma uma data num número com formato AAAAMMDD
para que possa ser comparada utilizando os operadores > e ==

Exemplo:

17/05/2012 se torna 20120517
16/05/2012 se torna 20120516
 
20120517 > 20120516, portanto mais recente


data = AAAAMMDD

data = AAAA * 10000 + MM * 100 + DD


*/
#include <stdio.h>

int main(){
  int dia1, mes1, ano1, dia2, mes2, ano2, menor;
  long data1, data2;

  printf("Digite a primeira data - dia, mes, ano separados por espaço\n");
  scanf("%d %d %d", &dia1, &mes1, &ano1);
  printf("Digite a segunda data - dia, mes, ano separados por espaço\n");
  scanf("%d %d %d", &dia2, &mes2, &ano2);

  data1 = ano1 * 10000 + mes1 * 100 + dia1;
  data2 = ano2 * 10000 + mes2 * 100 + dia2;

  if (data1 == data2) menor = 0;
  else if (data1 > data2) menor = 1;
  else menor = 2;
        

  if (menor == 0)
    printf("As duas datas são iguais %02d/%02d/%02d\n", dia1, mes1, ano1);
  else if (menor == 1)
    printf("A primeira data é a mais recente %02d/%02d/%02d\n", dia1, mes1, ano1);
  else if (menor == 2)
    printf("A segunda data é a mais recente %02d/%02d/%02d\n", dia2, mes2, ano2);








  return 0;
}


