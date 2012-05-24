= Expressões Lógicas

Na linguagem C, toda expressão tem um valor lógico (verdadeiro ou falso)

Qualquer expressão que avalie o valor 0 (zero) tem valor lógico falso.
Enquanto que, as expressões que avaliem para qualquer valor diferente de 0 (zero) tem valor lógico verdadeiro.

Assim:

```c

int x = 2, y = 3, z = 0;

0 //falso
1 //verdadeiro
2 //verdadeiro
NULL //falso NULL é igual a 0x0 = zero
x //verdadeiro
x - 2 //falso
z //falso
!z //verdadeiro
x == 2 //verdadeiro
x != 3 //verdadeiro
x > 1 //verdadeiro
x + 1 == y //verdadeiro


```


