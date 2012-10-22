# Arrays (Vetores)


1\. Considerando uma arquitetura de computador onde o tipo *char* tem tamanho 1 byte, o *int* 4 bytes e o *double* 8 bytes,
indique a quantidade mínima de bytes necessária para alocar cada um dos seguintes vetores:

```c
  char nome[100];
  int  v[100];
  double w[100];

```

2\. Explique de maneira sucinta o que o código abaixo faz:

```c
  int v[5] = {0, 0, 0, 0, 0};

```


3\. O resultado do código abaixo é equivalente ao do exercício 2?


```c
  int v[5];
  int i;

  for(i = 0; i < 5; i++){
    v[i] = 0;
  }

```

4\. Suponha um array de inteiros de tamanho 100 `int v[100]`. Indique a expressão necessária para acessar o primeiro, o décimo e o último elemento.
Dica: Para acessar o elemento de um array, você deve fornecer o índice entre o sinal de colchetes após o nome do array `v[indice]`



5\. Explique o trecho de código abaixo:


```c
  int i, v[100], n;

  scanf("%d", &n);

  for(i = 0; i < n; i ++){
    scanf("%d", &v[i]);
  }

  for(i = n - 1; i >= 0; i--){
    printf("%d ", v[i]);
  }
  printf("\n");

```
















