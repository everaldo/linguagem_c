/*

Fazer um algoritmo que:
- leia um conjunto de 50 datas (dia, mês, ano);
- determine o dia da semana correspondente à data lida, segundo o método especificado;
- escreva, para cada data lida, o dia, mês, ano e o dia da semana calculado

Dados Dia, Mes e Ano, calcule
1) a = (14 - Mes) / 12
2) y = Ano - a
3) m = Mes + 12a - 2
4) q = Dia + 31m/12 + y + y/4 - y/100 + y/400
5) d = q mod 7 (resto da divisão por 7)

d = 0 → domingo
d = 1 → segunda-feira
d = 2 → terça-feira
d = 3 → quarta-feira
d = 4 → quinta-feira
d = 5 → sexta-feira
d = 6 → sábado

*/
#include <stdio.h>


#define MAX_DATAS 5

int main(){
  char nomes_dias[7][15] = { "Domingo", "Segunda-feira", "Terça-feira" ,
                            "Quarta-feira", "Quinta-feira",
                            "Sexta-feira", "Sábado" };


  int i, dia, mes, ano, a, y, m, q, d;
  
  for(i = 0; i < MAX_DATAS; i++){
    printf("Digite uma data: dia, mês e ano separado por espaço\n");
    scanf("%d %d %d", &dia, &mes, &ano);
    a = (14 - mes) / 12 ;
    y = ano - a;
    m = mes + (12 * a) - 2 ;
    q = dia + ((31 * m) / 12) + y + (y / 4) - ( y / 100) + (y / 400) ;
    d = q % 7 ;
    printf("O dia %d/%d/%d foi um(a) %s\n", dia, mes, ano, nomes_dias[d]);
  } 
}
