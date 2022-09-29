#include<iostream>
using namespace std;

class A{
    int x;
    friend class B;
};
class B{
public:
    void display(A a1){
        a1.x=20;
        cout<<"Value of x is: "<<a1.x<<endl;
    }
};
int main(){
    A a;
    B b;
    b.display(a);
    return 0;
};
