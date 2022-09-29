#include<iostream>
using namespace std;

class A{
public:
    int x,y;
public:
    ~A(){
        cout<<"destructor invoked"<<endl;
    }
    
    void sum(int a,int b){
    int c;
    c=a+b;
    cout<<"sum= "<<c<<endl;
}
};

int main(){
    A a;
    a.sum(10,20);
    return 0;
    
}
