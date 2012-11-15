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


Imprime "Não estou dentro do if". Porque não há delimitador de bloco.


2\. Explique o trecho de código, indicando o que será impresso na tela.


```c
  if (0){
    puts("Estou dentro do if");
    puts("Eu também estou dentro do if");
  }


``` 

Imprime as duas mensagens. Porque há delimitador de bloco.



3\. Explique o trecho de código, indicando o que será impresso na tela.


```c
  if (1)
    puts("Estou dentro do if");
  puts("Não estou dentro do if");


``` 

Imprime as duas mensagens. Porque não há delimitador de bloco, mas a expressão do if é verdadeira.


4\. Explique o trecho de código, indicando o que será impresso na tela.


```c
  if (1){
    puts("Estou dentro do if");
    puts("Eu também estou dentro do if");
  }


``` 

Imprime as duas mensagens. Porque há delimitador de bloco e a expressão do if é verdadeira.


5\. Explique o trecho de código, indicando o que será impresso na tela.


```c
  if (0)
    puts("Estou dentro do if");
  else
    puts("Estou dentro do else");


``` 

Imprime "Estou dentro do else" porque a expressão do if é falsa


6\. Explique o trecho de código, indicando o que será impresso na tela.


```c
  if (1)
    puts("Estou dentro do if");
  else
    puts("Estou dentro do else");


``` 

Imprime "Estou dentro do if" porque a expressão do if é verdadeira



7\. Explique o trecho de código, indicando o que será impresso na tela
para os seguintes valores da variável inteira idade.

a) idade = 3;

Muito novo para nadar.

b) idade = 5;


Categoria infantil A

c) idade = 7;

Categoria infantil A

d) idade = 8;

Categoria infantil B

e) idade = 12;

Categoria juvenil A

f) idade = 15;

Categoria juvenil B

g) idade = 45;

Categoria Adulto


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

Novas assinaturas


b) opcao = 2;

Falar com um de nossos atendentes

c) opcao = 3;

Encerrar ligação

d) opcao = 9;

Opção inválida

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


Nos próximos exercícios você deve indicar, de maneira resumida, o que o trecho de código faz. Por exemplo: "imprime 100 vezes a mensagem alô mundo"
para o código abaixo:

```c
  for(i = 0; i < 100; i++){
    puts("Alo mundo\n");
  }
```

### Comando For


1\. Explique o código abaixo.


```c
  for(i = 0; i < 500; i++){
    printf("%d ", i + 1);
  }
  printf("\n");
```

Imprime os números de 1 a 500 e pula uma linha no final



2\. Quantas vezes o bloco de comandos aninhado ao *for* será executado no código abaixo.


```c
  for(i = 0; i < 100; i = i + 10){
   printf("%d ", i);
  }
```

O bloco de comandos será executado 10 vezes.


3\. O código abaixo é válido e equivalente ao do exercício 1?


```c
  int i = 0;
  for(; i < 500;){
    printf("%d ", i + 1);
    i++;
  }
  printf("\n");
```

Sim, também imprime os números de 1 a 500.


4\. O código abaixo é válido e equivalente ao do exercício 1?


```c
  int i = 0;
  for(i < 500){
    printf("%d ", i + 1);
    i++;
  }
  printf("\n");
```

Não, este código não compila porque o comando for precisa de dois ponto-e-vírgula for(;;), mesmo que
as seções de inicialização, condição e incremento estejam vazias.


5\. O código abaixo é equivalente ao do exercício 1?


```c
  for(i = 1; i <= 500; i++){
    printf("%d ", i);
  }
  printf("\n");
``` 

Sim, também imprime os números de 1 a 500 e depois pula uma linha


6\. Quantas vezes o bloco de comandos associado ao comando while irá executar?


```c
  int x, y;
  x = y = 0;

  while(x < 1000 && y < 100){
    x++;
    y++;

  }

```

O código irá executar 100 vezes, porque o while sai quando a condição é falsa (y == 100)



7\. Quantas vezes o bloco de comandos associado ao comando do-while irá executar?

```c
  int x = 500;
  do{
    printf("%d \n", x + 1);
    x++;
  }while(x <= 500);
```

O bloco de comandos irá executar somente 1 vez. Quando x tem o valor de 501 a expressão
torna-se falsa e o bloco não executa mais. Só executa a primeira vez, característica do comando do-while


