# Expressões

## Variáveis

1. O que são variáveis?

2. Descreva as regras de nomenclatura de variáveis.

3. Por que as variáveis devem ser declaradas antes de serem utilizadas?

4. Explique a importância da inicialização das variáveis: o que acontece se o programador utilizar uma variável não inicializada.

5. Quais os tipos nativos de variáveis que a linguagem C fornece. Dica: são 5 tipos.

6. Explique o significado dos modificadores de tipo *signed*, *unsigned*, *long* e *short*.

7. O que são variáveis globais? Como é possível declará-las? Para que servem?

8. Duas variáveis locais, em funções diferentes, podem ter o mesmo nome. Por quê?

9. Explique o funcionamento do especificador de armazenamento de classe *static*.



## Constantes

1. O que são constantes ou literais? Para que servem?

2. O que é uma constante *string*? 

3. Explique o qualificador de tipo *const*.


## Operadores

1. O que faz o operador de atribuição *=* (símbolo sinal de igual)? O que deve estar do seu lado esquerdo? E o que pode ser posto do lado direito?

2. Para que serve a atribuição múltipla? Dê um exemplo de um pequeno trecho de código que inicializa quatro variáveis
inteiras com o valor zero, com e sem atribuição múltipla.

3. Explique o que é o comando de atribuição composta. Qual sua vantagem?


### Operadores Aritméticos

1\. Explique o funcionamento do operador módulo *%*.

2\. O operador módulo (*%*) pode ser utilizado com operandos do tipo ponto flutuante?

3\. Explique o funcionamento do operador de divisão */* com operandos inteiros e com operandos do tipo *float* ou *double*.

4\. Explique o funcionamento dos operadores de incremento (*++*) e decremento (*--*) e as diferenças entre pós-incremento
e pré-decremento.


5\. Analise o seguinte trecho de código e responda qual o valor de *a* e *b* após os comandos terem sido executados:

```c
  int a, b;
  a = 2;
  b = 3;

  a = a + b++;

```

6\. Analise o seguinte trecho de código e responda qual o valor de *a* e *b* após os comandos terem sido executados:

```c
  int a, b;
  a = 2;
  b = 3;

  a = a + --b;

```

### Operadores Lógicos e Relacionais

1. Quais os valores retornados pelos operadores lógicos e relacionais. O que eles significam?


2. Quais os 6 operadores relacionais da linguagem C?


3. Quais os 3 operadores lógicos da linguagem C?


4. Explique o funcionamento do operador ternário - expresso pelo símbolo ponto-de-interrogação (*?*) e dois-pontos (*:*) *op1 ? op2 : op3*  .


### Operadores de Ponteiros

1. O que é um ponteiro ou apontador?


2. O que faz o operador de ponteiros *&amp;* ?


3. O que faz o operador de ponteiros * ?


### Operador sizeof

1. Explique o que o operador sizeof faz e sua importância.


### Operador parênteses


1. Explique a importância do operador parênteses ().



## Cálculo de Expressões

Calcule o resultado das seguintes expressões


1. `1 + 1`


2. `1.0 + 1`


3. `1 / 2`


4. `1.0 / 2`


5. ` 1 / 2.0`


6. `(float) 1 / 2`


7. `0 == 0`


8. `0 != 0`


9. `1 != 1`


10. `1 > 1`


11`1 >= 1`


12. `0 < 0`


13. `-2 <= -1`


14. `1 + 2 / 3`

15. `(1 + 2) / 3`


16. `0 % 10`

17. `1 % 10`

18. `5 % 10`

19. `10 % 10`

20. `11 % 10`

21. `15 % 10`

22. `10000 % 10`

23. `1 && 1`

24. `0 && 1`

25. `1 && 0`

26. `0 & 0`

27. `0 || 0`

28. `0 || 1`

29. `1 || 0`

30. `1 || 1`

31. `! 1`

32. `! 0`


