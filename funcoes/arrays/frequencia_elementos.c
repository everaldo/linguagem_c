void frequencia_elementos(int* v, int n, int *elementos, int *frequencia, int *tam_elementos);


void frequencia_elementos(int* v, int n, int *elementos, int *frequencia, int *tam_elementos){
  int i, j, repetido;

  *tam_elementos = 0;

  for(i = 0; i < n ; i++){
    repetido = 0;
    for(j = 0; j < tam_elementos; j++){
      if (v[i] == elementos[j]){
        frequencias[j]++;
        repetido = 1;
        break;
      }
    }
    if (! repetido){
      elementos[*tam_elementos] = v[i];
      frequencias[*tam_elementos] = 1;
      *tam_elementos++;
    }
  }
}
