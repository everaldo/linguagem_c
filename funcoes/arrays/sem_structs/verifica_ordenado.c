int verifica_ordenado(int* v, int n){
  int i;
  int ordenado = 1;
  
  for(i = 0; i < n - 1; i++){
    if ( v[i] > v[i + 1]){
      ordenado = 0;
      break;
    }
  }
  return ordenado;
}
