#include<iostream>
using namespace std;
int main()
{
    int num=30,fact=1;
    for(int i=num;i>1;i--)
    {
        fact*=i;
    }
    cout<<"fact= "<<fact;
}
