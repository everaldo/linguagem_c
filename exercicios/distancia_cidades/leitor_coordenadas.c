#include <stdio.h>

int main(){
  char cidade[50];
  float latitude, longitude; //a palavra long é reservada na linguagem C, então não é possível criar uma variável com o nome long
                             //uma alternativa seria usar y para latitude e x para longitude

  /* Importante considerar o risco de buffer overflow na leitura de strings com scanf. O mais seguro é utilizar fgets + sscanf */

  while( scanf("%[^:]: %f %f\n",cidade, &latitude, &longitude) != EOF){
    printf("%s: %f %f\n",cidade, latitude, longitude);
  } 

  return 0;
}
