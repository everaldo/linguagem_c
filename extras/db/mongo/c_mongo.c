/* 22/03/2014 - Pedro Henrique A. Cruz - @phinfonet
    Exemplo de C e mongoDB
*/
#include <stdio.h>
#include <stdlib.h>
// header for c-mongo lib
#include "mongo.h"

int main(int argc, char const *argv[])
{
  mongo conn[1];
  // int status = mongo_client( conn, "127.0.0.1", 27017 );
  int Age;
  char FirstName[25], LastName[25], Course[20];
/*
  if( status != MONGO_OK ) {
      switch ( conn->err ) {
        case MONGO_CONN_NO_SOCKET:  printf( "no socket\n" ); return 1;
        case MONGO_CONN_FAIL:       printf( "connection failed\n" ); return 1;
        case MONGO_CONN_NOT_MASTER: printf( "not master\n" ); return 1;
      }
  }
*/
  printf("Type student first name: ");
  scanf("%s", FirstName);
  printf("Type student last name: ");
  scanf("%s", LastName);
  printf("Type student course: ");
  scanf("%s", Course);
  printf("Type student age: ");
  scanf("%s", Age);
  // mongo insertion
  mongo_insert( conn, "students", FirstName, LastName, Age, Course);
  mongo_destroy( conn );
  return 0;
}