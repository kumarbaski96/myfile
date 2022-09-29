#include<iostream>
using namespace std;

class Test1{
    int a,b;
public:
    void setter(int a,int b);//setter
    int getter();//getter
};

void Test1::setter(int a,int b){
    this->a=a;
    this->b=b;
}
int Test1::getter(){
    cout<<"Sum= ";
   return a+b;
}

int main(){
    Test1 t1;
    t1.setter(20,30);
    cout<<t1.getter()<<endl;
    return 0;
}
