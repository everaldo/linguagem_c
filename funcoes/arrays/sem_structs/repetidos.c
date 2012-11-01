void repetidos(int *v, int n, int* repetidos, int *tam_repetidos);



void repetidos(int *v, int n, int* repetidos, int *tam_repetidos){
  int i, j, k;

  *tam_repetidos = 0;

  for(i = 0; i < n - 1; i++){
    for(j = i + 1; j < n; j++){
      if (v[i] == v[j]){
        //verifica se o número já está no vetor de repetidos
        for(k = 0; k < *tam_repetidos; k++){
          if (repetidos[k] == v[i]){
            break; //o número já estava no vetor de repetidos. Não insere e sai do loop
          }
        }
        if (k == (*tam_repetidos)){ //significa que o número não estava no vetor de repetidos. Insere-o
          repetidos[*tam_repetidos] = v[i];
          (*tam_repetidos)++;
        }
        break; //verifica proximo número
      }
    }
  }
}
