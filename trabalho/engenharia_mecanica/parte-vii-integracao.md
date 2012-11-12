# Exercícios de Integração

Os exercícios abaixo integram os conceitos ensinados em sala de aula, exercícios resolvidos
e aqueles que foram revistos nas outras partes do trabalho.


1\. Escreva um programa para calcular o fatorial de um número. Se o usuário digitar um número
maior que 13, o programa deve exibir uma mensagem dizendo que não é possível (pois esse é o valor
máximo, com uma variável do tipo inteira).


2\. Escreva um programa que simule uma calculadora: imprima um menu com as operações disponíveis.
Depois, leia os operandos, caso a operação escolhida não tenha sido SAIR, e  realize o cálculo escolhido pelo usuário.
Imprima o resultado, mas evite os casos de divisão por zero. O programa só acaba quando o usuário
digitar a opção 0. Se ele digitar uma opção inválida, exiba na tela a mensagem "Opção inválida"
e imprima novamente o menu. 

Operações:

1 - Soma

2 - Subtracao

3 - Multiplicacao

4 - Divisao

0 - Sair


3\. Em um campeonato de futebol existem 5 times,
cada time possui 11 jogadores. Faça um algoritmo que
recebe a idade, o peso e a altura de cada um dos jogadores. Calcule e mostre:

a) A quantidade de jogadores com idade inferior a 18;

b) A média das idades dos jogadores de cada time;

c) A média das alturas de todos os jogadores do campeonato

d) A porcentagem de jogadores com mais de 80kg do campeonato


4\. Escreva  um programa que gere aleatoriamente Um número entre 0 e 99. O usuário deve adivinhar qual é este número,
mas ele tem somente 5 tentativas. Se ele conseguir, imprima "venceu". Senão, imprima "perdeu, tente novamente".
A cada tentativa mal-sucedida, o programa deve imprimir uma dica. Se o número gerado for maior que o palpite, imprima
"o número que eu pensei é maior". Senão, imprima "o número que eu pensei é menor".


5\. (Enunciado Retirado da Apostila de Algoritmos da UFPR) - Aqui temos uma forma peculiar de realizar uma multiplicação entre dois números:
divida o primeiro por 2 e multiplique o segundo por 2 até ́ que o primeiro seja
reduzido a 1. Toda vez que o primeiro for impar, lembre-se do segundo. Não
considere qualquer fração durante o processo. O produto dos dois números  ́
é igual a soma dos números que foram lembrados. Exemplo: 53 × 26 =

<pre> 
 53    26     13     6     3     1
 26    52    104   208   416   832

 26 +        104 +       416 + 832 = 1378
</pre>

Escreva um programa que realize a multiplicação de dois números inteiros positivos por esse método.


6\. Escreva um programa que leia 30 valores e imprima-os na ordem inversa à que foram lidos. Use arrays.


7\. Desejamos verificar se um dado é viciado (na verdade vamos apenas simular ;) ). Escreva um programa
que realize 600.000 lançamentos de dados e conte as frequências de cada face. Use a geração de números aleatórios.
Lembre-se que o dado possui 6 faces, de 1 a 6. Imprima a frequência de ocorrência de cada face do dado, em forma
de porcentagem com duas casas de precisão.



8\. Leia uma sequência de n números e armazene-os em um array. Após, leia um valor x e realize uma busca no vetor.
Imprima a posição de x (somente a primeira posição, no caso de múltiplas ocorrências) ou "o valor não foi encontrado".


9\. Leia uma sequência de n números e armazene-os em um array. Após, leia o valor de uma posição do vetor e realize uma remoção.
No final imprima o vetor.

10\. Leia uma sequência de n números e armazene-os em um array. Após, leia o valor de uma posição e de um valor x, que será inserido na
posição indicada. No final imprima o vetor.


11\. Leia dois vetores de tamanho n. Verifique se eles são idênticos. Imprima "são idênticos" ou "não são idênticos"

12\. Leia dois vetores de tamanho n. Construa um terceiro vetor que é a concatenação dos dois primeiros.


13\. Leia dois vetores de números inteiros de tamanho n. Construa um terceiro vetor que é a união dos dois primeiros.
Dica: a união pode ser feita da seguinte forma:  concatene os dois vetores. Depois, retire os elementos repetidos.

14\. Leia dois vetores de números inteiros de tamanho n. Construa um terceiro vetor que é a intersecção dos dois primeiros.
Dica: a intersecção pode ser feita da seguinte forma: concatene os dois vetores. Depois, construa outro vetor
formado somente pelos elementos repetidos do vetor concatenado. Esse vetor constitui a intersecção dos dois primeiros.



**Os próximos exercícios referem-se a conceitos que ainda serão vistos nas próximas aulas**

15\. Escreva uma função que receba dois argumentos do tipo inteiro (int) e realize a troca desses dois valores.
O tipo de retorno da função é void. Use passagem de parâmetros por referência.



16\. Escreva uma função que receba dois argumentos do tipo inteiro (int) e compara-os. O nome da função é "compara"
e o tipo de retorno é inteiro (int). Se os dois números são iguais, a função deve retornar zero. Se o primeiro argumento 
é menor que o segundo, a função retorna -1. Senão, se o primeiro argumento for maior que o segundo, a função retorna 1.

