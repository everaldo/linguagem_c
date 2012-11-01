void imprime_vetor(int *v, int *n);


void imprime_vetor(int *v, int *n){
  int i;

  for(i = 0; i < *n; i++){
    printf("%d ", v[i]);
  }
  puts("");
}
