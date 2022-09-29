#include <cstdio>
#include <iostream>
#include<string>
using namespace std;

int main() {
  char buffer[100];
  int age = 23;
  char c[]="hello";

  // print "My age is " and age variable to buffer variable
  sprintf(buffer, "My age is %d%c\n", age, c);

  // print buffer variable
  cout<< buffer<<endl;
  cout<<c;

  return 0;
}
