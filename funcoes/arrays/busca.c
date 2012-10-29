
int busca(int* v, int n, int x);

int busca(int* v, int n, int x){
  int i;

  for(i = 0; i < n; i++){
    if (v[i] == x){
      return i; //termina a busca e sai da função: posição de x foi encontrada
    }
  }
  return n; //x não foi encontrado. Retorna n (lembrando que a última posição válida é n - 1)

}





