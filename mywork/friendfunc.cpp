#include<iostream>
using namespace std;
class Complex
{
private:
    int a,b;
public:
    void setData(int x,int y)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        cout<<"Inside showData function"<<endl;
        cout<<"a= "<<a<<" b= "<<b<<endl;
    }
    friend void frd(Complex);
};

void frd(Complex c)
{
    cout<<"Inside friend function"<<endl;
    cout<<"Sum= "<<c.a+c.b<<endl;
}
int main()
{
    cout<<"Inside main function"<<endl;
    Complex c1;
    c1.setData(10,20);
    frd(c1);
    c1.showData();
     
    return 0;
}
