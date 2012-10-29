void distintos(int *v, int n, int* distintos, int *tam_distintos);



void distintos(int *v, int n, int* distintos, int *tam_distintos){
  int i, j, repetido;

  *tam_distintos = 0;

  for(i = 0; i < n ; i++){
    repetido = 0;
    for(j = 0; j < *tam_distintos; j++){
      if (v[i] == distintos[j]){
        repetido = 1;
        break;
      }
    }
    if (! repetido){
      distintos[*tam_distintos] = v[i];
      *tam_distintos++;
    }
  }
}
