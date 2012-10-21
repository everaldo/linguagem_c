# Comandos de Seleção e Iteração

* Comandos if, if-else e switch-case
* Comandos for, while e do-while.



## Comando If, If-Else e Switch-Case


1\. Explique o trecho de código, indicando o que será impresso na tela.


```c
  if (0)
    puts("Estou dentro do if");
  puts("Não estou dentro do if");
``` 

2\. Explique o trecho de código, indicando o que será impresso na tela.


```c
  if (0){
    puts("Estou dentro do if");
    puts("Eu também estou dentro do if");
  }


``` 


3\. Explique o trecho de código, indicando o que será impresso na tela.


```c
  if (1)
    puts("Estou dentro do if");
  puts("Não estou dentro do if");


``` 


4\. Explique o trecho de código, indicando o que será impresso na tela.


```c
  if (1){
    puts("Estou dentro do if");
    puts("Eu também estou dentro do if");
  }


``` 


5\. Explique o trecho de código, indicando o que será impresso na tela.


```c
  if (0)
    puts("Estou dentro do if");
  else
    puts("Estou dentro do else");


``` 

6\. Explique o trecho de código, indicando o que será impresso na tela.


```c
  if (1)
    puts("Estou dentro do if");
  else
    puts("Estou dentro do else");


``` 


7\. Explique o trecho de código, indicando o que será impresso na tela
para os seguintes valores da variável inteira idade.

a) idade = 3;
b) idade = 5;
c) idade = 7;
d) idade = 8;
e) idade = 12;
f) idade = 15;
g) idade = 45;


```c
  
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

``` 

8\. Explique o trecho de código, indicando o que será impresso na tela para os seguintes valores da variável
inteira opcao:

a) opcao = 1;
b) opcao = 2;
c) opcao = 3;
d) opcao = 9;


```c
  switch(opcao){
    case 1:
      puts("Novas assinaturas");
      break;
    case 2:
      puts("Falar com um de nossos atendentes");
      break;
    case 3:
      puts("Encerrar ligação");
      break;
    default:
      puts("Opção inválida");
  }

```


## Comandos For, While e Do-While




