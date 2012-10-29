void remove(int *v, int* n, int posicao);


void remove(int *v, int* n, int posicao){
  int i;

  for(i = posicao; i < *n - 1; i++){
    v[i] = v[i + 1];
  }
  (*n)--; //mesmo que n = n - 1;

}
