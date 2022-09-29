#include<iostream>
using namespace std;
namespace space1
{
    int a=100;
    void show(){
        cout<<"namespace space1 "<<a;
    }
}
namespace space2{
    int a=200;
    void show(){
        cout<<"namespace space2 "<<a;
    }
}
int main(){
    space1::show();
    cout<<endl;
    space2::show();
    cout<<"\n\n";
    return 0;
}
