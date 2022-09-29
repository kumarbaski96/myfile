#include<iostream>
using namespace std;
class Calc{
    public:
    int x=20,y=10,z=0;
    void add(){
        z=x+y;
        cout<<"result = "<<z<<endl;
        sub();
    }
    void sub(){
        z=x-y;
        cout<<"result = "<<z<<endl;
         mul();
        
    }
    void mul(){
        z=x*y;
        cout<<"result = "<<z<<endl;
        div();
    }
    void div(){
        z=y/0;
        cout<<"result = "<<z<<endl;
    }
};
int main(){
    Calc c;
    c.add();
}
