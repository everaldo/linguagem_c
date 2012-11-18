# Expressões

## Variáveis

1\. O que são variáveis?

Variáveis são nomes (mnemônicos) que referenciam posições (endereços) de memória.
As variáveis possuem um tipo de dados (inteiro, ponto flutuante, caractere, sem tipo (void), ou definido pelo usuário)
e armazenam valores.


2\. Descreva as regras de nomenclatura de variáveis.

O nome de uma variável deve obrigatoriamente começar com uma letra ou sublinhado (underline - o sinal _ ).
E os outros caracteres podem ser letras, números ou sublinhado. Não pode conter símbolos especiais e maiúsculas
são diferente de minúsculas. Não pode haver dois identificadores (variáveis e funções) com o mesmo nome, nem com o nome de palavras reservadas
da linguagem C.


3\. Por que as variáveis devem ser declaradas antes de serem utilizadas?

Quando declaramos uma variável sinalizamos ao compilador que desejamos que uma posição de memória seja reservada para armazenar um valor de
determinado tipo.
Em linguagens compiladas, uma variável não pode ser utilizada antes de ser declarada, senão causa erro de compilação.
Pois sem a declaração da variável não é possível inferir seu tipo, e por sua vez, quais operações são permitidas e onde os valores
devem ser armazenados.

Em linguagens com variáveis de tipagem dinâmica não é necessária a declaração de variáveis.



4\. Explique a importância da inicialização das variáveis: o que acontece se o programador utilizar uma variável não inicializada?

Se uma variável não for inicializada seu valor será o que estava na memória antes. Esse conteúdo é indeterminado e comumente
chamado de "lixo". Por exemplo, no caso de um contador, se ele não for inicializado, o programador pode achar que está contando
a partir do zero, mas não há nenhuma garantia que seu valor era zero, já que a variável não foi inicializada.


5\. Quais os tipos nativos de variáveis que a linguagem C fornece. Dica: são 5 tipos.

Os tipos são: int, float, double, char e void (sem tipo).


6\. Explique o significado dos modificadores de tipo *signed*, *unsigned*, *long* e *short*.

Esses modificadores alteram o range (intervalo) de valores das variáveis. Long pode ser utilizado com int e float.
Long float é equivalente a double.

Os outros modificadores só podem ser utilizados com tipo inteiro (char é um tipo inteiro, mas só pode ser usado com *signed* e *unsigned*).

O modificador signed é desnecessário, porque ele é implícito. Assim, *signed int* e *int* são a mesma coisa.

O modificador unsigned faz com que os valores de uma variável inteira sejam interpretados todos como positivos.

O modificador *long* garante que todo número inteiro ocupe 32bits na memória, independentemente de arquitetura.
Padrões modernos da linguagem C permitem o tipo *long long*. Os tipos *long* e *long int* são equivalentes



7\. O que são variáveis globais? Como é possível declará-las? Para que servem?

São variáveis que possuem escopo global (são visíveis por todas as funções).

Elas devem ser declaradas fora de qualquer função.

Elas são utilizadas quando desejamos compartilhar um valor em todas as funções do programa.
Devem ser utilizadas com parcimônia, pois o uso excessivo de variáveis globais aumenta o acoplamento
entre as funções e a chance de possíveis erros - já que uma função interfere na outra mais livremente.

8\. Duas variáveis locais, em funções diferentes, podem ter o mesmo nome. Por quê?

Sim. Porque elas são visíveis somente no escopo da função. Uma variável é apenas um nome
que aponta para uma posição de memória. Assim, duas variáveis locais em funções diferentes
não possuem correlação alguma.

9\. Explique o funcionamento do especificador de armazenamento de classe *static*.


O especificador de armazenamento de classe *static* permite a declaração de variáveis
que existem durante todo o tempo de execução do programa (elas não são variáveis locais,
portanto não são alocadas na pilha (*stack*)).

Elas são inicializadas somente uma vez, e seus valores permanecem entre chamadas de funções.

Um exemplo de seu uso são nas funções que geram números aleatórios.

Uma variável static declarada fora de qualquer função é uma variável global somente no escopo
daquele arquivo.


## Constantes

1\. O que são constantes ou literais? Para que servem?

Constantes são valores (letras ou números) codificados no programa. Elas servem
para inicializar variáveis com valores previamente definidos.


2\. O que é uma constante *string*? 

É um conjunto de caracteres, em posições de memória adjacentes, terminados pelo valor 0 (\0)


3\. Explique o qualificador de tipo *const*.

O qualificador const transforma uma variável numa constante. Ou seja, seu valor não pode ser alterado
e qualquer tentativa disso causa erro de compilação.



## Operadores

1\. O que faz o operador de atribuição *=* (símbolo sinal de igual)? O que deve estar do seu lado esquerdo? E o que pode ser posto do lado direito?

É o operador de atribuição (atribuí valores às variáveis). À sua esquerda deve estar um objeto, chamado também de *lvalue*, que deve
ser uma variável ou um ponteiro para uma com o operador de indireção (asterisco). Do lado direito deve haver uma expressão, que pode
ser um valor constante ou uma operação lógica, aritmética ou retorno de função.


2\. Para que serve a atribuição múltipla? Dê um exemplo de um pequeno trecho de código que inicializa quatro variáveis
inteiras com o valor zero, com e sem atribuição múltipla.

A atribuição múltipla tem a finalidade de atribuir o mesmo valor à diversas variáveis com apenas um comando. Torna o código mais legível.

int a, b, c, d;
a = 0;
b = 0; 
c = 0;
d = 0;

//com atribuição múltipla:
int a, b, c, d;
a = b = c = d = 0;




3\. Explique o que é o comando de atribuição composta. Qual sua vantagem?

O comando de atribuição composta é formado por um dos operadores +, -, *, / seguidos do operador de atribuição =.

A vantagem é que torna o código mais legível, menos propenso a erros e serve para indicar um acumulador (quando uma variável
tem seu novo valor definido em relação ao valor anterior - ela acumula um valor. Exemplo: um contador)


### Operadores Aritméticos

1\. Explique o funcionamento do operador módulo *%*.

O operador módulo significa o resto da divisão entre dois operandos inteiros.

2\. O operador módulo (*%*) pode ser utilizado com operandos do tipo ponto flutuante?

Não, só pode ser utilizado com operandos inteiros.

3\. Explique o funcionamento do operador de divisão */* com operandos inteiros e com operandos do tipo *float* ou *double*.

Com operandos inteiros, o operador de divisão só retorna o quociente, ignorando o resto. Com pelo menos um dos operandos
do tipo *float* ou *double* o operador de divisão retorna o valor integral da divisão.
Exemplo: 5 / 2 = 2, com operandos inteiros e 5.0 / 2 = 2.5 , com pelo menos um operando em ponto flutuante.


4\. Explique o funcionamento dos operadores de incremento (*++*) e decremento (*--*) e as diferenças entre pós-incremento
e pré-decremento.

Os operadores de incremento e decremento aumentam e diminuem em 1, respectivamente, o valor de uma variável.
Eles são equivalentes a var = var + 1 ou var += 1, no caso do operador de incremento e var = var - 1 ou var -= 1, no 
caso do operador de decremento, onde var é o nome de uma variável.

O pré-incremento, denotado por: ++var adiciona 1 a variável e depois usa o novo valor numa expressão.
O pós-incremento, denotado por: var++ usa o valor de var na expressão, depois adiciona 1 à variável.

O pré-incremento e o pós-decremento é análogo.

Exemplo de códigos equivalentes:

```c
  int a = 2;
  int b = 5;

  a = a + ++b;
``` 

é o mesmo que:

```c
  int a = 2;
  int b = 5;

  b = b + 1;
  a = a + b;
```

e ao final, a tem o valor 8 e b tem o valor 6.

Se fosse a = a + b++ , ao final, a teria o valor 7 e b o valor 6.



5\. Analise o seguinte trecho de código e responda qual o valor de *a* e *b* após os comandos terem sido executados:

```c
  int a, b;
  a = 2;
  b = 3;

  a = a + b++;

```

Após os comandos terem sido executados, a vale 5 e b vale 4.



6\. Analise o seguinte trecho de código e responda qual o valor de *a* e *b* após os comandos terem sido executados:

```c
  int a, b;
  a = 2;
  b = 3;

  a = a + --b;

```

Após os comandos terem sido executados, a vale 4 e b vale 2


### Operadores Lógicos e Relacionais

1\. Quais os valores retornados pelos operadores lógicos e relacionais. O que eles significam?

Os operadores lógicos retornam o valor 0 ou o valor 1. Zero significa falso e Um (ou qualquer coisa diferente de zero) significa verdadeiro.


2\. Quais os 6 operadores relacionais da linguagem C?

São os operadores de igualdade, desigualdade, maior que, menor que, maior ou igual que e menor ou igual que, respectivamente:

==

!=

>

<

>=

<=



3\. Quais os 3 operadores lógicos da linguagem C?


São os operadores e (and), ou (or) e não (not), respectivamente:

&&
||
!

4\. Explique o funcionamento do operador ternário - expresso pelo símbolo ponto-de-interrogação (*?*) e dois-pontos (*:*) *op1 ? op2 : op3*  .


Ele é semelhante ao comando if-else. Se a expressão representada por op1 é verdadeira, o valor da expressão é op2. Senão, o valor da expressão
é op3.

x = op1? op2 : op3

igual a 

if(op1) x = op2;
else x = op3;




### Operadores de Ponteiros

1\. O que é um ponteiro ou apontador?

É uma variável que armazena um endereço de memória (ela aponta para outra variável).

2\. O que faz o operador de ponteiros *&amp;* ?

É o operador de referência, ele retorna o endereço de uma variável, ao invés do seu valor.


3\. O que faz o operador de ponteiros * ?

É o operador de indireção, ou de dereferência, ele retorna o valor do endereço de memória apontado pelo ponteiro.


### Operador sizeof

1\. Explique o que o operador sizeof faz e sua importância.

O operador sizeof retorna o número de bytes que um tipo de dados ocupa.
Exemplo: numa máquina de 32bits, um inteiro tem 4 bytes e numa máquina de 64bits, um inteiro possui 8 bytes.
O operador sizeof permite a portabilidade do código C (pode ser compilado e executado sem alterações em diferentes arquiteturas)



### Operador parênteses


1\. Explique a importância do operador parênteses ().

O operador parênteses altera a precedência dos operadores. As expressões dentro de parênteses são executadas primeiro.
Semelhante ao seu significado na matemática.

## Cálculo de Expressões

Calcule o resultado das seguintes expressões. Se o resultado for um número em ponto flutuante, indique isso junto com o valor da expressão.


1\. `1 + 1`

2

2\. `1.0 + 1`

2.0 (float)

3\. `1 / 2`

0

4\. `1.0 / 2`

0.5 (float)

5\. ` 1 / 2.0`

0.5 (float)

6\. `(float) 1 / 2`

0.5 (float)

7\. `0 == 0`

1

8\. `0 != 0`

0

9\. `1 != 1`

0

10\. `1 > 1`

0

11\. `1 >= 1`

1

12\. `0 < 0`

0

13\. `-2 <= -1`

1

14\. `1 + 2 / 3`

1

15\. `(1 + 2) / 3`

1

16\. `0 % 10`

0

17\. `1 % 10`

1

18\. `5 % 10`

5

19\. `10 % 10`

0

20\. `11 % 10`

1

21\. `15 % 10`

5

22\. `10000 % 10`

0

23\. `1 && 1`

1

24\. `0 && 1`

0

25\. `1 && 0`

0

26\. `0 && 0`

0

27\. `0 || 0`

0

28\. `0 || 1`

1

29\. `1 || 0`

1

30\. `1 || 1`

1

31\. `! 1`

0

32\. `! 0`

1
