#include<iostream>
using namespace std;
class Funcoverload {
public:
    
    void func()
    {
	cout<<"I am no arg func"<<endl;
    }
    void func(int x)
    {
	cout<<"I am wth arg int func"<<endl;
    }
    void func(double x)
    {
	cout<<"I am with arg string func"<<endl;
    }

};


int main()
{
   Funcoverload fo;
   fo.func();
   fo.func(10);
   fo.func(3.14);
   return 0;
    

}
