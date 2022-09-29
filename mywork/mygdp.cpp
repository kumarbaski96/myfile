#include<iostream>
using namespace std;

float dvd(int a, int b){
  float t=a/b;
  return t;
}

int main()
{
	int a=20, b=0, t;
	cout<<"a =  "<<a<<endl;
	cout<<"b =  "<<b<<endl;
        cout<<"result =  "<< dvd(a,b) <<endl;
	return 0;
}
