void insercao(int *v, int* n, int posicao, int x);


void insercao(int *v, int* n, int posicao, int x){
  int i;

  (*n)++;
  for(i = *n - 1;  i > posicao; i--){
    v[i] = v[i - 1];
  }
  v[i] = x;

}
