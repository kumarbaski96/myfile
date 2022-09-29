#include <stdlib.h>
#include <string.h>
#include<iostream>
using namespace std;

int main( void )
  {
    char buffer[80];

    cout<<bzero( buffer, 80 );
    return EXIT_SUCCESS;
  }