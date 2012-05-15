//Para compilar utilize a opção -lm

#include <stdio.h>
#include <math.h>

#define PI 3.141592
#define RADIUS 6371 //Raio da Terra

float grausRadianos(float graus){
  return (graus * PI) / 180.0;
}

float calculo_distancia(float yo, float xo, float yd, float xd){
  float lat_o, longi_o, lat_d, longi_d;
  
  lat_o = grausRadianos(yo);
  longi_o = grausRadianos(xo);
  lat_d = grausRadianos(yd);
  longi_d = grausRadianos(xd);



  float temp = (sin(lat_o) * sin(lat_d)) + (cos(lat_o) * cos(lat_d) * cos(longi_o - longi_d)) ;
  return acos(temp) * RADIUS;

}


int main(){

  char origem[100], destino[100];
  float xo, yo, xd, yd; //y é latitude e x longitude
  float distancia = 0.0;

  printf("Digite o nome da cidade de origem, dois pontos (:) seguidos da latitude e longitude\n");
  scanf("%[^:]: %f %f", origem, &yo, &xo);
  printf("Digite o nome da cidade de destino, dois pontos (:) seguidos da latitude e longitude\n");
  scanf("%[^:]: %f %f", destino, &yd, &xd);
 
  distancia = calculo_distancia(yo, xo, yd, xd);
 
  printf("A distância entre %s e %s é igual a %f\n", origem, destino, distancia);

  return 0;
}



