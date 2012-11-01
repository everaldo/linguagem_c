void concatenacao(int *v, int n, int *u, int m);



void concatenacao(int *v, int n, int *u, int m, int *concatenados, int *tam_concatenados){
  int i;

  *tam_concatenados = n + m;

  //copia primeiro array
  for(i = 0; i < n; i++){
    concatenados[i] = v[i];
  }

  //copia segundo array
  for(i = 0; i < m; i++){
    concatenados[n + i] = u[i];
  }
}
