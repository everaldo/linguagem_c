# Entrada e Saída

* Comandos de Entrada
* Comandos de Saída


## Comandos de Entrada

1\. Qual biblioteca é necessário incluir com a diretiva *#include* para utilizar as funções de entrada padrão
da linguagem C?

stdio: #include <stdio.h>


2\. O seguinte trecho de código realiza a leitura de um número inteiro. Entretanto, ele contém dois erros.
Corrija-os e justifique sua resposta.

```c
    int n;
    scanf("%f", n);
```

O especificador de formato para variáveis inteiras é %d e o scanf espera receber um endereço de uma variável,
sendo necessário usar o operador &.

```c
  int n;
  scanf("%d", &n);
```


3\. Explique o trecho de código abaixo (linha 2).

```c
  char c;
  scanf("%c", &c);
  while(getchar() != '\n'); //limpa o buffer para próxima leitura
```

Lê um caracter, armazena em c e limpa o buffer de entrada.


4\. Explique o trecho de código abaixo.

```c
  float largura, comprimento;
  scanf("%f %f", &largura, &comprimento);
```

Lê dois valores float e armazena nas variáveis largura e comprimento.


5\. Explique o trecho de código abaixo.

```c
  char nome[80];
  scanf("%s", nome);
```

Lê uma string (que deve ter até 79 caracteres - mas não faz checagem de limites) e armazena na variável nome.

## Comandos de Saída

1\. Qual biblioteca é necessário incluir com a diretiva *#include* para utilizar as funções de saída padrão
da linguagem C?

stdio: #include <stdio.h>


2\. O seguinte trecho de código realiza a impressão de um número em ponto flutuante com duas casas de precisão. Entretanto, ele contém dois erros.
Corrija-os e justifique sua resposta.

```c
  float n;
  printf("%.2d", &n);
```

Para imprimir uma variável float o especificador de formato é o %f, com duas casas de precisão, fica %.2f.
E o printf espera receber o valor de uma variável, não o endereço, então o correto é n, ao invés de &n.


3\. Explique o trecho de código abaixo.

```c
  printf("Alo mundo!");
```

Imprime a string Alo mundo!


4\. Explique o trecho de código abaixo. Dica: a resposta não é a mesma do exercício anterior.

```c
  printf("Alo mundo!\n");
```

Imprime a string Alo mundo! e o caracter nova linha (newline). "pula de linha"

5\. Explique o trecho de código abaixo.

```c
  puts("Alo mundo!");
```

Imprime a string Alo mundo!. O comando puts só imprime strings, não valores. Mas o resultado é equivalente ao exercício 3.


6\. Explique o trecho de código abaixo.

```c
  printf("1 + 1\n");
```

Imprime na tela a string 1 + 1 e pula de linha

7\. Explique o trecho de código abaixo.

```c
  printf("%d\n", 1 + 1);
```

Calcula a expressão 1 + 1, que resulta em 2, imprime-a como um valor inteiro (2) e pula de linha.


8\. Explique o trecho de código abaixo.

```c
  float pi = 3.1415;
  int raio = 2;
  printf("A área da circunferência de raio %d é %f\n", raio, pi * raio * raio);
```

Imprime a mensagem "A área da circunferência...", o valor do raio (que é 2) e o valor da área que é pi * raio * raio.

9\. Explique o trecho de código abaixo.


```c
  puts("");
```

Imprime uma string vazia (não imprime nada) e depois imprime nova linha (pula de linha)


