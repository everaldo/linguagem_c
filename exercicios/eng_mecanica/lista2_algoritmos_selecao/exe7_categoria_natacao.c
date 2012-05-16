/* Everaldo Gomes - 16/05/2012

Construa um algoritmo que leia a idade de um nadador
e classifique-o em uma das seguintes
categorias:

a) infantil A = de 5 a 7 anos

b) infantil B = de 8 a 10 anos

c) juvenil A = de 11 a 13 anos

d) juvenil B = de 14 a 17 anos

e) adultos = 18 anos ou mais



*/
#include <stdio.h>

int main(){
  int idade;

  puts("Digite a idade do nadador");
  scanf("%d", &idade);


  if (idade >= 5 && idade <= 7){
    puts("Categoria infantil A");
  }
  else if (idade >= 8 && idade <= 10){
    puts("Categoria infantil B");
  }
  else if (idade >= 11 && idade <= 13){
    puts("Categoria juvenil A");
  }
  else if (idade >= 14 && idade <= 17){
    puts("Categoria juvenil B");
  }
  else if (idade >= 18){
    puts("Categoria adulto");
  }
  else{
    puts("Muito novo para nadar");
  }
  return 0;
}
/*
Obs.: Também poderia ter usado

(idade > 4 && idade < 8) para 5..7
(idade > 7 && idade < 11) para 8..10
(idade > 10 && idade < 14) para 11..13
(idade > 13 && idade < 18) para 14..17
(idade > 17) .. para > 18




*/
