void le_vetor(int *v, int *n);


void le_vetor(int *v, int *n){
  int i;

  puts("Digite o tamanho do vetor");
  scanf("%d", n);

  puts("Digite os elementos do vetor");
  for(i = 0; i < *n; i++){
    scanf("%d", &v[i]);
  }
}
