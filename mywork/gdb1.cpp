#include <iostream>
using namespace std;

int divint(int, int);
int main()
{
   int x = 5, y = 2;
   cout << divint(x, y);

   x =3; y = 1;
   cout << divint(x, y);

   return 0;
}

int divint(int a, int b)
{
   return a / b;
}
